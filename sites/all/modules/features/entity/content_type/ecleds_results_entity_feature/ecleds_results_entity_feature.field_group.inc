<?php
/**
 * @file
 * ecleds_results_entity_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecleds_results_entity_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_completion_date|node|ecleds_results|form';
  $field_group->group_name = 'group_completion_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_results';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Completion Date',
    'weight' => '3',
    'children' => array(
      0 => 'field_completion_year',
      1 => 'field_completion_month',
      2 => 'field_completion_ongoing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Completion Date',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-completion-date field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_completion_date|node|ecleds_results|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_target_date|node|ecleds_results|form';
  $field_group->group_name = 'group_target_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_results';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Target Date',
    'weight' => '4',
    'children' => array(
      0 => 'field_target_year',
      1 => 'field_target_month',
      2 => 'field_target_ongoing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Target Date',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-target-date field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_target_date|node|ecleds_results|form'] = $field_group;

  return $export;
}
