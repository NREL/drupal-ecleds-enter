<?php
/**
 * @file
 * ecleds_file.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_file_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
