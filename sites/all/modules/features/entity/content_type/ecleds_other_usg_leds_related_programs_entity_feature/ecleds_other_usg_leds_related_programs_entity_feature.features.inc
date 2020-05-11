<?php
/**
 * @file
 * ecleds_other_usg_leds_related_programs_entity_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_other_usg_leds_related_programs_entity_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ecleds_other_usg_leds_related_programs_entity_feature_node_info() {
  $items = array(
    'other_usg_leds_related_programs' => array(
      'name' => t('Other USG LEDS-related programs'),
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
