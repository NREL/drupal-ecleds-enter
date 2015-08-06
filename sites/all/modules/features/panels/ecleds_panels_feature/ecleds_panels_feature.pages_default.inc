<?php
/**
 * @file
 * ecleds_panels_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ecleds_panels_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard_report';
  $page->task = 'page';
  $page->admin_title = 'Dashboard Report';
  $page->admin_description = '';
  $page->path = 'reports/dashboard/%node';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_report__panel_context_046bfeb6-cc67-4626-a047-2897d488d18c';
  $handler->task = 'page';
  $handler->subtask = 'dashboard_report';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Report',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'dashboard-report',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Dashboard Report';
  $display->uuid = '772a13c9-0de6-4c68-ad29-79e4d32f76dd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6103f5b8-7d32-4439-a7b1-c6850868d685';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_report-dashboard_report_ou_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6103f5b8-7d32-4439-a7b1-c6850868d685';
    $display->content['new-6103f5b8-7d32-4439-a7b1-c6850868d685'] = $pane;
    $display->panels['middle'][0] = 'new-6103f5b8-7d32-4439-a7b1-c6850868d685';
    $pane = new stdClass();
    $pane->pid = 'new-2a6617c3-e75a-47e8-a875-c1bcffc55a54';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_report-dashboard_report_ou_progress_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2a6617c3-e75a-47e8-a875-c1bcffc55a54';
    $display->content['new-2a6617c3-e75a-47e8-a875-c1bcffc55a54'] = $pane;
    $display->panels['middle'][1] = 'new-2a6617c3-e75a-47e8-a875-c1bcffc55a54';
    $pane = new stdClass();
    $pane->pid = 'new-edecebcc-4da0-4cde-aa59-227dae9dea4b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_report-dashboard_report_country_context_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'edecebcc-4da0-4cde-aa59-227dae9dea4b';
    $display->content['new-edecebcc-4da0-4cde-aa59-227dae9dea4b'] = $pane;
    $display->panels['middle'][2] = 'new-edecebcc-4da0-4cde-aa59-227dae9dea4b';
    $pane = new stdClass();
    $pane->pid = 'new-1bdefc5e-5fff-48c4-b5c6-a923f060a23f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_report-dashboard_report_env_eco_ghg_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1bdefc5e-5fff-48c4-b5c6-a923f060a23f';
    $display->content['new-1bdefc5e-5fff-48c4-b5c6-a923f060a23f'] = $pane;
    $display->panels['middle'][3] = 'new-1bdefc5e-5fff-48c4-b5c6-a923f060a23f';
    $pane = new stdClass();
    $pane->pid = 'new-97a65160-94e6-4647-ba65-8e0f24a121f2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_report-dashboard_report_key_eco_sectors_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '97a65160-94e6-4647-ba65-8e0f24a121f2';
    $display->content['new-97a65160-94e6-4647-ba65-8e0f24a121f2'] = $pane;
    $display->panels['middle'][4] = 'new-97a65160-94e6-4647-ba65-8e0f24a121f2';
    $pane = new stdClass();
    $pane->pid = 'new-473d078c-a7e1-4b42-889d-06e4a81843a5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_report-dashboard_report_top3_ghg_emitting_sectors_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '473d078c-a7e1-4b42-889d-06e4a81843a5';
    $display->content['new-473d078c-a7e1-4b42-889d-06e4a81843a5'] = $pane;
    $display->panels['middle'][5] = 'new-473d078c-a7e1-4b42-889d-06e4a81843a5';
    $pane = new stdClass();
    $pane->pid = 'new-25ec01b4-04f9-4772-a119-1a79f44dcfa9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_report-dashboard_report_econ_growth_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '25ec01b4-04f9-4772-a119-1a79f44dcfa9';
    $display->content['new-25ec01b4-04f9-4772-a119-1a79f44dcfa9'] = $pane;
    $display->panels['middle'][6] = 'new-25ec01b4-04f9-4772-a119-1a79f44dcfa9';
    $pane = new stdClass();
    $pane->pid = 'new-3a95b82b-a33a-4a57-bafa-fbf856279457';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_report-dashboard_report_forested_area_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '3a95b82b-a33a-4a57-bafa-fbf856279457';
    $display->content['new-3a95b82b-a33a-4a57-bafa-fbf856279457'] = $pane;
    $display->panels['middle'][7] = 'new-3a95b82b-a33a-4a57-bafa-fbf856279457';
    $pane = new stdClass();
    $pane->pid = 'new-ff88c970-2cbe-437c-9d10-b143b7ce60a1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_report-dashboard_report_renewable_energy_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'ff88c970-2cbe-437c-9d10-b143b7ce60a1';
    $display->content['new-ff88c970-2cbe-437c-9d10-b143b7ce60a1'] = $pane;
    $display->panels['middle'][8] = 'new-ff88c970-2cbe-437c-9d10-b143b7ce60a1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard_report'] = $page;

  return $pages;

}
