<?php
/**
 * @file
 * ecleds_contexts_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ecleds_contexts_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_section_description'
  $field_bases['field_section_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section_description',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
