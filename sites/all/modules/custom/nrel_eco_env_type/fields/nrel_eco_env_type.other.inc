<?php

function nrel_eco_env_type_field_business_ease() {

  $field_name = 'field_env_eco_business_ease';
  $label = 'Ease of Doing Business';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_field_climatescope() {

  $field_name = 'field_env_eco_climatescope';
  $label = 'Overall Climatescope Scores';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_field_ghg_rank() {

  $field_name = 'field_env_eco_ghg_rank';
  $label = 'GHG Rank';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_field_forested() {

  $field_name = 'field_env_eco_forested';
  $label = '% Forested Area';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_field_growth_rate() {

  $field_name = 'field_env_eco_growth_rate';
  $label = 'Economic Growth Rate %';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_field_energy_intensity() {

  $field_name = 'field_env_eco_energy_intensity';
  $label = 'Energy Intensity';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}

function nrel_eco_env_type_field_carbon_intensity() {

  $field_name = 'field_env_eco_carbon_intensity';
  $label = 'Carbon Intensity of Electricity';
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $new_field = factory_field_settings($field_name);
  $new_instance = factory_field_instance($label, $field_name, $bundle, $entity_type);

	factory_field($field_name, $new_field, $new_instance, $bundle, $entity_type);

}
