<?php

function nrel_eco_env_type_field_business_ease() {

  $field_name = 'field_env_eco_business_ease';
  $label = 'Ease of Doing Business';
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
}
