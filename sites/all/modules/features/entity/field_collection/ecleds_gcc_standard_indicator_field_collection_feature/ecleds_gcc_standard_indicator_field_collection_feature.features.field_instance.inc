<?php
/**
 * @file
 * ecleds_gcc_standard_indicator_field_collection_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ecleds_gcc_standard_indicator_field_collection_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy14_baseline'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy14_baseline'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy14_baseline',
    'label' => 'FY14 Baseline',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'label_help_description' => '',
      ),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy14_results'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy14_results'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy14_results',
    'label' => 'FY14 Results',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'label_help_description' => '',
      ),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy14_results_explanation'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy14_results_explanation'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy14_results_explanation',
    'label' => 'FY14 Results Explanation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => 'Please provide a 1-3 sentence description of your numerical results (by IM).',
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy14_target'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy14_target'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy14_target',
    'label' => 'FY14 Target',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'label_help_description' => '',
      ),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy15_results'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy15_results'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy15_results',
    'label' => 'FY15 Results',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'label_help_description' => '',
      ),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy15_results_explanation'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy15_results_explanation'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy15_results_explanation',
    'label' => 'FY15 Results Explanation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => 'Please provide a 1-3 sentence description of your numerical results (by IM).',
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy15_target'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy15_target'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy15_target',
    'label' => 'FY15 Target',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'label_help_description' => '',
      ),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy16_target'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy16_target'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy16_target',
    'label' => 'FY16 Target',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'label_help_description' => '',
      ),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy17_target'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy17_target'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy17_target',
    'label' => 'FY17 Target',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'label_help_description' => '',
      ),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_fy18_target'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_fy18_target'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fy18_target',
    'label' => 'FY18 Target',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'label_help_description' => '',
      ),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_impl_mech_gcc_indicator-field_gcc_standard_indicator'
  $field_instances['field_collection_item-field_impl_mech_gcc_indicator-field_gcc_standard_indicator'] = array(
    'bundle' => 'field_impl_mech_gcc_indicator',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_gcc_standard_indicator',
    'label' => 'Indicator',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
        'label_help_description' => '',
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('FY14 Baseline');
  t('FY14 Results');
  t('FY14 Results Explanation');
  t('FY14 Target');
  t('FY15 Results');
  t('FY15 Results Explanation');
  t('FY15 Target');
  t('FY16 Target');
  t('FY17 Target');
  t('FY18 Target');
  t('Indicator');

  return $field_instances;
}
