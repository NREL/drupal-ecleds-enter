<?php
/**
 * @file
 * ecleds_user_field_permissions_roles_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ecleds_user_field_permissions_roles_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access environment indicator'.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator default_environment'.
  $permissions['access environment indicator default_environment'] = array(
    'name' => 'access environment indicator default_environment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access environment indicator overwritten_environment'.
  $permissions['access environment indicator overwritten_environment'] = array(
    'name' => 'access environment indicator overwritten_environment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer environment indicator settings'.
  $permissions['administer environment indicator settings'] = array(
    'name' => 'administer environment indicator settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer respondjs'.
  $permissions['administer respondjs'] = array(
    'name' => 'administer respondjs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'respondjs',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create activity content'.
  $permissions['create activity content'] = array(
    'name' => 'create activity content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create baseline_workbook content'.
  $permissions['create baseline_workbook content'] = array(
    'name' => 'create baseline_workbook content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create country content'.
  $permissions['create country content'] = array(
    'name' => 'create country content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create ecleds_implementing_mechanism content'.
  $permissions['create ecleds_implementing_mechanism content'] = array(
    'name' => 'create ecleds_implementing_mechanism content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ecleds_results content'.
  $permissions['create ecleds_results content'] = array(
    'name' => 'create ecleds_results content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create environmental_and_economical content'.
  $permissions['create environmental_and_economical content'] = array(
    'name' => 'create environmental_and_economical content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create indicator content'.
  $permissions['create indicator content'] = array(
    'name' => 'create indicator content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create leds_plans_institutions content'.
  $permissions['create leds_plans_institutions content'] = array(
    'name' => 'create leds_plans_institutions content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nrel_ecleds_indicator content'.
  $permissions['create nrel_ecleds_indicator content'] = array(
    'name' => 'create nrel_ecleds_indicator content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create nrel_ecleds_milestone content'.
  $permissions['create nrel_ecleds_milestone content'] = array(
    'name' => 'create nrel_ecleds_milestone content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create operating_unit content'.
  $permissions['create operating_unit content'] = array(
    'name' => 'create operating_unit content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create other_usg_leds_related_programs content'.
  $permissions['create other_usg_leds_related_programs content'] = array(
    'name' => 'create other_usg_leds_related_programs content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ppr content'.
  $permissions['create ppr content'] = array(
    'name' => 'create ppr content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create program_level_progress content'.
  $permissions['create program_level_progress content'] = array(
    'name' => 'create program_level_progress content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create program_plans content'.
  $permissions['create program_plans content'] = array(
    'name' => 'create program_plans content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create work_area content'.
  $permissions['create work_area content'] = array(
    'name' => 'create work_area content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any activity content'.
  $permissions['delete any activity content'] = array(
    'name' => 'delete any activity content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any baseline_workbook content'.
  $permissions['delete any baseline_workbook content'] = array(
    'name' => 'delete any baseline_workbook content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any country content'.
  $permissions['delete any country content'] = array(
    'name' => 'delete any country content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ecleds_implementing_mechanism content'.
  $permissions['delete any ecleds_implementing_mechanism content'] = array(
    'name' => 'delete any ecleds_implementing_mechanism content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ecleds_results content'.
  $permissions['delete any ecleds_results content'] = array(
    'name' => 'delete any ecleds_results content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any environmental_and_economical content'.
  $permissions['delete any environmental_and_economical content'] = array(
    'name' => 'delete any environmental_and_economical content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any indicator content'.
  $permissions['delete any indicator content'] = array(
    'name' => 'delete any indicator content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any leds_plans_institutions content'.
  $permissions['delete any leds_plans_institutions content'] = array(
    'name' => 'delete any leds_plans_institutions content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any nrel_ecleds_indicator content'.
  $permissions['delete any nrel_ecleds_indicator content'] = array(
    'name' => 'delete any nrel_ecleds_indicator content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any nrel_ecleds_milestone content'.
  $permissions['delete any nrel_ecleds_milestone content'] = array(
    'name' => 'delete any nrel_ecleds_milestone content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any operating_unit content'.
  $permissions['delete any operating_unit content'] = array(
    'name' => 'delete any operating_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any other_usg_leds_related_programs content'.
  $permissions['delete any other_usg_leds_related_programs content'] = array(
    'name' => 'delete any other_usg_leds_related_programs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ppr content'.
  $permissions['delete any ppr content'] = array(
    'name' => 'delete any ppr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any program_level_progress content'.
  $permissions['delete any program_level_progress content'] = array(
    'name' => 'delete any program_level_progress content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any program_plans content'.
  $permissions['delete any program_plans content'] = array(
    'name' => 'delete any program_plans content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any work_area content'.
  $permissions['delete any work_area content'] = array(
    'name' => 'delete any work_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own activity content'.
  $permissions['delete own activity content'] = array(
    'name' => 'delete own activity content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own baseline_workbook content'.
  $permissions['delete own baseline_workbook content'] = array(
    'name' => 'delete own baseline_workbook content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own country content'.
  $permissions['delete own country content'] = array(
    'name' => 'delete own country content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ecleds_implementing_mechanism content'.
  $permissions['delete own ecleds_implementing_mechanism content'] = array(
    'name' => 'delete own ecleds_implementing_mechanism content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ecleds_results content'.
  $permissions['delete own ecleds_results content'] = array(
    'name' => 'delete own ecleds_results content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own environmental_and_economical content'.
  $permissions['delete own environmental_and_economical content'] = array(
    'name' => 'delete own environmental_and_economical content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own indicator content'.
  $permissions['delete own indicator content'] = array(
    'name' => 'delete own indicator content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own leds_plans_institutions content'.
  $permissions['delete own leds_plans_institutions content'] = array(
    'name' => 'delete own leds_plans_institutions content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own nrel_ecleds_indicator content'.
  $permissions['delete own nrel_ecleds_indicator content'] = array(
    'name' => 'delete own nrel_ecleds_indicator content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own nrel_ecleds_milestone content'.
  $permissions['delete own nrel_ecleds_milestone content'] = array(
    'name' => 'delete own nrel_ecleds_milestone content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own operating_unit content'.
  $permissions['delete own operating_unit content'] = array(
    'name' => 'delete own operating_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own other_usg_leds_related_programs content'.
  $permissions['delete own other_usg_leds_related_programs content'] = array(
    'name' => 'delete own other_usg_leds_related_programs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ppr content'.
  $permissions['delete own ppr content'] = array(
    'name' => 'delete own ppr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own program_level_progress content'.
  $permissions['delete own program_level_progress content'] = array(
    'name' => 'delete own program_level_progress content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own program_plans content'.
  $permissions['delete own program_plans content'] = array(
    'name' => 'delete own program_plans content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own work_area content'.
  $permissions['delete own work_area content'] = array(
    'name' => 'delete own work_area content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in ecleds_bureau_taxonomy'.
  $permissions['delete terms in ecleds_bureau_taxonomy'] = array(
    'name' => 'delete terms in ecleds_bureau_taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in indicator_category'.
  $permissions['delete terms in indicator_category'] = array(
    'name' => 'delete terms in indicator_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nrel_ecleds_milestone_category'.
  $permissions['delete terms in nrel_ecleds_milestone_category'] = array(
    'name' => 'delete terms in nrel_ecleds_milestone_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in partners'.
  $permissions['delete terms in partners'] = array(
    'name' => 'delete terms in partners',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any activity content'.
  $permissions['edit any activity content'] = array(
    'name' => 'edit any activity content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any baseline_workbook content'.
  $permissions['edit any baseline_workbook content'] = array(
    'name' => 'edit any baseline_workbook content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any country content'.
  $permissions['edit any country content'] = array(
    'name' => 'edit any country content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ecleds_implementing_mechanism content'.
  $permissions['edit any ecleds_implementing_mechanism content'] = array(
    'name' => 'edit any ecleds_implementing_mechanism content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ecleds_results content'.
  $permissions['edit any ecleds_results content'] = array(
    'name' => 'edit any ecleds_results content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any environmental_and_economical content'.
  $permissions['edit any environmental_and_economical content'] = array(
    'name' => 'edit any environmental_and_economical content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any indicator content'.
  $permissions['edit any indicator content'] = array(
    'name' => 'edit any indicator content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any leds_plans_institutions content'.
  $permissions['edit any leds_plans_institutions content'] = array(
    'name' => 'edit any leds_plans_institutions content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nrel_ecleds_indicator content'.
  $permissions['edit any nrel_ecleds_indicator content'] = array(
    'name' => 'edit any nrel_ecleds_indicator content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nrel_ecleds_milestone content'.
  $permissions['edit any nrel_ecleds_milestone content'] = array(
    'name' => 'edit any nrel_ecleds_milestone content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any operating_unit content'.
  $permissions['edit any operating_unit content'] = array(
    'name' => 'edit any operating_unit content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any other_usg_leds_related_programs content'.
  $permissions['edit any other_usg_leds_related_programs content'] = array(
    'name' => 'edit any other_usg_leds_related_programs content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ppr content'.
  $permissions['edit any ppr content'] = array(
    'name' => 'edit any ppr content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any program_level_progress content'.
  $permissions['edit any program_level_progress content'] = array(
    'name' => 'edit any program_level_progress content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any program_plans content'.
  $permissions['edit any program_plans content'] = array(
    'name' => 'edit any program_plans content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any work_area content'.
  $permissions['edit any work_area content'] = array(
    'name' => 'edit any work_area content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own activity content'.
  $permissions['edit own activity content'] = array(
    'name' => 'edit own activity content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own baseline_workbook content'.
  $permissions['edit own baseline_workbook content'] = array(
    'name' => 'edit own baseline_workbook content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own country content'.
  $permissions['edit own country content'] = array(
    'name' => 'edit own country content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ecleds_implementing_mechanism content'.
  $permissions['edit own ecleds_implementing_mechanism content'] = array(
    'name' => 'edit own ecleds_implementing_mechanism content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ecleds_results content'.
  $permissions['edit own ecleds_results content'] = array(
    'name' => 'edit own ecleds_results content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own environmental_and_economical content'.
  $permissions['edit own environmental_and_economical content'] = array(
    'name' => 'edit own environmental_and_economical content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own indicator content'.
  $permissions['edit own indicator content'] = array(
    'name' => 'edit own indicator content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own leds_plans_institutions content'.
  $permissions['edit own leds_plans_institutions content'] = array(
    'name' => 'edit own leds_plans_institutions content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nrel_ecleds_indicator content'.
  $permissions['edit own nrel_ecleds_indicator content'] = array(
    'name' => 'edit own nrel_ecleds_indicator content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nrel_ecleds_milestone content'.
  $permissions['edit own nrel_ecleds_milestone content'] = array(
    'name' => 'edit own nrel_ecleds_milestone content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own operating_unit content'.
  $permissions['edit own operating_unit content'] = array(
    'name' => 'edit own operating_unit content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own other_usg_leds_related_programs content'.
  $permissions['edit own other_usg_leds_related_programs content'] = array(
    'name' => 'edit own other_usg_leds_related_programs content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ppr content'.
  $permissions['edit own ppr content'] = array(
    'name' => 'edit own ppr content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own program_level_progress content'.
  $permissions['edit own program_level_progress content'] = array(
    'name' => 'edit own program_level_progress content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own program_plans content'.
  $permissions['edit own program_plans content'] = array(
    'name' => 'edit own program_plans content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own work_area content'.
  $permissions['edit own work_area content'] = array(
    'name' => 'edit own work_area content',
    'roles' => array(
      'mission' => 'mission',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in ecleds_bureau_taxonomy'.
  $permissions['edit terms in ecleds_bureau_taxonomy'] = array(
    'name' => 'edit terms in ecleds_bureau_taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in indicator_category'.
  $permissions['edit terms in indicator_category'] = array(
    'name' => 'edit terms in indicator_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nrel_ecleds_milestone_category'.
  $permissions['edit terms in nrel_ecleds_milestone_category'] = array(
    'name' => 'edit terms in nrel_ecleds_milestone_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in partners'.
  $permissions['edit terms in partners'] = array(
    'name' => 'edit terms in partners',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'use PHP for title patterns'.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'mission' => 'mission',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
