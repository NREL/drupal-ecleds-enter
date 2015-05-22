<?php

function nrel_eco_env_type_ipcc_energy() {

  $field_name = 'field_env_eco_ipcc_energy';
  $label = 'Energy (MtCO2e)';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_ipcc_ind() {

  $field_name = 'field_env_eco_ipcc_ind';
  $label = 'Industrial Processes (MtCO2e)';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_ipcc_ag() {

  $field_name = 'field_env_eco_ipcc_ag';
  $label = 'Agriculture (MtCO2e)';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_ipcc_waste() {

  $field_name = 'field_env_eco_ipcc_waste';
  $label = 'Waste (MtCO2e)';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_ipcc_land() {

  $field_name = 'field_env_eco_ipcc_land';
  $label = 'Land Use and Forestry (Net Forest Conversion) (MtCO2e)';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_ipcc_bunker() {

  $field_name = 'field_env_eco_ipcc_bunker';
  $label = 'Bunker Fuels (MtCO2e)';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}