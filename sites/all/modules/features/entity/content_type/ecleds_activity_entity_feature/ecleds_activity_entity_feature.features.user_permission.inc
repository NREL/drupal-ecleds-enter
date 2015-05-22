<?php
/**
 * @file
 * ecleds_activity_entity_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ecleds_activity_entity_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_results'.
  $permissions['create field_results'] = array(
    'name' => 'create field_results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_results'.
  $permissions['edit field_results'] = array(
    'name' => 'edit field_results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_results'.
  $permissions['edit own field_results'] = array(
    'name' => 'edit own field_results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_results'.
  $permissions['view field_results'] = array(
    'name' => 'view field_results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_results'.
  $permissions['view own field_results'] = array(
    'name' => 'view own field_results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
