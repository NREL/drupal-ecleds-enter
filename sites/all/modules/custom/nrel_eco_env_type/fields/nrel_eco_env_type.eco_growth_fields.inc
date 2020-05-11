<?php

function nrel_eco_env_type_field_eco_growth($year, $times) {
  if (!$times) return;

  $field_name = 'field_env_eco_eco_growth' . $year;
  $label = 'Economic Growth ' . $year;
  $bundle = 'environmental_and_economical';
  $entity_type = 'node';

  $prior_field = field_read_field($field_name, array('include_inactive' => TRUE));

  if (empty($prior_field)) {
    $new_field = factory_field($field_name);

    field_create_field($new_field);
  }

  $prior_instance = field_read_instance($entity_type, $field_name, $bundle);
  if (empty($prior_instance)) {
    $new_instance = factory_field_instance($label, $field_name, $bundle);

    field_create_instance($new_instance);
  }

  $year += 1;
  $times -= 1;
  nrel_eco_env_type_field_eco_growth($year, $times);
}
