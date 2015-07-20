<?php
/**
 * @file
 * ecleds_user_field_permissions_roles_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ecleds_user_field_permissions_roles_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_nrel_ecleds_full_name'
  $field_bases['field_nrel_ecleds_full_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nrel_ecleds_full_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
