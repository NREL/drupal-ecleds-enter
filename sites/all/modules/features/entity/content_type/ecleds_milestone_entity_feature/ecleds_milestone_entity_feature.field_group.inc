<?php
/**
 * @file
 * ecleds_milestone_entity_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecleds_milestone_entity_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_completion_date|node|nrel_ecleds_milestone|default';
  $field_group->group_name = 'group_completion_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nrel_ecleds_milestone';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Completion Date',
    'weight' => '13',
    'children' => array(
      0 => 'field_completion_year',
      1 => 'field_completion_month',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-completion-date field-group-fieldset',
      ),
    ),
  );
  $export['group_completion_date|node|nrel_ecleds_milestone|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_completion_date|node|nrel_ecleds_milestone|form';
  $field_group->group_name = 'group_completion_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nrel_ecleds_milestone';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Completion Date',
    'weight' => '15',
    'children' => array(
      0 => 'field_completion_year',
      1 => 'field_completion_month',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-completion-date field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_completion_date|node|nrel_ecleds_milestone|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expected_completion_date|node|nrel_ecleds_milestone|default';
  $field_group->group_name = 'group_expected_completion_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nrel_ecleds_milestone';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Expected Completion Date',
    'weight' => '14',
    'children' => array(
      0 => 'field_field_exp_compl_year',
      1 => 'field_expected_completion_month',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-expected-completion-date field-group-fieldset',
      ),
    ),
  );
  $export['group_expected_completion_date|node|nrel_ecleds_milestone|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expected_completion_date|node|nrel_ecleds_milestone|form';
  $field_group->group_name = 'group_expected_completion_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nrel_ecleds_milestone';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Expected Completion Date',
    'weight' => '16',
    'children' => array(
      0 => 'field_field_exp_compl_year',
      1 => 'field_expected_completion_month',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-expected-completion-date field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_expected_completion_date|node|nrel_ecleds_milestone|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_note_types|node|nrel_ecleds_milestone|default';
  $field_group->group_name = 'group_note_types';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nrel_ecleds_milestone';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type',
    'weight' => '5',
    'children' => array(
      0 => 'field_nrel_ecleds_milestone_type',
      1 => 'field_milestone_type_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-note-types field-group-fieldset',
      ),
    ),
  );
  $export['group_note_types|node|nrel_ecleds_milestone|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_note_types|node|nrel_ecleds_milestone|form';
  $field_group->group_name = 'group_note_types';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nrel_ecleds_milestone';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type',
    'weight' => '7',
    'children' => array(
      0 => 'field_nrel_ecleds_milestone_type',
      1 => 'field_milestone_type_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Type',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-note-types field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_note_types|node|nrel_ecleds_milestone|form'] = $field_group;

  return $export;
}
