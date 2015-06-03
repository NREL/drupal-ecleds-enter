<?php
/**
 * @file
 * ecleds_implementing_mechanism_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecleds_implementing_mechanism_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gcc_results_framework|node|ecleds_implementing_mechanism|default';
  $field_group->group_name = 'group_gcc_results_framework';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GCC Results Framework',
    'weight' => '14',
    'children' => array(
      0 => 'field_gcc_intermediate_result',
      1 => 'field_gcc_intermediate_result_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'GCC Results Framework',
      'instance_settings' => array(
        'classes' => 'group-gcc-results-framework field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_gcc_results_framework|node|ecleds_implementing_mechanism|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gcc_results_framework|node|ecleds_implementing_mechanism|form';
  $field_group->group_name = 'group_gcc_results_framework';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GCC Results Framework',
    'weight' => '13',
    'children' => array(
      0 => 'field_gcc_intermediate_result',
      1 => 'field_gcc_intermediate_result_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'GCC Results Framework',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_gcc_results_framework|node|ecleds_implementing_mechanism|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_impl_mech_perf_end_date|node|ecleds_implementing_mechanism|form';
  $field_group->group_name = 'group_impl_mech_perf_end_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Performance End Date',
    'weight' => '7',
    'children' => array(
      0 => 'field_impl_mech_perf_end_month',
      1 => 'field_impl_mech_perf_end_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Performance End Date',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-impl-mech-perf-end-date field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_impl_mech_perf_end_date|node|ecleds_implementing_mechanism|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_impl_mech_perf_start_date|node|ecleds_implementing_mechanism|form';
  $field_group->group_name = 'group_impl_mech_perf_start_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Performance Start Date',
    'weight' => '6',
    'children' => array(
      0 => 'field_impl_mech_perf_start_month',
      1 => 'field_impl_mech_perf_start_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Performance Start Date',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-impl-mech-perf-start-date field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_impl_mech_perf_start_date|node|ecleds_implementing_mechanism|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_performance_end|node|ecleds_implementing_mechanism|default';
  $field_group->group_name = 'group_performance_end';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Performance End Date',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Performance End Date',
      'instance_settings' => array(
        'classes' => 'group-performance-end field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_performance_end|node|ecleds_implementing_mechanism|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_performance_start|node|ecleds_implementing_mechanism|default';
  $field_group->group_name = 'group_performance_start';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Performance Start Date',
    'weight' => '5',
    'children' => array(
      0 => 'field_impl_mech_perf_start_month',
      1 => 'field_impl_mech_perf_start_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Performance Start Date',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_performance_start|node|ecleds_implementing_mechanism|default'] = $field_group;

  return $export;
}
