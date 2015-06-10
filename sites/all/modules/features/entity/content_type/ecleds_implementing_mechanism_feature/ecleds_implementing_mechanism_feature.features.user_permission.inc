<?php
/**
 * @file
 * ecleds_implementing_mechanism_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ecleds_implementing_mechanism_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_im_number'.
  $permissions['create field_im_number'] = array(
    'name' => 'create field_im_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_impl_mech_alt_name'.
  $permissions['create field_impl_mech_alt_name'] = array(
    'name' => 'create field_impl_mech_alt_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_impl_mech_usaid_db_number'.
  $permissions['create field_impl_mech_usaid_db_number'] = array(
    'name' => 'create field_impl_mech_usaid_db_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_impl_mech_website_link'.
  $permissions['create field_impl_mech_website_link'] = array(
    'name' => 'create field_impl_mech_website_link',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_implementer'.
  $permissions['create field_implementer'] = array(
    'name' => 'create field_implementer',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_im_number'.
  $permissions['edit field_im_number'] = array(
    'name' => 'edit field_im_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_impl_mech_alt_name'.
  $permissions['edit field_impl_mech_alt_name'] = array(
    'name' => 'edit field_impl_mech_alt_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_impl_mech_usaid_db_number'.
  $permissions['edit field_impl_mech_usaid_db_number'] = array(
    'name' => 'edit field_impl_mech_usaid_db_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_impl_mech_website_link'.
  $permissions['edit field_impl_mech_website_link'] = array(
    'name' => 'edit field_impl_mech_website_link',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_implementer'.
  $permissions['edit field_implementer'] = array(
    'name' => 'edit field_implementer',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_im_number'.
  $permissions['edit own field_im_number'] = array(
    'name' => 'edit own field_im_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_impl_mech_alt_name'.
  $permissions['edit own field_impl_mech_alt_name'] = array(
    'name' => 'edit own field_impl_mech_alt_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_impl_mech_usaid_db_number'.
  $permissions['edit own field_impl_mech_usaid_db_number'] = array(
    'name' => 'edit own field_impl_mech_usaid_db_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_impl_mech_website_link'.
  $permissions['edit own field_impl_mech_website_link'] = array(
    'name' => 'edit own field_impl_mech_website_link',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_implementer'.
  $permissions['edit own field_implementer'] = array(
    'name' => 'edit own field_implementer',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_im_number'.
  $permissions['view field_im_number'] = array(
    'name' => 'view field_im_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_impl_mech_alt_name'.
  $permissions['view field_impl_mech_alt_name'] = array(
    'name' => 'view field_impl_mech_alt_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_impl_mech_usaid_db_number'.
  $permissions['view field_impl_mech_usaid_db_number'] = array(
    'name' => 'view field_impl_mech_usaid_db_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_impl_mech_website_link'.
  $permissions['view field_impl_mech_website_link'] = array(
    'name' => 'view field_impl_mech_website_link',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_implementer'.
  $permissions['view field_implementer'] = array(
    'name' => 'view field_implementer',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_im_number'.
  $permissions['view own field_im_number'] = array(
    'name' => 'view own field_im_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_impl_mech_alt_name'.
  $permissions['view own field_impl_mech_alt_name'] = array(
    'name' => 'view own field_impl_mech_alt_name',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_impl_mech_usaid_db_number'.
  $permissions['view own field_impl_mech_usaid_db_number'] = array(
    'name' => 'view own field_impl_mech_usaid_db_number',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_impl_mech_website_link'.
  $permissions['view own field_impl_mech_website_link'] = array(
    'name' => 'view own field_impl_mech_website_link',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_implementer'.
  $permissions['view own field_implementer'] = array(
    'name' => 'view own field_implementer',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
