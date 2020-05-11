<?php
/**
 * @file
 * Normi Drush Integration
 */

/**
 * Normi drush commands
 */
function normi_drush_command() {
  $items = array();

  $items['normi-migrate'] = array(
    'callback' => 'normi_migrate',
    'drupal dependencies' => array('normi'),
    'description' => 'Export migrate code for a node type',
    'arguments' => array(
      'type' => 'The content type to export',
    ),
    'options' => array(
      'description' => 'Migration description',
      'type' => 'The type of Normi migration. normi/db (default), csv, json',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'aliases' => array('nomi'),
    'examples' => array(
      'drush nomi page' => 'View the migrate code for the page content type.',
    ),
  );

  return $items;
}

/**
 * Command handle for: normi-migrate (nomi)
 */
function normi_migrate() {
  $types = func_get_args();
  $values = array();

  // options
  $options = array();

  if ($description = drush_get_option('description')) {
    $options['description'] = $description;
  }

  if ($type = drush_get_option('type')) {
    $options['type'] = $type;
  }

  // normi prints out a PHP tag, etc. so we'll only allow export of
  // one at a time
  $type = array_shift($types);
  $code = normi_create_module_inc_node($values, $type, $options);
  print $code;
}
