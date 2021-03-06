<?php
/**
 * @file
 * ecleds_text_formats.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function ecleds_text_formats_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Paste' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
        ),
      ),
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'simple_source_formatting' => 0,
      'resize_enabled' => 1,
      'toolbarLocation' => 'top',
      'forcePasteAsPlainText' => 0,
      'stylesSet' => '',
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Paste' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
        ),
      ),
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'simple_source_formatting' => 0,
      'resize_enabled' => 1,
      'toolbarLocation' => 'top',
      'forcePasteAsPlainText' => 0,
      'stylesSet' => '',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
