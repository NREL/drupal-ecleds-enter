<?php
/**
 * @file
 * ecleds_results_entity_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ecleds_results_entity_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_result_indicator_year'.
  $permissions['create field_result_indicator_year'] = array(
    'name' => 'create field_result_indicator_year',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_result_support_description'.
  $permissions['create field_result_support_description'] = array(
    'name' => 'create field_result_support_description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_result_indicator_year'.
  $permissions['edit field_result_indicator_year'] = array(
    'name' => 'edit field_result_indicator_year',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_result_support_description'.
  $permissions['edit field_result_support_description'] = array(
    'name' => 'edit field_result_support_description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_result_indicator_year'.
  $permissions['edit own field_result_indicator_year'] = array(
    'name' => 'edit own field_result_indicator_year',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_result_support_description'.
  $permissions['edit own field_result_support_description'] = array(
    'name' => 'edit own field_result_support_description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_result_indicator_year'.
  $permissions['view field_result_indicator_year'] = array(
    'name' => 'view field_result_indicator_year',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_result_support_description'.
  $permissions['view field_result_support_description'] = array(
    'name' => 'view field_result_support_description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_result_indicator_year'.
  $permissions['view own field_result_indicator_year'] = array(
    'name' => 'view own field_result_indicator_year',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_result_support_description'.
  $permissions['view own field_result_support_description'] = array(
    'name' => 'view own field_result_support_description',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
