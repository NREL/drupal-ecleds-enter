<?php
/**
 * @file
 * ecleds_gcc_standard_indicator_field_collection_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecleds_gcc_standard_indicator_field_collection_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
