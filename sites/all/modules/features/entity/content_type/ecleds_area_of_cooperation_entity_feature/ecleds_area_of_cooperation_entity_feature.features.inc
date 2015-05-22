<?php
/**
 * @file
 * ecleds_area_of_cooperation_entity_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_area_of_cooperation_entity_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ecleds_area_of_cooperation_entity_feature_node_info() {
  $items = array(
    'work_area' => array(
      'name' => t('Area of Cooperation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Area of Cooperation Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
