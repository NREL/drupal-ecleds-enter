<?php
/**
 * @file
 * ecleds_files.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ecleds_files_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-file-body'
  $field_instances['node-file-body'] = array(
    'bundle' => 'file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The description field is not shown to the user - it is just to help you organize your files.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => '',
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-file-field_file_attachment'
  $field_instances['node-file-field_file_attachment'] = array(
    'bundle' => 'file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_url_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_file_attachment',
    'label' => 'File Attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'attached-files',
      'file_extensions' => 'txt pdf doc docx ppt pptx pps xls xlsx rtf jpg jpeg gif png mp3',
      'imagecrop' => array(
        'slider' => 0,
        'slider-medium' => 0,
      ),
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__grid-3' => 0,
          'colorbox__grid-4' => 0,
          'colorbox__grid-6' => 0,
          'colorbox__grid-9' => 0,
          'colorbox__grid-12' => 0,
          'colorbox__large' => 0,
          'colorbox__medium' => 0,
          'colorbox__slider' => 0,
          'colorbox__slider-medium' => 0,
          'colorbox__slider-teaser' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__thumbnail' => 0,
          'image' => 0,
          'image_grid-3' => 0,
          'image_grid-4' => 0,
          'image_grid-6' => 0,
          'image_grid-9' => 0,
          'image_grid-12' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_slider' => 0,
          'image_slider-medium' => 0,
          'image_slider-teaser' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('File Attachment');
  t('The description field is not shown to the user - it is just to help you organize your files.');

  return $field_instances;
}
