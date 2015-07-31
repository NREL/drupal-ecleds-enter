<?php
/**
 * @file
 * ecleds_views_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ecleds_views_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_country_target_id']['id'] = 'field_project_country_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['table'] = 'field_data_field_project_country';
  $handler->display->display_options['relationships']['field_project_country_target_id']['field'] = 'field_project_country_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'projects';

  /* Display: Country Tab */
  $handler = $view->new_display('block', 'Country Tab', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/project?field_project_country=!1&destination=node/!1" class="button">Add Project</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_project_country_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['Projects'] = $view;

  $view = new view();
  $view->name = 'country_name_on_edit_screen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Country Name on Edit Screen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TEST';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_environmental_and_economic_target_id']['id'] = 'field_environmental_and_economic_target_id';
  $handler->display->display_options['relationships']['field_environmental_and_economic_target_id']['table'] = 'field_data_field_environmental_and_economic';
  $handler->display->display_options['relationships']['field_environmental_and_economic_target_id']['field'] = 'field_environmental_and_economic_target_id';
  $handler->display->display_options['relationships']['field_environmental_and_economic_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_environmental_and_economic_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Environmental and Economical for %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'country' => 'country',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['country_name_on_edit_screen'] = $view;

  $view = new view();
  $view->name = 'ecleds_areas_of_cooperation_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Areas of Cooperation Reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_work_area_field_collection_item']['id'] = 'reverse_field_work_area_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_work_area_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_work_area_field_collection_item']['field'] = 'reverse_field_work_area_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_work_area_field_collection_item']['label'] = 'AWP/MOU';
  /* Relationship: Field collection item: Entity with the AWP/MOU (field_ecleds_prog_plans_awp) */
  $handler->display->display_options['relationships']['field_ecleds_prog_plans_awp_node']['id'] = 'field_ecleds_prog_plans_awp_node';
  $handler->display->display_options['relationships']['field_ecleds_prog_plans_awp_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_ecleds_prog_plans_awp_node']['field'] = 'field_ecleds_prog_plans_awp_node';
  $handler->display->display_options['relationships']['field_ecleds_prog_plans_awp_node']['relationship'] = 'reverse_field_work_area_field_collection_item';
  $handler->display->display_options['relationships']['field_ecleds_prog_plans_awp_node']['label'] = 'ECLEDS Program Plans';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_program_plans_node']['id'] = 'reverse_field_program_plans_node';
  $handler->display->display_options['relationships']['reverse_field_program_plans_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_program_plans_node']['field'] = 'reverse_field_program_plans_node';
  $handler->display->display_options['relationships']['reverse_field_program_plans_node']['relationship'] = 'field_ecleds_prog_plans_awp_node';
  $handler->display->display_options['relationships']['reverse_field_program_plans_node']['label'] = 'Country';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_program_plans_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1] : ';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title_1']['id'] = 'title_1';
  $handler->display->display_options['sorts']['title_1']['table'] = 'node';
  $handler->display->display_options['sorts']['title_1']['field'] = 'title';
  $handler->display->display_options['sorts']['title_1']['relationship'] = 'reverse_field_program_plans_node';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'work_area' => 'work_area',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['ecleds_areas_of_cooperation_reference'] = $view;

  $view = new view();
  $view->name = 'entity_reference_milestones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity Reference - Milestones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Milestones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_country_target_id']['id'] = 'field_project_country_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['table'] = 'field_data_field_project_country';
  $handler->display->display_options['relationships']['field_project_country_target_id']['field'] = 'field_project_country_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['relationship'] = 'field_activity_project_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['label'] = 'Country';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Milestone';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Milestone Category */
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['id'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['table'] = 'field_data_field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['field'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['label'] = 'Category';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_nrel_ecleds_milestone_act_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Activity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_activity_project_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'Project';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'field_project_country_target_id';
  $handler->display->display_options['fields']['title_3']['label'] = 'Country';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nrel_ecleds_milestone' => 'nrel_ecleds_milestone',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Milestone';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nrel_ecleds_milestone' => 'nrel_ecleds_milestone',
  );
  /* Filter criterion: Content: Type (field_nrel_ecleds_milestone_type) */
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['id'] = 'field_nrel_ecleds_milestone_type_value';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['table'] = 'field_data_field_nrel_ecleds_milestone_type';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['field'] = 'field_nrel_ecleds_milestone_type_value';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['value'] = array(
    'APG' => 'APG',
    'Internal' => 'Internal',
    'Possible' => 'Possible',
  );
  $export['entity_reference_milestones'] = $view;

  $view = new view();
  $view->name = 'fy13_ppr_gcc_indicators_sf';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FY13 PPR GCC Indicators SF';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FY13 PPR GCC Indicators SF';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: PPR FY 2013 Actual */
  $handler->display->display_options['fields']['field_2013_actual']['id'] = 'field_2013_actual';
  $handler->display->display_options['fields']['field_2013_actual']['table'] = 'field_data_field_2013_actual';
  $handler->display->display_options['fields']['field_2013_actual']['field'] = 'field_2013_actual';
  /* Field: Content: PPR FY 2013 Baseline */
  $handler->display->display_options['fields']['field_indicator_2013_baseline']['id'] = 'field_indicator_2013_baseline';
  $handler->display->display_options['fields']['field_indicator_2013_baseline']['table'] = 'field_data_field_indicator_2013_baseline';
  $handler->display->display_options['fields']['field_indicator_2013_baseline']['field'] = 'field_indicator_2013_baseline';
  /* Field: Content: PPR FY 2013 Baseline Disaggregate */
  $handler->display->display_options['fields']['field_2013_baseline_disaggregate']['id'] = 'field_2013_baseline_disaggregate';
  $handler->display->display_options['fields']['field_2013_baseline_disaggregate']['table'] = 'field_data_field_2013_baseline_disaggregate';
  $handler->display->display_options['fields']['field_2013_baseline_disaggregate']['field'] = 'field_2013_baseline_disaggregate';
  /* Field: Content: PPR FY 2013 Target */
  $handler->display->display_options['fields']['field_2013_target']['id'] = 'field_2013_target';
  $handler->display->display_options['fields']['field_2013_target']['table'] = 'field_data_field_2013_target';
  $handler->display->display_options['fields']['field_2013_target']['field'] = 'field_2013_target';
  /* Field: Content: PPR FY 2013 Target Disaggregate */
  $handler->display->display_options['fields']['field_2013_target_disaggeragate']['id'] = 'field_2013_target_disaggeragate';
  $handler->display->display_options['fields']['field_2013_target_disaggeragate']['table'] = 'field_data_field_2013_target_disaggeragate';
  $handler->display->display_options['fields']['field_2013_target_disaggeragate']['field'] = 'field_2013_target_disaggeragate';
  /* Field: Content: PPR FY 2014 Baseline */
  $handler->display->display_options['fields']['field_2014_baseline']['id'] = 'field_2014_baseline';
  $handler->display->display_options['fields']['field_2014_baseline']['table'] = 'field_data_field_2014_baseline';
  $handler->display->display_options['fields']['field_2014_baseline']['field'] = 'field_2014_baseline';
  /* Field: Content: PPR FY 2014 Baseline Disaggregate */
  $handler->display->display_options['fields']['field_2014_baseline_disaggragate']['id'] = 'field_2014_baseline_disaggragate';
  $handler->display->display_options['fields']['field_2014_baseline_disaggragate']['table'] = 'field_data_field_2014_baseline_disaggragate';
  $handler->display->display_options['fields']['field_2014_baseline_disaggragate']['field'] = 'field_2014_baseline_disaggragate';
  /* Field: Content: PPR FY 2014 Target */
  $handler->display->display_options['fields']['field_2014_target']['id'] = 'field_2014_target';
  $handler->display->display_options['fields']['field_2014_target']['table'] = 'field_data_field_2014_target';
  $handler->display->display_options['fields']['field_2014_target']['field'] = 'field_2014_target';
  /* Field: Content: PPR FY 2014 Target Disaggregate */
  $handler->display->display_options['fields']['field_2014_target_disaggeragate']['id'] = 'field_2014_target_disaggeragate';
  $handler->display->display_options['fields']['field_2014_target_disaggeragate']['table'] = 'field_data_field_2014_target_disaggeragate';
  $handler->display->display_options['fields']['field_2014_target_disaggeragate']['field'] = 'field_2014_target_disaggeragate';
  /* Field: Content: PPR FY 2015 Target */
  $handler->display->display_options['fields']['field_2015_target']['id'] = 'field_2015_target';
  $handler->display->display_options['fields']['field_2015_target']['table'] = 'field_data_field_2015_target';
  $handler->display->display_options['fields']['field_2015_target']['field'] = 'field_2015_target';
  /* Field: Content: PPR FY 2015 Target Disaggregate */
  $handler->display->display_options['fields']['field_2015_target_disaggeragate']['id'] = 'field_2015_target_disaggeragate';
  $handler->display->display_options['fields']['field_2015_target_disaggeragate']['table'] = 'field_data_field_2015_target_disaggeragate';
  $handler->display->display_options['fields']['field_2015_target_disaggeragate']['field'] = 'field_2015_target_disaggeragate';
  /* Field: Content: PPR FY 2016 Target */
  $handler->display->display_options['fields']['field_2016_target']['id'] = 'field_2016_target';
  $handler->display->display_options['fields']['field_2016_target']['table'] = 'field_data_field_2016_target';
  $handler->display->display_options['fields']['field_2016_target']['field'] = 'field_2016_target';
  /* Field: Content: PPR FY 2016 Target Disaggregate */
  $handler->display->display_options['fields']['field_2016_ttarget_disaggeragate']['id'] = 'field_2016_ttarget_disaggeragate';
  $handler->display->display_options['fields']['field_2016_ttarget_disaggeragate']['table'] = 'field_data_field_2016_ttarget_disaggeragate';
  $handler->display->display_options['fields']['field_2016_ttarget_disaggeragate']['field'] = 'field_2016_ttarget_disaggeragate';
  /* Field: Content: PPR Indicator */
  $handler->display->display_options['fields']['field_indicator']['id'] = 'field_indicator';
  $handler->display->display_options['fields']['field_indicator']['table'] = 'field_data_field_indicator';
  $handler->display->display_options['fields']['field_indicator']['field'] = 'field_indicator';
  $handler->display->display_options['fields']['field_indicator']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nrel_ecleds_indicator' => 'nrel_ecleds_indicator',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fy13-ppr-gcc-indicators-sf';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'fy13_ppr_gcc_indicators_sf/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['fy13_ppr_gcc_indicators_sf'] = $view;

  $view = new view();
  $view->name = 'implementing_mechanisms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Implementing Mechanisms SF';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Implementing Mechanisms SF';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* Field: Content: IM Alt Name */
  $handler->display->display_options['fields']['field_impl_mech_alt_name']['id'] = 'field_impl_mech_alt_name';
  $handler->display->display_options['fields']['field_impl_mech_alt_name']['table'] = 'field_data_field_impl_mech_alt_name';
  $handler->display->display_options['fields']['field_impl_mech_alt_name']['field'] = 'field_impl_mech_alt_name';
  /* Field: Content: Implementer */
  $handler->display->display_options['fields']['field_implementer']['id'] = 'field_implementer';
  $handler->display->display_options['fields']['field_implementer']['table'] = 'field_data_field_implementer';
  $handler->display->display_options['fields']['field_implementer']['field'] = 'field_implementer';
  /* Field: Content: Operating Unit */
  $handler->display->display_options['fields']['field_activity_operating_unit']['id'] = 'field_activity_operating_unit';
  $handler->display->display_options['fields']['field_activity_operating_unit']['table'] = 'field_data_field_activity_operating_unit';
  $handler->display->display_options['fields']['field_activity_operating_unit']['field'] = 'field_activity_operating_unit';
  $handler->display->display_options['fields']['field_activity_operating_unit']['settings'] = array(
    'link' => 0,
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_impl_mech_perf_end_date']['id'] = 'field_impl_mech_perf_end_date';
  $handler->display->display_options['fields']['field_impl_mech_perf_end_date']['table'] = 'field_data_field_impl_mech_perf_end_date';
  $handler->display->display_options['fields']['field_impl_mech_perf_end_date']['field'] = 'field_impl_mech_perf_end_date';
  $handler->display->display_options['fields']['field_impl_mech_perf_end_date']['label'] = 'Performance End Date';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_impl_mech_perf_start_date']['id'] = 'field_impl_mech_perf_start_date';
  $handler->display->display_options['fields']['field_impl_mech_perf_start_date']['table'] = 'field_data_field_impl_mech_perf_start_date';
  $handler->display->display_options['fields']['field_impl_mech_perf_start_date']['field'] = 'field_impl_mech_perf_start_date';
  $handler->display->display_options['fields']['field_impl_mech_perf_start_date']['label'] = 'Performance Start Date';
  /* Field: Content: USAID DB Number */
  $handler->display->display_options['fields']['field_impl_mech_usaid_db_number']['id'] = 'field_impl_mech_usaid_db_number';
  $handler->display->display_options['fields']['field_impl_mech_usaid_db_number']['table'] = 'field_data_field_impl_mech_usaid_db_number';
  $handler->display->display_options['fields']['field_impl_mech_usaid_db_number']['field'] = 'field_impl_mech_usaid_db_number';
  /* Field: Content: Website Link */
  $handler->display->display_options['fields']['field_impl_mech_website_link']['id'] = 'field_impl_mech_website_link';
  $handler->display->display_options['fields']['field_impl_mech_website_link']['table'] = 'field_data_field_impl_mech_website_link';
  $handler->display->display_options['fields']['field_impl_mech_website_link']['field'] = 'field_impl_mech_website_link';
  $handler->display->display_options['fields']['field_impl_mech_website_link']['click_sort_column'] = 'url';
  /* Field: Content: Funding Pillar */
  $handler->display->display_options['fields']['field_im_funding_pillar']['id'] = 'field_im_funding_pillar';
  $handler->display->display_options['fields']['field_im_funding_pillar']['table'] = 'field_data_field_im_funding_pillar';
  $handler->display->display_options['fields']['field_im_funding_pillar']['field'] = 'field_im_funding_pillar';
  $handler->display->display_options['fields']['field_im_funding_pillar']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_im_funding_pillar']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_im_funding_pillar']['separator'] = ';';
  /* Field: Content: Funding Pillar (field_im_funding_pillar:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_im_funding_pillar';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Field: Content: IM # */
  $handler->display->display_options['fields']['field_im_number']['id'] = 'field_im_number';
  $handler->display->display_options['fields']['field_im_number']['table'] = 'field_data_field_im_number';
  $handler->display->display_options['fields']['field_im_number']['field'] = 'field_im_number';
  $handler->display->display_options['fields']['field_im_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ecleds_implementing_mechanism' => 'ecleds_implementing_mechanism',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'implementing-mechanisms';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'implementing_mechanisms/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['implementing_mechanisms'] = $view;

  $view = new view();
  $view->name = 'indicator_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Indicator Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Indicator Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_activity_operating_unit' => 'field_activity_operating_unit',
    'title' => 'title',
    'field_impl_mech_award_number' => 'field_impl_mech_award_number',
    'field_gcc_standard_indicator' => 'field_gcc_standard_indicator',
    'field_fy14_baseline' => 'field_fy14_baseline',
    'field_fy14_target' => 'field_fy14_target',
    'field_fy14_results' => 'field_fy14_results',
    'field_fy15_results' => 'field_fy15_results',
    'field_fy15_target' => 'field_fy15_target',
    'field_fy16_target' => 'field_fy16_target',
    'field_fy17_target' => 'field_fy17_target',
    'field_fy18_target' => 'field_fy18_target',
    'field_fy14_results_explanation' => 'field_fy14_results_explanation',
    'field_fy15_results_explanation' => 'field_fy15_results_explanation',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_activity_operating_unit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_impl_mech_award_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gcc_standard_indicator' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy14_baseline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy14_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy14_results' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy15_results' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy15_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy16_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy17_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy18_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy14_results_explanation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fy15_results_explanation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Field collection item: Entity with the GCC Standard Indicator (field_impl_mech_gcc_indicator) */
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['id'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['field'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['label'] = 'Implementing Mechanism';
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gcc_standard_indicator_target_id']['id'] = 'field_gcc_standard_indicator_target_id';
  $handler->display->display_options['relationships']['field_gcc_standard_indicator_target_id']['table'] = 'field_data_field_gcc_standard_indicator';
  $handler->display->display_options['relationships']['field_gcc_standard_indicator_target_id']['field'] = 'field_gcc_standard_indicator_target_id';
  $handler->display->display_options['relationships']['field_gcc_standard_indicator_target_id']['label'] = 'Indicator';
  /* Field: Content: Operating Unit */
  $handler->display->display_options['fields']['field_activity_operating_unit']['id'] = 'field_activity_operating_unit';
  $handler->display->display_options['fields']['field_activity_operating_unit']['table'] = 'field_data_field_activity_operating_unit';
  $handler->display->display_options['fields']['field_activity_operating_unit']['field'] = 'field_activity_operating_unit';
  $handler->display->display_options['fields']['field_activity_operating_unit']['relationship'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['fields']['field_activity_operating_unit']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['fields']['title']['label'] = 'Implementing Mechanism';
  /* Field: Content: Award Number */
  $handler->display->display_options['fields']['field_impl_mech_award_number']['id'] = 'field_impl_mech_award_number';
  $handler->display->display_options['fields']['field_impl_mech_award_number']['table'] = 'field_data_field_impl_mech_award_number';
  $handler->display->display_options['fields']['field_impl_mech_award_number']['field'] = 'field_impl_mech_award_number';
  $handler->display->display_options['fields']['field_impl_mech_award_number']['relationship'] = 'field_impl_mech_gcc_indicator_node';
  /* Field: Field collection item: Indicator */
  $handler->display->display_options['fields']['field_gcc_standard_indicator']['id'] = 'field_gcc_standard_indicator';
  $handler->display->display_options['fields']['field_gcc_standard_indicator']['table'] = 'field_data_field_gcc_standard_indicator';
  $handler->display->display_options['fields']['field_gcc_standard_indicator']['field'] = 'field_gcc_standard_indicator';
  $handler->display->display_options['fields']['field_gcc_standard_indicator']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: FY14 Baseline */
  $handler->display->display_options['fields']['field_fy14_baseline']['id'] = 'field_fy14_baseline';
  $handler->display->display_options['fields']['field_fy14_baseline']['table'] = 'field_data_field_fy14_baseline';
  $handler->display->display_options['fields']['field_fy14_baseline']['field'] = 'field_fy14_baseline';
  $handler->display->display_options['fields']['field_fy14_baseline']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY14 Target */
  $handler->display->display_options['fields']['field_fy14_target']['id'] = 'field_fy14_target';
  $handler->display->display_options['fields']['field_fy14_target']['table'] = 'field_data_field_fy14_target';
  $handler->display->display_options['fields']['field_fy14_target']['field'] = 'field_fy14_target';
  $handler->display->display_options['fields']['field_fy14_target']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY14 Results */
  $handler->display->display_options['fields']['field_fy14_results']['id'] = 'field_fy14_results';
  $handler->display->display_options['fields']['field_fy14_results']['table'] = 'field_data_field_fy14_results';
  $handler->display->display_options['fields']['field_fy14_results']['field'] = 'field_fy14_results';
  $handler->display->display_options['fields']['field_fy14_results']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY15 Results */
  $handler->display->display_options['fields']['field_fy15_results']['id'] = 'field_fy15_results';
  $handler->display->display_options['fields']['field_fy15_results']['table'] = 'field_data_field_fy15_results';
  $handler->display->display_options['fields']['field_fy15_results']['field'] = 'field_fy15_results';
  $handler->display->display_options['fields']['field_fy15_results']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY15 Target */
  $handler->display->display_options['fields']['field_fy15_target']['id'] = 'field_fy15_target';
  $handler->display->display_options['fields']['field_fy15_target']['table'] = 'field_data_field_fy15_target';
  $handler->display->display_options['fields']['field_fy15_target']['field'] = 'field_fy15_target';
  $handler->display->display_options['fields']['field_fy15_target']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY16 Target */
  $handler->display->display_options['fields']['field_fy16_target']['id'] = 'field_fy16_target';
  $handler->display->display_options['fields']['field_fy16_target']['table'] = 'field_data_field_fy16_target';
  $handler->display->display_options['fields']['field_fy16_target']['field'] = 'field_fy16_target';
  $handler->display->display_options['fields']['field_fy16_target']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY17 Target */
  $handler->display->display_options['fields']['field_fy17_target']['id'] = 'field_fy17_target';
  $handler->display->display_options['fields']['field_fy17_target']['table'] = 'field_data_field_fy17_target';
  $handler->display->display_options['fields']['field_fy17_target']['field'] = 'field_fy17_target';
  $handler->display->display_options['fields']['field_fy17_target']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY18 Target */
  $handler->display->display_options['fields']['field_fy18_target']['id'] = 'field_fy18_target';
  $handler->display->display_options['fields']['field_fy18_target']['table'] = 'field_data_field_fy18_target';
  $handler->display->display_options['fields']['field_fy18_target']['field'] = 'field_fy18_target';
  $handler->display->display_options['fields']['field_fy18_target']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY14 Results Explanation */
  $handler->display->display_options['fields']['field_fy14_results_explanation']['id'] = 'field_fy14_results_explanation';
  $handler->display->display_options['fields']['field_fy14_results_explanation']['table'] = 'field_data_field_fy14_results_explanation';
  $handler->display->display_options['fields']['field_fy14_results_explanation']['field'] = 'field_fy14_results_explanation';
  /* Field: Field collection item: FY15 Results Explanation */
  $handler->display->display_options['fields']['field_fy15_results_explanation']['id'] = 'field_fy15_results_explanation';
  $handler->display->display_options['fields']['field_fy15_results_explanation']['table'] = 'field_data_field_fy15_results_explanation';
  $handler->display->display_options['fields']['field_fy15_results_explanation']['field'] = 'field_fy15_results_explanation';
  /* Filter criterion: Content: Operating Unit (field_activity_operating_unit) */
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['id'] = 'field_activity_operating_unit_target_id';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['table'] = 'field_data_field_activity_operating_unit';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['field'] = 'field_activity_operating_unit_target_id';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['relationship'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['operator_id'] = 'field_activity_operating_unit_target_id_op';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['label'] = 'Operating Unit';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['operator'] = 'field_activity_operating_unit_target_id_op';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['identifier'] = 'field_activity_operating_unit_target_id';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Implementing Mechanism';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'field_gcc_standard_indicator_target_id';
  $handler->display->display_options['filters']['nid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid_1']['expose']['operator_id'] = 'nid_1_op';
  $handler->display->display_options['filters']['nid_1']['expose']['label'] = 'Indicator';
  $handler->display->display_options['filters']['nid_1']['expose']['operator'] = 'nid_1_op';
  $handler->display->display_options['filters']['nid_1']['expose']['identifier'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'reports/indicator';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'reports/indicator/indicator_export.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['indicator_report'] = $view;

  $view = new view();
  $view->name = 'indicator_values';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Indicator Values';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Indicator Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Field collection item: Entity with the GCC Standard Indicator (field_impl_mech_gcc_indicator) */
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['id'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['field'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['label'] = 'Implementing Mechanism';
  $handler->display->display_options['relationships']['field_impl_mech_gcc_indicator_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gcc_standard_indicator_target_id']['id'] = 'field_gcc_standard_indicator_target_id';
  $handler->display->display_options['relationships']['field_gcc_standard_indicator_target_id']['table'] = 'field_data_field_gcc_standard_indicator';
  $handler->display->display_options['relationships']['field_gcc_standard_indicator_target_id']['field'] = 'field_gcc_standard_indicator_target_id';
  $handler->display->display_options['relationships']['field_gcc_standard_indicator_target_id']['label'] = 'Indicator';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_impl_mech_gcc_indicator_node';
  /* Field: Content revision: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Revision id';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item Revisions: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item_revision';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item Revisions: Revision_id */
  $handler->display->display_options['fields']['revision_id']['id'] = 'revision_id';
  $handler->display->display_options['fields']['revision_id']['table'] = 'field_collection_item_revision';
  $handler->display->display_options['fields']['revision_id']['field'] = 'revision_id';
  $handler->display->display_options['fields']['revision_id']['label'] = 'FC revision id';
  $handler->display->display_options['fields']['revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['revision_id']['separator'] = '';
  /* Field: Field collection item: FY14 Baseline */
  $handler->display->display_options['fields']['field_fy14_baseline']['id'] = 'field_fy14_baseline';
  $handler->display->display_options['fields']['field_fy14_baseline']['table'] = 'field_data_field_fy14_baseline';
  $handler->display->display_options['fields']['field_fy14_baseline']['field'] = 'field_fy14_baseline';
  $handler->display->display_options['fields']['field_fy14_baseline']['empty'] = '0.0';
  $handler->display->display_options['fields']['field_fy14_baseline']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fy14_baseline']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY14 Target */
  $handler->display->display_options['fields']['field_fy14_target']['id'] = 'field_fy14_target';
  $handler->display->display_options['fields']['field_fy14_target']['table'] = 'field_data_field_fy14_target';
  $handler->display->display_options['fields']['field_fy14_target']['field'] = 'field_fy14_target';
  $handler->display->display_options['fields']['field_fy14_target']['empty'] = '0.0';
  $handler->display->display_options['fields']['field_fy14_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fy14_target']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: FY14 Results */
  $handler->display->display_options['fields']['field_fy14_results']['id'] = 'field_fy14_results';
  $handler->display->display_options['fields']['field_fy14_results']['table'] = 'field_data_field_fy14_results';
  $handler->display->display_options['fields']['field_fy14_results']['field'] = 'field_fy14_results';
  $handler->display->display_options['fields']['field_fy14_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fy14_results']['empty'] = '0.0';
  $handler->display->display_options['fields']['field_fy14_results']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fy14_results']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: FY15 Target */
  $handler->display->display_options['fields']['field_fy15_target']['id'] = 'field_fy15_target';
  $handler->display->display_options['fields']['field_fy15_target']['table'] = 'field_data_field_fy15_target';
  $handler->display->display_options['fields']['field_fy15_target']['field'] = 'field_fy15_target';
  $handler->display->display_options['fields']['field_fy15_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fy15_target']['empty'] = '0.0';
  $handler->display->display_options['fields']['field_fy15_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fy15_target']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: FY15 Results */
  $handler->display->display_options['fields']['field_fy15_results']['id'] = 'field_fy15_results';
  $handler->display->display_options['fields']['field_fy15_results']['table'] = 'field_data_field_fy15_results';
  $handler->display->display_options['fields']['field_fy15_results']['field'] = 'field_fy15_results';
  $handler->display->display_options['fields']['field_fy15_results']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fy15_results']['empty'] = '0.0';
  $handler->display->display_options['fields']['field_fy15_results']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fy15_results']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: FY16 Target */
  $handler->display->display_options['fields']['field_fy16_target']['id'] = 'field_fy16_target';
  $handler->display->display_options['fields']['field_fy16_target']['table'] = 'field_data_field_fy16_target';
  $handler->display->display_options['fields']['field_fy16_target']['field'] = 'field_fy16_target';
  $handler->display->display_options['fields']['field_fy16_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fy16_target']['empty'] = '0.0';
  $handler->display->display_options['fields']['field_fy16_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fy16_target']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: FY17 Target */
  $handler->display->display_options['fields']['field_fy17_target']['id'] = 'field_fy17_target';
  $handler->display->display_options['fields']['field_fy17_target']['table'] = 'field_data_field_fy17_target';
  $handler->display->display_options['fields']['field_fy17_target']['field'] = 'field_fy17_target';
  $handler->display->display_options['fields']['field_fy17_target']['empty'] = '0.0';
  $handler->display->display_options['fields']['field_fy17_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fy17_target']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: FY18 Target */
  $handler->display->display_options['fields']['field_fy18_target']['id'] = 'field_fy18_target';
  $handler->display->display_options['fields']['field_fy18_target']['table'] = 'field_data_field_fy18_target';
  $handler->display->display_options['fields']['field_fy18_target']['field'] = 'field_fy18_target';
  $handler->display->display_options['fields']['field_fy18_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fy18_target']['empty'] = '0.0';
  $handler->display->display_options['fields']['field_fy18_target']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_fy18_target']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: FY14 Results Explanation */
  $handler->display->display_options['fields']['field_fy14_results_explanation']['id'] = 'field_fy14_results_explanation';
  $handler->display->display_options['fields']['field_fy14_results_explanation']['table'] = 'field_data_field_fy14_results_explanation';
  $handler->display->display_options['fields']['field_fy14_results_explanation']['field'] = 'field_fy14_results_explanation';
  $handler->display->display_options['fields']['field_fy14_results_explanation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fy14_results_explanation']['empty'] = 'NULL';
  $handler->display->display_options['fields']['field_fy14_results_explanation']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: FY15 Results Explanation */
  $handler->display->display_options['fields']['field_fy15_results_explanation']['id'] = 'field_fy15_results_explanation';
  $handler->display->display_options['fields']['field_fy15_results_explanation']['table'] = 'field_data_field_fy15_results_explanation';
  $handler->display->display_options['fields']['field_fy15_results_explanation']['field'] = 'field_fy15_results_explanation';
  $handler->display->display_options['fields']['field_fy15_results_explanation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fy15_results_explanation']['empty'] = 'NULL';
  $handler->display->display_options['fields']['field_fy15_results_explanation']['hide_alter_empty'] = FALSE;
  /* Filter criterion: Content: Operating Unit (field_activity_operating_unit) */
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['id'] = 'field_activity_operating_unit_target_id';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['table'] = 'field_data_field_activity_operating_unit';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['field'] = 'field_activity_operating_unit_target_id';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['relationship'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['operator_id'] = 'field_activity_operating_unit_target_id_op';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['label'] = 'Operating Unit';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['operator'] = 'field_activity_operating_unit_target_id_op';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['identifier'] = 'field_activity_operating_unit_target_id';
  $handler->display->display_options['filters']['field_activity_operating_unit_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_impl_mech_gcc_indicator_node';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Implementing Mechanism';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'field_gcc_standard_indicator_target_id';
  $handler->display->display_options['filters']['nid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid_1']['expose']['operator_id'] = 'nid_1_op';
  $handler->display->display_options['filters']['nid_1']['expose']['label'] = 'Indicator';
  $handler->display->display_options['filters']['nid_1']['expose']['operator'] = 'nid_1_op';
  $handler->display->display_options['filters']['nid_1']['expose']['identifier'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'reports/indicator-data';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'reports/indicator-data/indicator_export.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['indicator_values'] = $view;

  $view = new view();
  $view->name = 'indicators';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indicators';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Indicators';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'indicator' => 'indicator',
  );
  /* Filter criterion: Content: Type (field_indicator_type) */
  $handler->display->display_options['filters']['field_indicator_type_value']['id'] = 'field_indicator_type_value';
  $handler->display->display_options['filters']['field_indicator_type_value']['table'] = 'field_data_field_indicator_type';
  $handler->display->display_options['filters']['field_indicator_type_value']['field'] = 'field_indicator_type_value';
  $handler->display->display_options['filters']['field_indicator_type_value']['value'] = array(
    'gcc' => 'gcc',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['indicators'] = $view;

  $view = new view();
  $view->name = 'milestone_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Milestone Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Milestone Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_target_fiscal_year' => 'field_target_fiscal_year',
    'field_milestone_operating_unit' => 'field_milestone_operating_unit',
    'field_ecleds_milestone_country' => 'field_ecleds_milestone_country',
    'field_completion_month' => 'field_completion_month',
    'field_completion_year' => 'field_completion_year',
    'field_milestone_description' => 'field_milestone_description',
    'field_nrel_ecleds_milestone_cat' => 'field_nrel_ecleds_milestone_cat',
    'field_nrel_ecleds_milestone_type' => 'field_nrel_ecleds_milestone_type',
    'field_nrel_ecleds_milestone_ben' => 'field_nrel_ecleds_milestone_ben',
    'field_status' => 'field_status',
    'field_milestone_type_notes' => 'field_milestone_type_notes',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_target_fiscal_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_milestone_operating_unit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ecleds_milestone_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_completion_month' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_completion_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_milestone_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nrel_ecleds_milestone_cat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nrel_ecleds_milestone_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nrel_ecleds_milestone_ben' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_milestone_type_notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_results_milestone_node']['id'] = 'reverse_field_results_milestone_node';
  $handler->display->display_options['relationships']['reverse_field_results_milestone_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_results_milestone_node']['field'] = 'reverse_field_results_milestone_node';
  $handler->display->display_options['relationships']['reverse_field_results_milestone_node']['label'] = 'Results';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_results_node']['id'] = 'reverse_field_results_node';
  $handler->display->display_options['relationships']['reverse_field_results_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_results_node']['field'] = 'reverse_field_results_node';
  $handler->display->display_options['relationships']['reverse_field_results_node']['relationship'] = 'reverse_field_results_milestone_node';
  $handler->display->display_options['relationships']['reverse_field_results_node']['label'] = 'Activity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Milestone';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Target Fiscal Year */
  $handler->display->display_options['fields']['field_target_fiscal_year']['id'] = 'field_target_fiscal_year';
  $handler->display->display_options['fields']['field_target_fiscal_year']['table'] = 'field_data_field_target_fiscal_year';
  $handler->display->display_options['fields']['field_target_fiscal_year']['field'] = 'field_target_fiscal_year';
  $handler->display->display_options['fields']['field_target_fiscal_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Operating Unit */
  $handler->display->display_options['fields']['field_milestone_operating_unit']['id'] = 'field_milestone_operating_unit';
  $handler->display->display_options['fields']['field_milestone_operating_unit']['table'] = 'field_data_field_milestone_operating_unit';
  $handler->display->display_options['fields']['field_milestone_operating_unit']['field'] = 'field_milestone_operating_unit';
  $handler->display->display_options['fields']['field_milestone_operating_unit']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_ecleds_milestone_country']['id'] = 'field_ecleds_milestone_country';
  $handler->display->display_options['fields']['field_ecleds_milestone_country']['table'] = 'field_data_field_ecleds_milestone_country';
  $handler->display->display_options['fields']['field_ecleds_milestone_country']['field'] = 'field_ecleds_milestone_country';
  $handler->display->display_options['fields']['field_ecleds_milestone_country']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Month */
  $handler->display->display_options['fields']['field_completion_month']['id'] = 'field_completion_month';
  $handler->display->display_options['fields']['field_completion_month']['table'] = 'field_data_field_completion_month';
  $handler->display->display_options['fields']['field_completion_month']['field'] = 'field_completion_month';
  $handler->display->display_options['fields']['field_completion_month']['label'] = 'Completion Quarter';
  $handler->display->display_options['fields']['field_completion_month']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_completion_year']['id'] = 'field_completion_year';
  $handler->display->display_options['fields']['field_completion_year']['table'] = 'field_data_field_completion_year';
  $handler->display->display_options['fields']['field_completion_year']['field'] = 'field_completion_year';
  $handler->display->display_options['fields']['field_completion_year']['label'] = 'Completion Year';
  $handler->display->display_options['fields']['field_completion_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Milestone Description */
  $handler->display->display_options['fields']['field_milestone_description']['id'] = 'field_milestone_description';
  $handler->display->display_options['fields']['field_milestone_description']['table'] = 'field_data_field_milestone_description';
  $handler->display->display_options['fields']['field_milestone_description']['field'] = 'field_milestone_description';
  /* Field: Content: Milestone Category */
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['id'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['table'] = 'field_data_field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['field'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_type']['id'] = 'field_nrel_ecleds_milestone_type';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_type']['table'] = 'field_data_field_nrel_ecleds_milestone_type';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_type']['field'] = 'field_nrel_ecleds_milestone_type';
  /* Field: Content: Benchmark */
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_ben']['id'] = 'field_nrel_ecleds_milestone_ben';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_ben']['table'] = 'field_data_field_nrel_ecleds_milestone_ben';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_ben']['field'] = 'field_nrel_ecleds_milestone_ben';
  /* Field: Content: Milestone Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
  /* Field: Content: USAID/Washington Notes */
  $handler->display->display_options['fields']['field_milestone_type_notes']['id'] = 'field_milestone_type_notes';
  $handler->display->display_options['fields']['field_milestone_type_notes']['table'] = 'field_data_field_milestone_type_notes';
  $handler->display->display_options['fields']['field_milestone_type_notes']['field'] = 'field_milestone_type_notes';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nrel_ecleds_milestone' => 'nrel_ecleds_milestone',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Operating Unit (field_milestone_operating_unit) */
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['id'] = 'field_milestone_operating_unit_target_id';
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['table'] = 'field_data_field_milestone_operating_unit';
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['field'] = 'field_milestone_operating_unit_target_id';
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['expose']['operator_id'] = 'field_milestone_operating_unit_target_id_op';
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['expose']['label'] = 'Operating Unit';
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['expose']['operator'] = 'field_milestone_operating_unit_target_id_op';
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['expose']['identifier'] = 'field_milestone_operating_unit_target_id';
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_milestone_operating_unit_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  /* Filter criterion: Content: Benchmark (field_nrel_ecleds_milestone_ben) */
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['id'] = 'field_nrel_ecleds_milestone_ben_value';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['table'] = 'field_data_field_nrel_ecleds_milestone_ben';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['field'] = 'field_nrel_ecleds_milestone_ben_value';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['expose']['operator_id'] = 'field_nrel_ecleds_milestone_ben_value_op';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['expose']['label'] = 'Benchmark';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['expose']['operator'] = 'field_nrel_ecleds_milestone_ben_value_op';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['expose']['identifier'] = 'field_nrel_ecleds_milestone_ben_value';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_ben_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type (field_nrel_ecleds_milestone_type) */
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['id'] = 'field_nrel_ecleds_milestone_type_value';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['table'] = 'field_data_field_nrel_ecleds_milestone_type';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['field'] = 'field_nrel_ecleds_milestone_type_value';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['expose']['operator_id'] = 'field_nrel_ecleds_milestone_type_value_op';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['expose']['label'] = 'Milestone Type';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['expose']['operator'] = 'field_nrel_ecleds_milestone_type_value_op';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['expose']['identifier'] = 'field_nrel_ecleds_milestone_type_value';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Milestone Category (field_nrel_ecleds_milestone_cat) */
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['id'] = 'field_nrel_ecleds_milestone_cat_target_id';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['table'] = 'field_data_field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['field'] = 'field_nrel_ecleds_milestone_cat_target_id';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['expose']['operator_id'] = 'field_nrel_ecleds_milestone_cat_target_id_op';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['expose']['label'] = 'Milestone Category';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['expose']['operator'] = 'field_nrel_ecleds_milestone_cat_target_id_op';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['expose']['identifier'] = 'field_nrel_ecleds_milestone_cat_target_id';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['group_info']['label'] = 'Milestone Category';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['group_info']['identifier'] = 'field_nrel_ecleds_milestone_cat_target_id';
  $handler->display->display_options['filters']['field_nrel_ecleds_milestone_cat_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Low emission plans',
      'operator' => '=',
      'value' => array(
        'value' => '65',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Content: Target Fiscal Year (field_target_fiscal_year) */
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['id'] = 'field_target_fiscal_year_value';
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['table'] = 'field_data_field_target_fiscal_year';
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['field'] = 'field_target_fiscal_year_value';
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['expose']['operator_id'] = 'field_target_fiscal_year_value_op';
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['expose']['label'] = 'Target Fiscal Year';
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['expose']['operator'] = 'field_target_fiscal_year_value_op';
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['expose']['identifier'] = 'field_target_fiscal_year_value';
  $handler->display->display_options['filters']['field_target_fiscal_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Milestone Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Milestone Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'reports/milestone';
  $handler->display->display_options['menu']['title'] = 'Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'reports/milestone/milestone_export.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['milestone_report'] = $view;

  $view = new view();
  $view->name = 'milestones_sf';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Milestones SF';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Milestones SF';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Operating Unit */
  $handler->display->display_options['fields']['field_milestone_operating_unit']['id'] = 'field_milestone_operating_unit';
  $handler->display->display_options['fields']['field_milestone_operating_unit']['table'] = 'field_data_field_milestone_operating_unit';
  $handler->display->display_options['fields']['field_milestone_operating_unit']['field'] = 'field_milestone_operating_unit';
  $handler->display->display_options['fields']['field_milestone_operating_unit']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_ecleds_milestone_country']['id'] = 'field_ecleds_milestone_country';
  $handler->display->display_options['fields']['field_ecleds_milestone_country']['table'] = 'field_data_field_ecleds_milestone_country';
  $handler->display->display_options['fields']['field_ecleds_milestone_country']['field'] = 'field_ecleds_milestone_country';
  $handler->display->display_options['fields']['field_ecleds_milestone_country']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Full Milestone Name */
  $handler->display->display_options['fields']['field_full_milestone_name']['id'] = 'field_full_milestone_name';
  $handler->display->display_options['fields']['field_full_milestone_name']['table'] = 'field_data_field_full_milestone_name';
  $handler->display->display_options['fields']['field_full_milestone_name']['field'] = 'field_full_milestone_name';
  /* Field: Content: Milestone Description */
  $handler->display->display_options['fields']['field_milestone_description']['id'] = 'field_milestone_description';
  $handler->display->display_options['fields']['field_milestone_description']['table'] = 'field_data_field_milestone_description';
  $handler->display->display_options['fields']['field_milestone_description']['field'] = 'field_milestone_description';
  /* Field: Content: Benchmark */
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_ben']['id'] = 'field_nrel_ecleds_milestone_ben';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_ben']['table'] = 'field_data_field_nrel_ecleds_milestone_ben';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_ben']['field'] = 'field_nrel_ecleds_milestone_ben';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_type']['id'] = 'field_nrel_ecleds_milestone_type';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_type']['table'] = 'field_data_field_nrel_ecleds_milestone_type';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_type']['field'] = 'field_nrel_ecleds_milestone_type';
  /* Field: Content: USAID/Washington Notes */
  $handler->display->display_options['fields']['field_milestone_type_notes']['id'] = 'field_milestone_type_notes';
  $handler->display->display_options['fields']['field_milestone_type_notes']['table'] = 'field_data_field_milestone_type_notes';
  $handler->display->display_options['fields']['field_milestone_type_notes']['field'] = 'field_milestone_type_notes';
  /* Field: Content: Milestone Category */
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['id'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['table'] = 'field_data_field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['field'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Target Fiscal Year */
  $handler->display->display_options['fields']['field_target_fiscal_year']['id'] = 'field_target_fiscal_year';
  $handler->display->display_options['fields']['field_target_fiscal_year']['table'] = 'field_data_field_target_fiscal_year';
  $handler->display->display_options['fields']['field_target_fiscal_year']['field'] = 'field_target_fiscal_year';
  $handler->display->display_options['fields']['field_target_fiscal_year']['label'] = '';
  $handler->display->display_options['fields']['field_target_fiscal_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_fiscal_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_completion_year']['id'] = 'field_completion_year';
  $handler->display->display_options['fields']['field_completion_year']['table'] = 'field_data_field_completion_year';
  $handler->display->display_options['fields']['field_completion_year']['field'] = 'field_completion_year';
  $handler->display->display_options['fields']['field_completion_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Month */
  $handler->display->display_options['fields']['field_completion_month']['id'] = 'field_completion_month';
  $handler->display->display_options['fields']['field_completion_month']['table'] = 'field_data_field_completion_month';
  $handler->display->display_options['fields']['field_completion_month']['field'] = 'field_completion_month';
  $handler->display->display_options['fields']['field_completion_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Milestone Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status']['type'] = 'text_default';
  /* Field: Content: Milestone Status Description */
  $handler->display->display_options['fields']['field_notes_on_status']['id'] = 'field_notes_on_status';
  $handler->display->display_options['fields']['field_notes_on_status']['table'] = 'field_data_field_notes_on_status';
  $handler->display->display_options['fields']['field_notes_on_status']['field'] = 'field_notes_on_status';
  $handler->display->display_options['fields']['field_notes_on_status']['label'] = 'Notes on Status';
  /* Field: Content: Evidence/Documents Supporting Milestone Completion */
  $handler->display->display_options['fields']['field_completion_description']['id'] = 'field_completion_description';
  $handler->display->display_options['fields']['field_completion_description']['table'] = 'field_data_field_completion_description';
  $handler->display->display_options['fields']['field_completion_description']['field'] = 'field_completion_description';
  $handler->display->display_options['fields']['field_completion_description']['label'] = 'Completion Description';
  /* Field: Content: Month */
  $handler->display->display_options['fields']['field_expected_completion_month']['id'] = 'field_expected_completion_month';
  $handler->display->display_options['fields']['field_expected_completion_month']['table'] = 'field_data_field_expected_completion_month';
  $handler->display->display_options['fields']['field_expected_completion_month']['field'] = 'field_expected_completion_month';
  $handler->display->display_options['fields']['field_expected_completion_month']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_field_exp_compl_year']['id'] = 'field_field_exp_compl_year';
  $handler->display->display_options['fields']['field_field_exp_compl_year']['table'] = 'field_data_field_field_exp_compl_year';
  $handler->display->display_options['fields']['field_field_exp_compl_year']['field'] = 'field_field_exp_compl_year';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nrel_ecleds_milestone' => 'nrel_ecleds_milestone',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'milestones-sf';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'milestones_sf/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['milestones_sf'] = $view;

  $view = new view();
  $view->name = 'nrel_ecleds_activitiies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_country_target_id']['id'] = 'field_activity_country_target_id';
  $handler->display->display_options['relationships']['field_activity_country_target_id']['table'] = 'field_data_field_activity_country';
  $handler->display->display_options['relationships']['field_activity_country_target_id']['field'] = 'field_activity_country_target_id';
  $handler->display->display_options['relationships']['field_activity_country_target_id']['label'] = 'Country';
  $handler->display->display_options['relationships']['field_activity_country_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/add/ecleds-results?field_result_activity=[nid]" class="button">Add Result</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'activities';

  /* Display: Country Tab */
  $handler = $view->new_display('block', 'Country Tab', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/activity?field_activity_country=!1&destination=node/!1/activities" class="button">Add Activity</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_activity_country_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['nrel_ecleds_activitiies'] = $view;

  $view = new view();
  $view->name = 'nrel_ecleds_bulk_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bulk Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_project_country_node']['id'] = 'reverse_field_project_country_node';
  $handler->display->display_options['relationships']['reverse_field_project_country_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_project_country_node']['field'] = 'reverse_field_project_country_node';
  $handler->display->display_options['relationships']['reverse_field_project_country_node']['label'] = 'Project';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_activity_project_node']['id'] = 'reverse_field_activity_project_node';
  $handler->display->display_options['relationships']['reverse_field_activity_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_activity_project_node']['field'] = 'reverse_field_activity_project_node';
  $handler->display->display_options['relationships']['reverse_field_activity_project_node']['relationship'] = 'reverse_field_project_country_node';
  $handler->display->display_options['relationships']['reverse_field_activity_project_node']['label'] = 'Activity';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_nrel_ecleds_milestone_act_node']['id'] = 'reverse_field_nrel_ecleds_milestone_act_node';
  $handler->display->display_options['relationships']['reverse_field_nrel_ecleds_milestone_act_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_nrel_ecleds_milestone_act_node']['field'] = 'reverse_field_nrel_ecleds_milestone_act_node';
  $handler->display->display_options['relationships']['reverse_field_nrel_ecleds_milestone_act_node']['relationship'] = 'reverse_field_activity_project_node';
  $handler->display->display_options['relationships']['reverse_field_nrel_ecleds_milestone_act_node']['label'] = 'Milestone';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Country';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_project_country_node';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project';
  /* Field: Content: Project Description */
  $handler->display->display_options['fields']['field_project_description']['id'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['table'] = 'field_data_field_project_description';
  $handler->display->display_options['fields']['field_project_description']['field'] = 'field_project_description';
  $handler->display->display_options['fields']['field_project_description']['relationship'] = 'reverse_field_project_country_node';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_project_start_date']['id'] = 'field_project_start_date';
  $handler->display->display_options['fields']['field_project_start_date']['table'] = 'field_data_field_project_start_date';
  $handler->display->display_options['fields']['field_project_start_date']['field'] = 'field_project_start_date';
  $handler->display->display_options['fields']['field_project_start_date']['relationship'] = 'reverse_field_project_country_node';
  $handler->display->display_options['fields']['field_project_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_project_end_date']['id'] = 'field_project_end_date';
  $handler->display->display_options['fields']['field_project_end_date']['table'] = 'field_data_field_project_end_date';
  $handler->display->display_options['fields']['field_project_end_date']['field'] = 'field_project_end_date';
  $handler->display->display_options['fields']['field_project_end_date']['relationship'] = 'reverse_field_project_country_node';
  $handler->display->display_options['fields']['field_project_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Funding Pillar (SL/CE/Crosscutting) */
  $handler->display->display_options['fields']['field_project_funding_pillar']['id'] = 'field_project_funding_pillar';
  $handler->display->display_options['fields']['field_project_funding_pillar']['table'] = 'field_data_field_project_funding_pillar';
  $handler->display->display_options['fields']['field_project_funding_pillar']['field'] = 'field_project_funding_pillar';
  $handler->display->display_options['fields']['field_project_funding_pillar']['relationship'] = 'reverse_field_project_country_node';
  /* Field: Content: Prime Contractors or Partners */
  $handler->display->display_options['fields']['field_project_prime_contractors']['id'] = 'field_project_prime_contractors';
  $handler->display->display_options['fields']['field_project_prime_contractors']['table'] = 'field_data_field_project_prime_contractors';
  $handler->display->display_options['fields']['field_project_prime_contractors']['field'] = 'field_project_prime_contractors';
  $handler->display->display_options['fields']['field_project_prime_contractors']['relationship'] = 'reverse_field_project_country_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_activity_project_node';
  $handler->display->display_options['fields']['title_2']['label'] = 'Activity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_nrel_ecleds_milestone_act_node';
  $handler->display->display_options['fields']['title_3']['label'] = 'Milestone';
  /* Field: Content: Milestone Category */
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['id'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['table'] = 'field_data_field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['field'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['relationship'] = 'reverse_field_nrel_ecleds_milestone_act_node';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Target Fiscal Year */
  $handler->display->display_options['fields']['field_target_fiscal_year']['id'] = 'field_target_fiscal_year';
  $handler->display->display_options['fields']['field_target_fiscal_year']['table'] = 'field_data_field_target_fiscal_year';
  $handler->display->display_options['fields']['field_target_fiscal_year']['field'] = 'field_target_fiscal_year';
  $handler->display->display_options['fields']['field_target_fiscal_year']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_target_fiscal_year']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'country' => 'country',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'export';
  $export['nrel_ecleds_bulk_export'] = $view;

  $view = new view();
  $view->name = 'nrel_ecleds_country_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Countries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  $handler->display->display_options['footer']['result']['content'] = '@total';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Country';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Number of Projects';
  $handler->display->display_options['fields']['view']['view'] = 'nrel_ecleds_country_list';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Number of Activities';
  $handler->display->display_options['fields']['view_1']['view'] = 'nrel_ecleds_country_list';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_2';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'country' => 'country',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_country_bureau',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bureau */
  $handler->display->display_options['fields']['field_country_bureau']['id'] = 'field_country_bureau';
  $handler->display->display_options['fields']['field_country_bureau']['table'] = 'field_data_field_country_bureau';
  $handler->display->display_options['fields']['field_country_bureau']['field'] = 'field_country_bureau';
  $handler->display->display_options['fields']['field_country_bureau']['label'] = '';
  $handler->display->display_options['fields']['field_country_bureau']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_bureau']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_bureau']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Number of Projects';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'nrel_ecleds_country_list';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Number of Activities';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['view'] = 'nrel_ecleds_country_list';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_2';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Bureau (field_country_bureau) */
  $handler->display->display_options['sorts']['field_country_bureau_target_id']['id'] = 'field_country_bureau_target_id';
  $handler->display->display_options['sorts']['field_country_bureau_target_id']['table'] = 'field_data_field_country_bureau';
  $handler->display->display_options['sorts']['field_country_bureau_target_id']['field'] = 'field_country_bureau_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'countries';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Countries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Project Count */
  $handler = $view->new_display('block', 'Project Count', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_project_country_node']['id'] = 'reverse_field_project_country_node';
  $handler->display->display_options['relationships']['reverse_field_project_country_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_project_country_node']['field'] = 'reverse_field_project_country_node';
  $handler->display->display_options['relationships']['reverse_field_project_country_node']['label'] = 'Project';
  $handler->display->display_options['relationships']['reverse_field_project_country_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_project_country_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<b></b>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Activity Count */
  $handler = $view->new_display('block', 'Activity Count', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_activity_country_node']['id'] = 'reverse_field_activity_country_node';
  $handler->display->display_options['relationships']['reverse_field_activity_country_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_activity_country_node']['field'] = 'reverse_field_activity_country_node';
  $handler->display->display_options['relationships']['reverse_field_activity_country_node']['label'] = 'Activity';
  $handler->display->display_options['relationships']['reverse_field_activity_country_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_project_country_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<b></b>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['nrel_ecleds_country_list'] = $view;

  $view = new view();
  $view->name = 'nrel_ecleds_frameworks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frameworks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frameworks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_nrel_ecleds_framework_act_target_id']['id'] = 'field_nrel_ecleds_framework_act_target_id';
  $handler->display->display_options['relationships']['field_nrel_ecleds_framework_act_target_id']['table'] = 'field_data_field_nrel_ecleds_framework_act';
  $handler->display->display_options['relationships']['field_nrel_ecleds_framework_act_target_id']['field'] = 'field_nrel_ecleds_framework_act_target_id';
  $handler->display->display_options['relationships']['field_nrel_ecleds_framework_act_target_id']['label'] = 'Activity';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_activity_project_target_id']['id'] = 'field_activity_project_target_id';
  $handler->display->display_options['relationships']['field_activity_project_target_id']['table'] = 'field_data_field_activity_project';
  $handler->display->display_options['relationships']['field_activity_project_target_id']['field'] = 'field_activity_project_target_id';
  $handler->display->display_options['relationships']['field_activity_project_target_id']['relationship'] = 'field_nrel_ecleds_framework_act_target_id';
  $handler->display->display_options['relationships']['field_activity_project_target_id']['label'] = 'Project';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_country_target_id']['id'] = 'field_project_country_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['table'] = 'field_data_field_project_country';
  $handler->display->display_options['relationships']['field_project_country_target_id']['field'] = 'field_project_country_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['relationship'] = 'field_activity_project_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['label'] = 'Country';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Framework';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_nrel_ecleds_framework_act_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Activity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_activity_project_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'Project';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'field_project_country_target_id';
  $handler->display->display_options['fields']['title_3']['label'] = 'Country';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nrel_ecleds_ashleys_frarmework' => 'nrel_ecleds_ashleys_frarmework',
    'nrel_ecleds_gcc_results' => 'nrel_ecleds_gcc_results',
    'nrel_ecleds_indicator' => 'nrel_ecleds_indicator',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'frameworks';
  $export['nrel_ecleds_frameworks'] = $view;

  $view = new view();
  $view->name = 'nrel_ecleds_milestones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Milestones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Milestones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_nrel_ecleds_milestone_act_target_id']['id'] = 'field_nrel_ecleds_milestone_act_target_id';
  $handler->display->display_options['relationships']['field_nrel_ecleds_milestone_act_target_id']['table'] = 'field_data_field_nrel_ecleds_milestone_act';
  $handler->display->display_options['relationships']['field_nrel_ecleds_milestone_act_target_id']['field'] = 'field_nrel_ecleds_milestone_act_target_id';
  $handler->display->display_options['relationships']['field_nrel_ecleds_milestone_act_target_id']['label'] = 'Activity';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_activity_project_target_id']['id'] = 'field_activity_project_target_id';
  $handler->display->display_options['relationships']['field_activity_project_target_id']['table'] = 'field_data_field_activity_project';
  $handler->display->display_options['relationships']['field_activity_project_target_id']['field'] = 'field_activity_project_target_id';
  $handler->display->display_options['relationships']['field_activity_project_target_id']['relationship'] = 'field_nrel_ecleds_milestone_act_target_id';
  $handler->display->display_options['relationships']['field_activity_project_target_id']['label'] = 'Project';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_country_target_id']['id'] = 'field_project_country_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['table'] = 'field_data_field_project_country';
  $handler->display->display_options['relationships']['field_project_country_target_id']['field'] = 'field_project_country_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['relationship'] = 'field_activity_project_target_id';
  $handler->display->display_options['relationships']['field_project_country_target_id']['label'] = 'Country';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Milestone';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Milestone Category */
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['id'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['table'] = 'field_data_field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['field'] = 'field_nrel_ecleds_milestone_cat';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['label'] = 'Category';
  $handler->display->display_options['fields']['field_nrel_ecleds_milestone_cat']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_nrel_ecleds_milestone_act_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Activity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_activity_project_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'Project';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'field_project_country_target_id';
  $handler->display->display_options['fields']['title_3']['label'] = 'Country';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nrel_ecleds_milestone' => 'nrel_ecleds_milestone',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'milestones';
  $export['nrel_ecleds_milestones'] = $view;

  $view = new view();
  $view->name = 'nrel_other_tab';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Tab';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/node/!1/edit" class="button">Add Other Program</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<a href="/node/!1/edit" class="button">Add Other Program</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ecleds_other_target_id']['id'] = 'field_ecleds_other_target_id';
  $handler->display->display_options['relationships']['field_ecleds_other_target_id']['table'] = 'field_data_field_ecleds_other';
  $handler->display->display_options['relationships']['field_ecleds_other_target_id']['field'] = 'field_ecleds_other_target_id';
  $handler->display->display_options['relationships']['field_ecleds_other_target_id']['label'] = 'Other Programs';
  $handler->display->display_options['relationships']['field_ecleds_other_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_ecleds_other_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_ecleds_other_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'country' => 'country',
  );

  /* Display: Country Tab */
  $handler = $view->new_display('block', 'Country Tab', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['nrel_other_tab'] = $view;

  $view = new view();
  $view->name = 'operating_units';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Operating Units';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Operating Units';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_operating_unit_bureau',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  $handler->display->display_options['footer']['result']['content'] = '@total';
  /* Field: Content: Bureau */
  $handler->display->display_options['fields']['field_operating_unit_bureau']['id'] = 'field_operating_unit_bureau';
  $handler->display->display_options['fields']['field_operating_unit_bureau']['table'] = 'field_data_field_operating_unit_bureau';
  $handler->display->display_options['fields']['field_operating_unit_bureau']['field'] = 'field_operating_unit_bureau';
  $handler->display->display_options['fields']['field_operating_unit_bureau']['label'] = '';
  $handler->display->display_options['fields']['field_operating_unit_bureau']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_operating_unit_bureau']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_operating_unit_bureau']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Bureau (field_operating_unit_bureau) */
  $handler->display->display_options['sorts']['field_operating_unit_bureau_target_id']['id'] = 'field_operating_unit_bureau_target_id';
  $handler->display->display_options['sorts']['field_operating_unit_bureau_target_id']['table'] = 'field_data_field_operating_unit_bureau';
  $handler->display->display_options['sorts']['field_operating_unit_bureau_target_id']['field'] = 'field_operating_unit_bureau_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'operating_unit' => 'operating_unit',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['path'] = 'operating-units';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Operating Units';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['operating_units'] = $view;

  return $export;
}
