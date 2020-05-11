<?php
/**
 * @file
 * ecleds_country_leds_plans_institution_entity_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_country_leds_plans_institution_entity_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ecleds_country_leds_plans_institution_entity_feature_node_info() {
  $items = array(
    'leds_plans_institutions' => array(
      'name' => t('Country LEDS Plans, Institutions'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
