<?php
/**
 * @file
 * ecleds_contexts_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ecleds_contexts_feature_context_default_contexts() {
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
  $context->name = 'country_ecleds_program_plans_description';
  $context->description = '';
  $context->tag = 'Section descriptions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/program' => 'node/*/program',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-country-ec-leds-program-plans-se' => array(
          'module' => 'bean',
          'delta' => 'country-ec-leds-program-plans-se',
          'region' => 'content_before',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section descriptions');
  $export['country_ecleds_program_plans_description'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'country_leds_plans_description';
  $context->description = '';
  $context->tag = 'Section descriptions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/leds' => 'node/*/leds',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-country-leds-plans-section-descr' => array(
          'module' => 'bean',
          'delta' => 'country-leds-plans-section-descr',
          'region' => 'content_before',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section descriptions');
  $export['country_leds_plans_description'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'country_overview_description';
  $context->description = '';
  $context->tag = 'Section descriptions';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'country' => 'country',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-country-overview-section-descrip' => array(
          'module' => 'bean',
          'delta' => 'country-overview-section-descrip',
          'region' => 'content_before',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section descriptions');
  $export['country_overview_description'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'expand_collapse_ims';
  $context->description = '';
  $context->tag = 'Expand/Collapse';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/operating-unit/implementing-mechanisms' => 'node/*/operating-unit/implementing-mechanisms',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-expand-collapse-ims' => array(
          'module' => 'bean',
          'delta' => 'expand-collapse-ims',
          'region' => 'content_before',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Expand/Collapse');
  $export['expand_collapse_ims'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'expand_collapse_milestones';
  $context->description = '';
  $context->tag = 'Expand/Collapse';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/operating-unit/milestones' => 'node/*/operating-unit/milestones',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-expand-all-milestones' => array(
          'module' => 'bean',
          'delta' => 'expand-all-milestones',
          'region' => 'content_before',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Expand/Collapse');
  $export['expand_collapse_milestones'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ou_im_description';
  $context->description = '';
  $context->tag = 'Section descriptions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/operating-unit/implementing-mechanisms' => 'node/*/operating-unit/implementing-mechanisms',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-ou-im-section-description' => array(
          'module' => 'bean',
          'delta' => 'ou-im-section-description',
          'region' => 'content_before',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section descriptions');
  $export['ou_im_description'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ou_milestone_description';
  $context->description = '';
  $context->tag = 'Section descriptions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/operating-unit/milestones' => 'node/*/operating-unit/milestones',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-ou-milestone-section-description' => array(
          'module' => 'bean',
          'delta' => 'ou-milestone-section-description',
          'region' => 'content_before',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section descriptions');
  $export['ou_milestone_description'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ou_overview_description';
  $context->description = '';
  $context->tag = 'Section descriptions';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'operating_unit' => 'operating_unit',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-ou-overview-section-description' => array(
          'module' => 'bean',
          'delta' => 'ou-overview-section-description',
          'region' => 'content_before',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section descriptions');
  $export['ou_overview_description'] = $context;

  return $export;
}
