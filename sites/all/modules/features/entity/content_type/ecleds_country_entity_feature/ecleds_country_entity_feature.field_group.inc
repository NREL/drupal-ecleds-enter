<?php
/**
 * @file
 * ecleds_country_entity_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecleds_country_entity_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_baseline|node|country|form';
  $field_group->group_name = 'group_baseline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Baseline Workbook',
    'weight' => '10',
    'children' => array(
      0 => 'field_baseline_workbook',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Baseline Workbook',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-baseline field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_baseline|node|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ecleds_other|node|country|form';
  $field_group->group_name = 'group_ecleds_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Other USG LEDS-related Programs',
    'weight' => '13',
    'children' => array(
      0 => 'field_ecleds_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ecleds-other field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ecleds_other|node|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_env_and_eco|node|country|form';
  $field_group->group_name = 'group_env_and_eco';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Env and Eco',
    'weight' => '8',
    'children' => array(
      0 => 'field_environmental_and_economic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Env and Eco',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-env-and-eco field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_env_and_eco|node|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leds|node|country|form';
  $field_group->group_name = 'group_leds';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Country LEDS Plans',
    'weight' => '9',
    'children' => array(
      0 => 'field_leds_plans_institutions',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Country LEDS Plans',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-leds field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_leds|node|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_plans|node|country|form';
  $field_group->group_name = 'group_program_plans';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'ECLEDS Prog Plans',
    'weight' => '11',
    'children' => array(
      0 => 'field_program_plans',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'ECLEDS Prog Plans',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-program-plans field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_program_plans|node|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program|node|country|form';
  $field_group->group_name = 'group_program';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'LEDS Progress',
    'weight' => '12',
    'children' => array(
      0 => 'field_nrel_ecleds_program_level',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'LEDS Progress',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-program field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_program|node|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|country|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'group_baseline',
      1 => 'group_leds',
      2 => 'group_env_and_eco',
      3 => 'group_program',
      4 => 'group_program_plans',
      5 => 'group_ecleds_other',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-tabs',
      ),
    ),
  );
  $export['group_tabs|node|country|form'] = $field_group;

  return $export;
}
