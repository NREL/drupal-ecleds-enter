<?php

/**
 * @file
 * This file contains the main theme functions hooks and overrides.
 */

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
function ecleds_preprocess_views_view(&$vars) {
  $view = $vars['view'];
  switch ($view->name) {
    case 'milestone_report':
    case 'indicator_report':
      if ('page' == $view->current_display) {
        $csv_path = $view->display['views_data_export_1']->handler->options['path'];
        $vars['feed_icon'] = l('Export CSV File', $csv_path);
      }
      break;
    default:
      break;
  }
}
