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
  $field_group->identifier = 'group_gcc_activities|node|ecleds_implementing_mechanism|form';
  $field_group->group_name = 'group_gcc_activities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Activities',
    'weight' => '4',
    'children' => array(
      0 => 'field_activities_ent_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gcc-activities field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gcc_activities|node|ecleds_implementing_mechanism|form'] = $field_group;

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
    'weight' => '16',
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
  $field_group->parent_name = 'group_im_contrib_prog_goals';
  $field_group->data = array(
    'label' => 'GCC Results Framework',
    'weight' => '23',
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
  $field_group->identifier = 'group_im_contrib_prog_goals|node|ecleds_implementing_mechanism|form';
  $field_group->group_name = 'group_im_contrib_prog_goals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contribution to Program Goals',
    'weight' => '1',
    'children' => array(
      0 => 'field_apg_milestone',
      1 => 'field_im_supports_toc',
      2 => 'group_gcc_results_framework',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-im-contrib-prog-goals field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_im_contrib_prog_goals|node|ecleds_implementing_mechanism|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_im_gcc_standard_ind|node|ecleds_implementing_mechanism|form';
  $field_group->group_name = 'group_im_gcc_standard_ind';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GCC Standard Indicator',
    'weight' => '3',
    'children' => array(
      0 => 'field_impl_mech_gcc_indicator',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-im-gcc-standard-ind field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_im_gcc_standard_ind|node|ecleds_implementing_mechanism|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_im_overview|node|ecleds_implementing_mechanism|form';
  $field_group->group_name = 'group_im_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'IM Overview',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_impl_mech_alt_name',
      2 => 'field_impl_mech_usaid_db_number',
      3 => 'field_impl_mech_website_link',
      4 => 'field_implementer',
      5 => 'field_activity_operating_unit',
      6 => 'field_im_number',
      7 => 'field_im_funding_pillar',
      8 => 'field_impl_mech_award_number',
      9 => 'field_im_countries',
      10 => 'title',
      11 => 'group_impl_mech_perf_end_date',
      12 => 'group_impl_mech_perf_start_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-im-overview field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_im_overview|node|ecleds_implementing_mechanism|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_impl_mech_perf_end_date|node|ecleds_implementing_mechanism|form';
  $field_group->group_name = 'group_impl_mech_perf_end_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ecleds_implementing_mechanism';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_im_overview';
  $field_group->data = array(
    'label' => 'Performance End Date',
    'weight' => '9',
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
  $field_group->parent_name = 'group_im_overview';
  $field_group->data = array(
    'label' => 'Performance Start Date',
    'weight' => '8',
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
