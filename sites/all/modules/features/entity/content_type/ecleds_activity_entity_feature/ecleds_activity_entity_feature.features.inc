<?php
/**
 * @file
 * ecleds_activity_entity_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_activity_entity_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ecleds_activity_entity_feature_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Activity'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Activity Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
