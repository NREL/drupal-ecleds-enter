<?php

/**
 * @file
 * settings.php for ecleds
 *
 * Programmatically generate settings.php from script.
 * https://github.nrel.gov/dhaley/drupal_scripts.
 *
 * Database settings should be put in settings.local.php.  Settings.local.php
 * should never be checked into git because it contains passwords.
 */

$update_free_access = FALSE;
$drupal_hash_salt = 'Rn_oW6Q42NFoPQ52gq9NZwDYry7Bn_tWqUv3B0Gu96f';

// Set up environment specific variables for www_nrel.
// If www_nrel env isset or php executed through cli (drush).
if (isset($_SERVER['WWW_NREL']) || PHP_SAPI === 'cli') {

  // Never allow updating modules through UI.
  $conf['allow_authorize_operations'] = FALSE;

  // Disable poorman cron.
  $conf['cron_safe_threshold'] = 0;

  // No IP blocking from the UI, we'll take care of that at a higher level.
  $conf['blocked_ips'] = array();

  if (isset($_SERVER['WWW_NREL'])) {
    // If forwarded from the WAF.
    if (isset($_SERVER['HTTP_X_FORWARDED_FOR'])) {
      $_SERVER['HTTPS'] = 'On';
      $conf['reverse_proxy'] = TRUE;
      $conf['reverse_proxy_addresses'] = array('192.174.58.16', '192.174.58.17');
    }
    if (isset($_SERVER['HTTPS']) && strtolower($_SERVER['HTTPS']) == 'on') {
      $base_url = 'https://';
      ini_set('session.cookie_secure', 1);
      ini_set('session.cookie_httponly', 1);
    }
    else {
      $base_url = 'http://';
    }

    $conf['reroute_email_address'] = 'DrupalAdmin@nrel.gov';
    $conf['reroute_email_enable_message'] = 0;
    switch ($_SERVER['WWW_NREL']) {
      case 'INT':
        $base_url .= 'ecleds-int.nrel.gov';
        $conf['reroute_email_enable'] = 1;
        $conf['error_level'] = '2';
        $conf['environment_indicator_overwritten_name'] = 'int';
        $conf['environment_indicator_overwritten_color'] = '#3254ed';
        break;

      case 'TEST':
        $base_url .= 'ecleds-test.nrel.gov';
        $conf['error_level'] = '0';
        $conf['preprocess_css'] = '1';
        $conf['preprocess_js'] = '1';
        $conf['cache'] = '1';
        $conf['page_compression'] = '1';
        $conf['block_cache'] = '1';
        $conf['environment_indicator_overwritten_name'] = 'test';
        $conf['environment_indicator_overwritten_color'] = '#3254ed';
        break;

      case 'STAGE':
        $base_url .= 'ecleds-stage.nrel.gov';
        $conf['error_level'] = '0';
        $conf['preprocess_css'] = '1';
        $conf['preprocess_js'] = '1';
        $conf['cache'] = '1';
        $conf['page_compression'] = '1';
        $conf['block_cache'] = '1';
        $conf['environment_indicator_overwritten_name'] = 'stage';
        $conf['environment_indicator_overwritten_color'] = '#3254ed';
        break;

      case 'POC':
        $base_url .= 'ecleds-poc.nrel.gov';
        $conf['error_level'] = '0';
        $conf['preprocess_css'] = '1';
        $conf['preprocess_js'] = '1';
        $conf['cache'] = '1';
        $conf['page_compression'] = '1';
        $conf['block_cache'] = '1';
        $conf['environment_indicator_overwritten_name'] = 'poc';
        $conf['environment_indicator_overwritten_color'] = '#3254ed';
        break;

      case 'PROD':
        $base_url .= 'ec-leds.org';
        $conf['reroute_email_enable'] = 0;
        $conf['error_level'] = '0';
        $conf['preprocess_css'] = '1';
        $conf['preprocess_js'] = '1';
        $conf['cache'] = '1';
        $conf['page_compression'] = '1';
        $conf['block_cache'] = '1';
        $conf['environment_indicator_overwritten_name'] = 'poc';
        $conf['environment_indicator_overwritten_color'] = '#0b3d60';
        break;

    }
  }
}

/**
 * Load local development override configuration, if available.
 *
 * Use settings.local.php to override variables on secondary (staging,
 * development, etc) installations of this site. Typically used to disable
 * caching, JavaScript/CSS compression, re-routing of outgoing emails, and
 * other things that should not happen on development and testing sites.
 *
 * Keep this code block at the end of this file to take full effect.
 */
if (file_exists(__DIR__ . '/settings.local.php')) {
  include __DIR__ . '/settings.local.php';
}
