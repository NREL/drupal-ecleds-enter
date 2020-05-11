<?php
/**
 * @file
 * ecleds_operating_unit_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ecleds_operating_unit_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_operating_unit_bureau'.
  $permissions['create field_operating_unit_bureau'] = array(
    'name' => 'create field_operating_unit_bureau',
    'roles' => array(
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_operating_unit_bureau'.
  $permissions['edit field_operating_unit_bureau'] = array(
    'name' => 'edit field_operating_unit_bureau',
    'roles' => array(
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_operating_unit_bureau'.
  $permissions['edit own field_operating_unit_bureau'] = array(
    'name' => 'edit own field_operating_unit_bureau',
    'roles' => array(
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_operating_unit_bureau'.
  $permissions['view field_operating_unit_bureau'] = array(
    'name' => 'view field_operating_unit_bureau',
    'roles' => array(
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_operating_unit_bureau'.
  $permissions['view own field_operating_unit_bureau'] = array(
    'name' => 'view own field_operating_unit_bureau',
    'roles' => array(
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
