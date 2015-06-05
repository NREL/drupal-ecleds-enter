<?php
/**
 * @file
 * ecleds_im_funding_pillar_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ecleds_im_funding_pillar_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_im_funding_pillar-field_fiscal_year'
  $field_instances['field_collection_item-field_im_funding_pillar-field_fiscal_year'] = array(
    'bundle' => 'field_im_funding_pillar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fiscal_year',
    'label' => 'Fiscal Year',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => '',
        'size' => 8,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_im_funding_pillar-field_funding_pillar'
  $field_instances['field_collection_item-field_im_funding_pillar-field_funding_pillar'] = array(
    'bundle' => 'field_im_funding_pillar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_funding_pillar',
    'label' => 'Funding Pillar',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_im_funding_pillar-field_impl_mech_direct_indirect'
  $field_instances['field_collection_item-field_im_funding_pillar-field_impl_mech_direct_indirect'] = array(
    'bundle' => 'field_im_funding_pillar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_impl_mech_direct_indirect',
    'label' => 'Direct/Indirect',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Direct/Indirect');
  t('Fiscal Year');
  t('Funding Pillar');

  return $field_instances;
}
