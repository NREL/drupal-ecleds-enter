<?php
/**
 * @file
 * ecleds_baseline_workbook_entity_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecleds_baseline_workbook_entity_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recent_emission_basline|node|baseline_workbook|form';
  $field_group->group_name = 'group_recent_emission_basline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'baseline_workbook';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Most Recent Emissions Baseline (National Communication)',
    'weight' => '8',
    'children' => array(
      0 => 'field_collection_emissions_sect',
      1 => 'field_overal_emissions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recent-emission-basline field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_recent_emission_basline|node|baseline_workbook|form'] = $field_group;

  return $export;
}
