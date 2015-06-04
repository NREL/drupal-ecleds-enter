<?php
/**
 * @file
 * ecleds_operating_unit_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecleds_operating_unit_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ou_activities|node|operating_unit|form';
  $field_group->group_name = 'group_ou_activities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'operating_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Activities',
    'weight' => '5',
    'children' => array(
      0 => 'field_op_unit_toc_activities',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ou-activities field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ou_activities|node|operating_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ou_assistance|node|operating_unit|form';
  $field_group->group_name = 'group_ou_assistance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'operating_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Assistance',
    'weight' => '7',
    'children' => array(
      0 => 'field_op_toc_assistance',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ou-assistance field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ou_assistance|node|operating_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ou_bureau|node|operating_unit|form';
  $field_group->group_name = 'group_ou_bureau';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'operating_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bureau',
    'weight' => '2',
    'children' => array(
      0 => 'field_operating_unit_bureau',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ou-bureau field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ou_bureau|node|operating_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ou_challenges|node|operating_unit|form';
  $field_group->group_name = 'group_ou_challenges';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'operating_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Challenges',
    'weight' => '6',
    'children' => array(
      0 => 'field_op_toc_challenges',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ou-challenges field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ou_challenges|node|operating_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ou_countries|node|operating_unit|form';
  $field_group->group_name = 'group_ou_countries';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'operating_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Countries',
    'weight' => '3',
    'children' => array(
      0 => 'field_opearting_unit_country',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ou-countries field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ou_countries|node|operating_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ou_theory|node|operating_unit|form';
  $field_group->group_name = 'group_ou_theory';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'operating_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Theory of Change',
    'weight' => '4',
    'children' => array(
      0 => 'field_theory_of_change',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ou-theory field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ou_theory|node|operating_unit|form'] = $field_group;

  return $export;
}
