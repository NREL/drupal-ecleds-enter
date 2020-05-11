<?php
/**
 * @file
 * ecleds_feeds_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ecleds_feeds_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'milestones';
  $feeds_importer->config = array(
    'name' => 'Milestones',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'field_milestone_operating_unit',
            'target' => 'field_milestone_operating_unit:label',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'field_ecleds_milestone_country',
            'target' => 'field_ecleds_milestone_country:label',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'field_full_milestone_name',
            'target' => 'field_full_milestone_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'field_notes_on_status',
            'target' => 'field_milestone_description',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'field_milestone_type_notes',
            'target' => 'field_milestone_type_notes',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'field_nrel_ecleds_milestone_type',
            'target' => 'field_nrel_ecleds_milestone_type',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'field_nrel_ecleds_milestone_ben',
            'target' => 'field_nrel_ecleds_milestone_ben',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'field_nrel_ecleds_milestone_cat',
            'target' => 'field_nrel_ecleds_milestone_cat:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'field_status',
            'target' => 'field_status',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'field_completion_description',
            'target' => 'field_notes_on_status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'field_completion_year',
            'target' => 'field_field_exp_compl_year',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'field_completion_month',
            'target' => 'field_completion_month',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'field_exp_compl_year',
            'target' => 'field_completion_year',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'field_exp_compl_month',
            'target' => 'field_expected_completion_month',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'field_target_fiscal_year',
            'target' => 'field_target_fiscal_year',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'nrel_ecleds_milestone',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['milestones'] = $feeds_importer;

  return $export;
}
