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