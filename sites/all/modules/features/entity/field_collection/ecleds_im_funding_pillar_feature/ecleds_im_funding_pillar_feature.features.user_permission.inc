<?php
/**
 * @file
 * ecleds_im_funding_pillar_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ecleds_im_funding_pillar_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_im_funding_pillar'.
  $permissions['create field_im_funding_pillar'] = array(
    'name' => 'create field_im_funding_pillar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_im_funding_pillar'.
  $permissions['edit field_im_funding_pillar'] = array(
    'name' => 'edit field_im_funding_pillar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_im_funding_pillar'.
  $permissions['edit own field_im_funding_pillar'] = array(
    'name' => 'edit own field_im_funding_pillar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_im_funding_pillar'.
  $permissions['view field_im_funding_pillar'] = array(
    'name' => 'view field_im_funding_pillar',
    'roles' => array(
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_im_funding_pillar'.
  $permissions['view own field_im_funding_pillar'] = array(
    'name' => 'view own field_im_funding_pillar',
    'roles' => array(
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
