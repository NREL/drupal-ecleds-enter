<?php
/**
 * @file
 * ecleds_implementing_mechanism_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_implementing_mechanism_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ecleds_implementing_mechanism_feature_node_info() {
  $items = array(
    'ecleds_implementing_mechanism' => array(
      'name' => t('Implementing Mechanism'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Implementing Mechanism Number and Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
