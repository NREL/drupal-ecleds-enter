<?php
/**
 * @file
 * ecleds_environmental_and_economical_entity_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecleds_environmental_and_economical_entity_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emissions|node|environmental_and_economical|form';
  $field_group->group_name = 'group_emissions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GHG Emissions',
    'weight' => '10',
    'children' => array(
      0 => 'field_env_eco_ghg_emissions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_emissions|node|environmental_and_economical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forested_area|node|environmental_and_economical|form';
  $field_group->group_name = 'group_forested_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Forested Area',
    'weight' => '6',
    'children' => array(
      0 => 'field_forested_source',
      1 => 'field_env_eco_forested',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-forested-area field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_forested_area|node|environmental_and_economical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ghg_growth|node|environmental_and_economical|form';
  $field_group->group_name = 'group_ghg_growth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GHG Growth (%)',
    'weight' => '5',
    'children' => array(
      0 => 'field_ghg_growth_source',
      1 => 'field_ghg_growth_20_year',
      2 => 'field_ghg_growth_5_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ghg-growth field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ghg_growth|node|environmental_and_economical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_growth|node|environmental_and_economical|form';
  $field_group->group_name = 'group_growth';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Economic Growth',
    'weight' => '4',
    'children' => array(
      0 => 'field_econ_growth_source',
      1 => 'field_gpd_avg_annual_01_10',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-growth field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_growth|node|environmental_and_economical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ipcc|node|environmental_and_economical|form';
  $field_group->group_name = 'group_ipcc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GHG Emissions by Sectors',
    'weight' => '9',
    'children' => array(
      0 => 'field_env_eco_ipcc_energy',
      1 => 'field_env_eco_ipcc_ind',
      2 => 'field_env_eco_ipcc_ag',
      3 => 'field_env_eco_ipcc_waste',
      4 => 'field_env_eco_ipcc_land',
      5 => 'field_env_eco_ipcc_bunker',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ipcc|node|environmental_and_economical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_economic_sectors|node|environmental_and_economical|form';
  $field_group->group_name = 'group_key_economic_sectors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key Economic Sectors (2013)',
    'weight' => '2',
    'children' => array(
      0 => 'field_key_eco_sector_source',
      1 => 'field_key_eco_sector_agriculture',
      2 => 'field_key_eco_sector_industry',
      3 => 'field_services',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Key Economic Sectors (2013)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-key-economic-sectors field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_key_economic_sectors|node|environmental_and_economical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_major_eco_sect|node|environmental_and_economical|form';
  $field_group->group_name = 'group_major_eco_sect';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Economic Sectors Major',
    'weight' => '6',
    'children' => array(
      0 => 'field_env_eco_sectors',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_major_eco_sect|node|environmental_and_economical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_renewable_energy|node|environmental_and_economical|form';
  $field_group->group_name = 'group_renewable_energy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Renewable Energy',
    'weight' => '7',
    'children' => array(
      0 => 'field_renewable_energy_source',
      1 => 'field_contrib_to_electricity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-renewable-energy field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_renewable_energy|node|environmental_and_economical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|environmental_and_economical|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '11',
    'children' => array(
      0 => 'group_ipcc',
      1 => 'group_growth',
      2 => 'group_emissions',
      3 => 'group_major_eco_sect',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|node|environmental_and_economical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_3_ghg_economic_sectors|node|environmental_and_economical|form';
  $field_group->group_name = 'group_top_3_ghg_economic_sectors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'environmental_and_economical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top 3 GHG Emitting Economic Sectors in 2010',
    'weight' => '3',
    'children' => array(
      0 => 'field_ghg_emitting_sector_1st',
      1 => 'field_ghg_emitting_sector_2nd',
      2 => 'field_ghg_emitting_sector_3rd',
      3 => 'field_ghg_emitting_sector_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-top-3-ghg-economic-sectors field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_top_3_ghg_economic_sectors|node|environmental_and_economical|form'] = $field_group;

  return $export;
}
