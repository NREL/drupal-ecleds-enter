<?php
/**
 * @file
 * ecleds_program_level_progress_entity_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecleds_program_level_progress_entity_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ghg_reduction|field_collection_item|field_collection_impacted_year|form';
  $field_group->group_name = 'group_ghg_reduction';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_collection_impacted_year';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GHG Reduction	',
    'weight' => '3',
    'children' => array(
      0 => 'field_prog_lev_prog_ce',
      1 => 'field_prog_lev_prog_sl',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ghg-reduction field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ghg_reduction|field_collection_item|field_collection_impacted_year|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_long_term_imact|node|program_level_progress|form';
  $field_group->group_name = 'group_long_term_imact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_level_progress';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Long-term impact',
    'weight' => '2',
    'children' => array(
      0 => 'field_collection_impacted_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-long-term-imact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_long_term_imact|node|program_level_progress|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_targ_stat|node|program_level_progress|form';
  $field_group->group_name = 'group_targ_stat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program_level_progress';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Target, Status, Baseline,  Framework',
    'weight' => '3',
    'children' => array(
      0 => 'field_prog_lev_prog_target_1',
      1 => 'field_prog_lev_prog_status_1',
      2 => 'field_prog_lev_prog_baseline_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-targ-stat field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_targ_stat|node|program_level_progress|form'] = $field_group;

  return $export;
}
