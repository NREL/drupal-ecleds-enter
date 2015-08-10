<?php

/**
 * @file
 * This file contains the main theme functions hooks and overrides.
 */

/**
 * Implements template_preprocess_entity().
 */
function ecleds_preprocess_entity(&$vars, $hook) {
  // For decimal fields in field collection, suppress zeros after the decimal point.
  $decimal_fields = array(
    'field_fy14_baseline',
    'field_fy14_target',
    'field_fy14_results',
    'field_fy15_target',
    'field_fy15_results',
    'field_fy16_target',
    'field_fy17_target',
    'field_fy18_target',
  );
  if (isset($vars['elements']['#bundle']) && ('field_impl_mech_gcc_indicator' == $vars['elements']['#bundle']))  {
    foreach ($decimal_fields as $decimal_field) {
      if (isset($vars['content'][$decimal_field][0]['#markup'])) {
        $vars['content'][$decimal_field][0]['#markup'] = rtrim(rtrim($vars['content'][$decimal_field][0]['#markup'], '0'), '.');
      }
    }
  }
}

/**
 * Override or insert variables into the field template.
 */
function ecleds_preprocess_field(&$vars, $hook) {
  // For the completion date and expected completion date fields, assign labels
  // and classes depending on which fields are present.
  $field_name = $vars['element']['#field_name'];
  if (in_array($field_name, array('field_completion_month', 'field_completion_year', 'field_expected_completion_month', 'field_field_exp_compl_year'))) {
    $node = $vars['element']['#object'];
    $lang = $node->language;
    $vars['label'] = '';


    switch ($field_name) {
      case 'field_completion_month':
        $vars['label'] = t('Completion Date:&nbsp;');
        break;
      case 'field_expected_completion_month':
        $vars['label'] = t('Expected Completion Date:&nbsp;');
        if (empty($node->field_completion_month[$lang][0]['value']) && empty($node->field_completion_year[$lang][0]['value'])) {
          $vars['classes_array'][] = 'no-completion-date';
        }
        break;
      case 'field_completion_year':
        if (empty($node->field_completion_month[$lang][0]['value'])) {
          $vars['label'] = t('Completion Date:&nbsp;');
        }
        break;
      case 'field_field_exp_compl_year':
        if (empty($node->field_expected_completion_month[$lang][0]['value'])) {
          $vars['label'] = t('Expected Completion Date:&nbsp;');
          $vars['classes_array'][] = 'no-expected-completion-month';
          if (empty($node->field_completion_month[$lang][0]['value']) && empty($node->field_completion_year[$lang][0]['value'])) {
            $vars['classes_array'][] = 'no-completion-date';
          }
        }
        break;
    }
  }
  // For decimal fields, suppress zeros after the decimal point.
  $decimal_fields = array(
    'field_key_eco_sector_agriculture',
    'field_key_eco_sector_industry',
    'field_services',
    'field_gpd_avg_annual_01_10',
    'field_ghg_growth_20_year',
    'field_ghg_growth_5_year',
    'field_env_eco_forested',
    'field_contrib_to_electricity',
  );
  if (in_array($field_name, $decimal_fields)) {
    $vars['items'][0]['#markup'] = str_replace(".0%", "%", str_replace("0%", "%", $vars['items'][0]['#markup']));
  }
}

/**
 * Processes variables for node.tpl.php
 */
function ecleds_preprocess_node(&$variables) {
  if (!empty($variables['submitted'])) {
    $variables['submitted'] = '<em><strong>' . t('Author:') .  '</strong>' . ' ' . $variables['name'];
    $variables['submitted'] .= ', <strong>' . t('Date revised:') . '</strong>' . ' ' . format_date($variables['changed'], 'short') . '</em>';
  }
}

/**
 * Pre-process views.
 */
function ecleds_preprocess_views_view(&$vars) {
  $view = $vars['view'];
  switch ($view->name) {
    case 'milestone_report':
    case 'indicator_report':
      // Retheme the feed icon for the milestone and indictor reports.
      if ('page' == $view->current_display) {
        // Get the path of the data export.
        $csv_path = $view->display['views_data_export_1']->handler->options['path'];
        // Retheme the feed icon as a link with text - remember to preserve the
        // page display query.
        $vars['feed_icon'] = l('Export CSV File', $csv_path, array('query' => $_REQUEST));
      }
      break;
    default:
      break;
  }
}

function ecleds_preprocess_views_flipped_table(&$vars) {
  $view = $vars['view'];
  switch ($view->name) {
    case 'dashboard_report':
      $env_eco_panes = array(
        'dashboard_report_env_eco_ghg_pane',
        'dashboard_report_key_eco_sectors_pane',
        'dashboard_report_top3_ghg_emitting_sectors_pane',
        'dashboard_report_econ_growth_pane',
        'dashboard_report_forested_area_pane',
        'dashboard_report_renewable_energy_pane',
      );
      // Remove the first row of the env/eco tables (which display the
      // countries) for OUs where there is only one country referencing the OU.
      if (in_array($view->current_display, $env_eco_panes)) {
        if (1 == count($view->result)) {
          $vars['view']->style_plugin->options['flipped_table_header_first_field'] = FALSE;
          unset($vars['first_row_header']);
          unset($vars['rows'][0]['title']);
          unset($vars['rows_flipped']['title']);
        }
      }
      break;
    default:
      break;
  }
}

// Implements hook_theme().
function ecleds_theme(){
  return array(
    'node_form' => array(
      'arguments' => array('form' => NULL),
      'template' => 'templates/node/node-form',
      'render element' => 'form',
    ),
  );
}
