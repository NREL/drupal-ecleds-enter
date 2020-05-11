<?php
/**
 * @file
 * ecleds_ppr_gcc_indicator_entity_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_ppr_gcc_indicator_entity_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ecleds_ppr_gcc_indicator_entity_feature_node_info() {
  $items = array(
    'nrel_ecleds_indicator' => array(
      'name' => t('PPR GCC Indicator'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('PPR Indicator Name & Number'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
