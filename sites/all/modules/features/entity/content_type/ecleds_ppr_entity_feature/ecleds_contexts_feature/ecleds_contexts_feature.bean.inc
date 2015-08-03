<?php
/**
 * @file
 * ecleds_contexts_feature.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function ecleds_contexts_feature_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'section_description';
  $bean_type->label = 'Section Description';
  $bean_type->options = '';
  $bean_type->description = 'A description that is added to the top of a section (OU/Country Overview, Milestone, IM, Country LEDS Plans, EC-LEDS Plans).';
  $export['section_description'] = $bean_type;

  return $export;
}
