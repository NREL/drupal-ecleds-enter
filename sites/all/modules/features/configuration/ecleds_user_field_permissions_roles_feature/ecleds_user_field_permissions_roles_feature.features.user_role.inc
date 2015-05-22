<?php
/**
 * @file
 * ecleds_user_field_permissions_roles_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ecleds_user_field_permissions_roles_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: mission.
  $roles['mission'] = array(
    'name' => 'mission',
    'weight' => 3,
  );

  return $roles;
}
