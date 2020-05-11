<?php
/**
 * @file
 * ecleds_activity_entity_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecleds_activity_entity_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_results|node|activity|form';
  $field_group->group_name = 'group_results';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Results',
    'weight' => '17',
    'children' => array(
      0 => 'field_results',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Results',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-results field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_results|node|activity|form'] = $field_group;

  return $export;
}
