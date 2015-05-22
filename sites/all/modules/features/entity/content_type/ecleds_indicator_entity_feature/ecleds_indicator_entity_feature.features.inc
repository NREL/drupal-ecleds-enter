<?php
/**
 * @file
 * ecleds_indicator_entity_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_indicator_entity_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ecleds_indicator_entity_feature_node_info() {
  $items = array(
    'indicator' => array(
      'name' => t('Indicator'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Indicator Number & Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
