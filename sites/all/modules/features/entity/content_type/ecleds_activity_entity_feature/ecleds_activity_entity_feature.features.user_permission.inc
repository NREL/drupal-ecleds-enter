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

  // Exported permission: 'create field_activity_goal_outcome'.
  $permissions['create field_activity_goal_outcome'] = array(
    'name' => 'create field_activity_goal_outcome',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_activity_high_activity'.
  $permissions['create field_activity_high_activity'] = array(
    'name' => 'create field_activity_high_activity',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_activity_highlight_summary'.
  $permissions['create field_activity_highlight_summary'] = array(
    'name' => 'create field_activity_highlight_summary',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_activity_indicator'.
  $permissions['create field_activity_indicator'] = array(
    'name' => 'create field_activity_indicator',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_area_of_cooperation'.
  $permissions['create field_area_of_cooperation'] = array(
    'name' => 'create field_area_of_cooperation',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contribution_to_theory'.
  $permissions['create field_contribution_to_theory'] = array(
    'name' => 'create field_contribution_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_does_this_relate_to_theory'.
  $permissions['create field_does_this_relate_to_theory'] = array(
    'name' => 'create field_does_this_relate_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_link_to_dashboard_framewor'.
  $permissions['create field_link_to_dashboard_framewor'] = array(
    'name' => 'create field_link_to_dashboard_framewor',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_link_to_gcc_results_framew'.
  $permissions['create field_link_to_gcc_results_framew'] = array(
    'name' => 'create field_link_to_gcc_results_framew',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_results'.
  $permissions['create field_results'] = array(
    'name' => 'create field_results',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_results_milestone'.
  $permissions['create field_results_milestone'] = array(
    'name' => 'create field_results_milestone',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_activity_goal_outcome'.
  $permissions['edit field_activity_goal_outcome'] = array(
    'name' => 'edit field_activity_goal_outcome',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_activity_high_activity'.
  $permissions['edit field_activity_high_activity'] = array(
    'name' => 'edit field_activity_high_activity',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_activity_highlight_summary'.
  $permissions['edit field_activity_highlight_summary'] = array(
    'name' => 'edit field_activity_highlight_summary',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_activity_indicator'.
  $permissions['edit field_activity_indicator'] = array(
    'name' => 'edit field_activity_indicator',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_area_of_cooperation'.
  $permissions['edit field_area_of_cooperation'] = array(
    'name' => 'edit field_area_of_cooperation',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contribution_to_theory'.
  $permissions['edit field_contribution_to_theory'] = array(
    'name' => 'edit field_contribution_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_does_this_relate_to_theory'.
  $permissions['edit field_does_this_relate_to_theory'] = array(
    'name' => 'edit field_does_this_relate_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_link_to_dashboard_framewor'.
  $permissions['edit field_link_to_dashboard_framewor'] = array(
    'name' => 'edit field_link_to_dashboard_framewor',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_link_to_gcc_results_framew'.
  $permissions['edit field_link_to_gcc_results_framew'] = array(
    'name' => 'edit field_link_to_gcc_results_framew',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_results'.
  $permissions['edit field_results'] = array(
    'name' => 'edit field_results',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_results_milestone'.
  $permissions['edit field_results_milestone'] = array(
    'name' => 'edit field_results_milestone',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_activity_goal_outcome'.
  $permissions['edit own field_activity_goal_outcome'] = array(
    'name' => 'edit own field_activity_goal_outcome',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_activity_high_activity'.
  $permissions['edit own field_activity_high_activity'] = array(
    'name' => 'edit own field_activity_high_activity',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_activity_highlight_summary'.
  $permissions['edit own field_activity_highlight_summary'] = array(
    'name' => 'edit own field_activity_highlight_summary',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_activity_indicator'.
  $permissions['edit own field_activity_indicator'] = array(
    'name' => 'edit own field_activity_indicator',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_area_of_cooperation'.
  $permissions['edit own field_area_of_cooperation'] = array(
    'name' => 'edit own field_area_of_cooperation',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contribution_to_theory'.
  $permissions['edit own field_contribution_to_theory'] = array(
    'name' => 'edit own field_contribution_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_does_this_relate_to_theory'.
  $permissions['edit own field_does_this_relate_to_theory'] = array(
    'name' => 'edit own field_does_this_relate_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_link_to_dashboard_framewor'.
  $permissions['edit own field_link_to_dashboard_framewor'] = array(
    'name' => 'edit own field_link_to_dashboard_framewor',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_link_to_gcc_results_framew'.
  $permissions['edit own field_link_to_gcc_results_framew'] = array(
    'name' => 'edit own field_link_to_gcc_results_framew',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_results'.
  $permissions['edit own field_results'] = array(
    'name' => 'edit own field_results',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_results_milestone'.
  $permissions['edit own field_results_milestone'] = array(
    'name' => 'edit own field_results_milestone',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_activity_goal_outcome'.
  $permissions['view field_activity_goal_outcome'] = array(
    'name' => 'view field_activity_goal_outcome',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_activity_high_activity'.
  $permissions['view field_activity_high_activity'] = array(
    'name' => 'view field_activity_high_activity',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_activity_highlight_summary'.
  $permissions['view field_activity_highlight_summary'] = array(
    'name' => 'view field_activity_highlight_summary',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_activity_indicator'.
  $permissions['view field_activity_indicator'] = array(
    'name' => 'view field_activity_indicator',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_area_of_cooperation'.
  $permissions['view field_area_of_cooperation'] = array(
    'name' => 'view field_area_of_cooperation',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contribution_to_theory'.
  $permissions['view field_contribution_to_theory'] = array(
    'name' => 'view field_contribution_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_does_this_relate_to_theory'.
  $permissions['view field_does_this_relate_to_theory'] = array(
    'name' => 'view field_does_this_relate_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_link_to_dashboard_framewor'.
  $permissions['view field_link_to_dashboard_framewor'] = array(
    'name' => 'view field_link_to_dashboard_framewor',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_link_to_gcc_results_framew'.
  $permissions['view field_link_to_gcc_results_framew'] = array(
    'name' => 'view field_link_to_gcc_results_framew',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_results'.
  $permissions['view field_results'] = array(
    'name' => 'view field_results',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_results_milestone'.
  $permissions['view field_results_milestone'] = array(
    'name' => 'view field_results_milestone',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_activity_goal_outcome'.
  $permissions['view own field_activity_goal_outcome'] = array(
    'name' => 'view own field_activity_goal_outcome',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_activity_high_activity'.
  $permissions['view own field_activity_high_activity'] = array(
    'name' => 'view own field_activity_high_activity',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_activity_highlight_summary'.
  $permissions['view own field_activity_highlight_summary'] = array(
    'name' => 'view own field_activity_highlight_summary',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_activity_indicator'.
  $permissions['view own field_activity_indicator'] = array(
    'name' => 'view own field_activity_indicator',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_area_of_cooperation'.
  $permissions['view own field_area_of_cooperation'] = array(
    'name' => 'view own field_area_of_cooperation',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contribution_to_theory'.
  $permissions['view own field_contribution_to_theory'] = array(
    'name' => 'view own field_contribution_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_does_this_relate_to_theory'.
  $permissions['view own field_does_this_relate_to_theory'] = array(
    'name' => 'view own field_does_this_relate_to_theory',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_link_to_dashboard_framewor'.
  $permissions['view own field_link_to_dashboard_framewor'] = array(
    'name' => 'view own field_link_to_dashboard_framewor',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_link_to_gcc_results_framew'.
  $permissions['view own field_link_to_gcc_results_framew'] = array(
    'name' => 'view own field_link_to_gcc_results_framew',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_results'.
  $permissions['view own field_results'] = array(
    'name' => 'view own field_results',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_results_milestone'.
  $permissions['view own field_results_milestone'] = array(
    'name' => 'view own field_results_milestone',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
