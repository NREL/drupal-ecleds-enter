<?php
/**
 * @file
 * ecleds_operating_unit_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_operating_unit_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ecleds_operating_unit_feature_node_info() {
  $items = array(
    'operating_unit' => array(
      'name' => t('Operating Unit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Operating Unit Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
