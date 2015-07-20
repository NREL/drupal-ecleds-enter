<?php
/**
 * @file
 * ecleds_user_field_permissions_roles_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ecleds_user_field_permissions_roles_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_nrel_ecleds_full_name'
  $field_instances['user-user-field_nrel_ecleds_full_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_nrel_ecleds_full_name',
    'label' => 'Full Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => '',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Full Name');

  return $field_instances;
}
