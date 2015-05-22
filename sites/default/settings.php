<?php

$update_free_access = FALSE;

ini_set('arg_separator.output',     '&amp;');
ini_set('magic_quotes_runtime',     0);
ini_set('magic_quotes_sybase',      0);
ini_set('session.cache_expire',     200000);
ini_set('session.cache_limiter',    'none');
ini_set('session.cookie_lifetime',  172800);
ini_set('session.gc_maxlifetime',   200000);
ini_set('session.save_handler',     'user');
ini_set('session.use_cookies',      1);
ini_set('session.use_only_cookies', 1);
ini_set('session.use_trans_sid',    0);
ini_set('url_rewriter.tags',        '');

$drupal_hash_salt = 'GvklU4cft21_AlPXdwV5kxeDOwHG_gEGaSHijyTCd_8';
$conf['image_allow_insecure_derivatives'] = TRUE;

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
      $conf = array(
        'reverse_proxy' => TRUE,
        'reverse_proxy_addresses' => array('192.174.58.16', '192.174.58.17'),
      );
    }
    if (isset($_SERVER['HTTPS']) && strtolower($_SERVER['HTTPS']) == 'on') {
      $base_url = 'https://';
      ini_set('session.cookie_secure', 1);
    }
    else {
      $base_url = 'http://';
    }

    $conf['reroute_email_address'] = "DrupalAdmin@nrel.gov";
    $conf['reroute_email_enable_message'] = 0;

    switch($_SERVER['WWW_NREL']) {
      case 'TEST':
        $base_url .= 'ecleds-db-test.nrel.gov';
        $conf['reroute_email_enable'] = 1;
        break;

      case 'PROD':
        $base_url .= 'db.ecleds.org';
        $conf['reroute_email_enable'] = 0;
        break;
    }
  }
}

// Set the maintenance theme.
//$conf['maintenance_theme'] = '';

/**
 * Include a local settings file if it exists.
 */
$local_settings = dirname(__FILE__) . '/settings.local.php';
if (file_exists($local_settings)) {
  include $local_settings;
}
