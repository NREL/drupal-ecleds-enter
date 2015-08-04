<?php
/**
 * @file
 * Theme configuration.
 */

/**
 * Returns HTML for a node preview for display during node creation and editing.
 *
 * Overrides theme_node_preview() in modules/node/node.pages.inc.
 *
 * @param $variables
 *   An associative array containing:
 *   - node: The node object which is being previewed.
 *
 * @see node_preview()
 * @ingroup themeable
 */
function _pol_proc_admin_node_preview($variables) {
  $node = $variables['node'];

  $output = '<div class="preview">';
  /*if ('policy' == $node->type) {
    dsm($variables);
    // Load the node into a context.
    ctools_include('node_view', 'page_manager', 'plugins/tasks');
    $elements = page_manager_node_view_page(clone $node);
    $output .= drupal_render($elements);
    drupal_add_css(drupal_get_path('theme', 'pol_proc_theme') . '/css/colors.css');
    drupal_add_css(drupal_get_path('theme', 'pol_proc_theme') . '/css/site.css');
  } elseif ('procedure' == $node->type) {
    $output = _pol_proc_admin_node_procedure_preview($node);
  } else { */


    $preview_trimmed_version = FALSE;

    $elements = node_view(clone $node, 'teaser');
    $trimmed = drupal_render($elements);
    $elements = node_view($node, 'full');
    $full = drupal_render($elements);

    // Do we need to preview trimmed version of post as well as full version?
    if ($trimmed != $full) {
      drupal_set_message(t('The trimmed version of your post shows what your post looks like when promoted to the main page or when exported for syndication.<span class="no-js"> You can insert the delimiter "&lt;!--break--&gt;" (without the quotes) to fine-tune where your post gets split.</span>'));
      $output .= '<h3>' . t('Preview trimmed version') . '</h3>';
      $output .= $trimmed;
      $output .= '<h3>' . t('Preview full version') . '</h3>';
      $output .= $full;
    }
    else {
      $output .= $full;
    }
  //}

  $output .= "</div>\n";
  return $output;
}

function _pol_proc_admin_node_policy_preview($node) {
  module_load_include("inc", "page_manager", "plugins/tasks/page");
  $subtask_id = "node_view_panel_context";
  return page_manager_page_execute($subtask_id);
}

/**
 * Theme function to display the revisions formular.
 *
 * Overridden to simply change some terminology (e.g. current revison -> current
 * version).
 */
function pol_proc_admin_diff_node_revisions($vars) {
  $form = $vars['form'];
  $output = '';

  // Overview table:
  $header = array(
    t('Revision'),
    array('data' => drupal_render($form['submit']), 'colspan' => 2),
    array('data' => t('Operations'), 'colspan' => 2),
  );
  if (isset($form['info']) && is_array($form['info'])) {
    foreach (element_children($form['info']) as $key) {
      $row = array();
      if (isset($form['operations'][$key][0])) {
        // Note: even if the commands for revert and delete are not permitted,
        // the array is not empty since we set a dummy in this case.
        $row[] = drupal_render($form['info'][$key]);
        $row[] = drupal_render($form['diff']['old'][$key]);
        $row[] = drupal_render($form['diff']['new'][$key]);
        $row[] = drupal_render($form['operations'][$key][0]);
        $row[] = drupal_render($form['operations'][$key][1]);
        $rows[] = array(
          'data' => $row,
          'class' => array('diff-revision'),
        );
      }
      else {
        // The current revision (no commands to revert or delete).
        $row[] = array(
          'data' => drupal_render($form['info'][$key]),
          'class' => array('revision-current'),
        );
        $row[] = array(
          'data' => drupal_render($form['diff']['old'][$key]),
          'class' => array('revision-current'),
        );
        $row[] = array(
          'data' => drupal_render($form['diff']['new'][$key]),
          'class' => array('revision-current'),
        );
        $row[] = array(
          'data' => t('current version'),
          'class' => array('revision-current'),
          'colspan' => '2',
        );
        $rows[] = array(
          'data' => $row,
          'class' => array('error diff-revision'),
        );
      }
    }
  }
  $output .= theme('table__diff__revisions', array(
    'header' => $header,
    'rows' => $rows,
    'sticky' => FALSE,
    'attributes' => array('class' => 'diff-revisions'),
  ));

  $output .= drupal_render_children($form);
  return $output;
}

/**
 * Implementation of template_preprocess().
 */
function pol_proc_admin_preprocess(&$vars, $hook) {
  // Prevent PHP indexing errors on the policy or procedure panel edit page -
  // /admin/structure/pages/nojs/operation/node_view/handlers/node_view_panel_context/content
  // and
  // /admin/structure/pages/nojs/operation/node_view/handlers/node_view__panel_context_fa5202e7-5159-4dc5-87ee-1c06f572f47a/content.
  // Without the checks below, PHP complains about the following undefined
  // variables in
  // sites/all/themes/sourcetheme/panels/source-onecol/source-onecol.tpl.php:
  // title - line 57
  // messages - line 62
  // action_links - line 64
  // feed_icons - line 77
  if ($hook == 'source_onecol') {
    $vars['title'] = !empty($vars['title']) ? $vars['title'] : '';
    $vars['messages'] = !empty($vars['messages']) ? $vars['messages'] : '';
    $vars['action_links'] = !empty($vars['action_links']) ? $vars['action_links'] : '';
    $vars['feed_icons'] = !empty($vars['feed_icons']) ? $vars['feed_icons'] : '';
  } 

}
/**
 * Implementation of template_process().
 */
function pol_proc_admin_process(&$vars, $hook) {
  // I couldn't get the diff output to render in any theme other than this admin
  // theme. The brute force way to create a printable page was to strip out the
  // superfluous variables.
  if (('node' ==arg(0)) && ('moderation' == arg(2)) && ('diff' == arg(3))) {
    if (is_numeric(arg(1)) && (NULL == arg(4))) {
      if ('page' == $hook) {
        drupal_set_title('Versions for ' . $vars['node']->title);
      }
    } elseif ('view' == arg(4)) {
      if (is_numeric(arg(1)) && is_numeric(arg(5)) && is_numeric(arg(6))) {
        if (('page' == $hook) && isset($_GET['print'])) {
          $vars['title'] = 'Versions for ' . $vars['node']->title;
          $vars['breadcrumb'] = '';
          $vars['primary_local_tasks'] = $vars['secondary_local_tasks'] = array();
          $vars['page']['page_bottom'] = array();
          unset($vars['page']['content']['pol_proc_pol_proc_diff_print_link']);
        } elseif (('html' == $hook) && isset($_GET['print'])) {
          $vars['page_bottom'] = '';
          $vars['scripts'] = '';
        } elseif ('page' == $hook) {
          drupal_set_title('Versions for ' . $vars['node']->title);
        }
      }
    }
  }
}