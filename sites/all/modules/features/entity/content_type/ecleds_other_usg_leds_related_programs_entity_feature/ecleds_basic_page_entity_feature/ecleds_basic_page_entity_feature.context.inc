<?php
/**
 * @file
 * ecleds_basic_page_entity_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ecleds_basic_page_entity_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'country-tab-edit-screens';
  $context->description = '';
  $context->tag = 'global';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'baseline_workbook' => 'baseline_workbook',
        'environmental_and_economical' => 'environmental_and_economical',
        'leds_plans_institutions' => 'leds_plans_institutions',
        'program_level_progress' => 'program_level_progress',
        'program_plans' => 'program_plans',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-0bd7d29725660ecbe245f9208cdf5d85' => array(
          'module' => 'views',
          'delta' => '0bd7d29725660ecbe245f9208cdf5d85',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  $export['country-tab-edit-screens'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = 'path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        0 => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('path');
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  $export['global'] = $context;

  return $export;
}
