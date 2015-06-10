<!DOCTYPE html>
<!--[if lt IE 7]> <html class="lt-ie9 lt-ie8 lt-ie7" lang="en"> <![endif]-->
<!--[if IE 7]>    <html class="lt-ie9 lt-ie8" lang="en"> <![endif]-->
<!--[if IE 8]>    <html class="lt-ie9" lang="en"> <![endif]-->
<!--[if gt IE 8]><!--> <html lang="en"> <!--<![endif]-->
<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php
    if (theme_get_setting('toggle_favicon')) {
      $favicon = theme_get_setting('favicon');
    }
    else {
      $favicon = "/sites/all/themes/center/images/favicon.ico";
    }
  ?>
  <link rel="shortcut icon" type="image/x-icon" href="<?php print $favicon; ?>" />
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>

<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
    <div id="page" class="<?php print $classes; ?>">

     <div id="main">

          <div id="main-content" class="clearfix l--constrained">

            <div id="content">

              <h1>
                We're sorry!
              </h1>
              <p><img style="float:left; width:50px; padding-right:10px;" alt="danger sign" src="sites/all/themes/ecleds/img/site-unavailable.png" /><strong>The Clean Energy Solutions Center website is currently unavailable. Please try again shortly.</strong>

            </div>

        </div>

        <div id="footer">
          <div class="l--constrained clearfix">
              <?php print $footer; ?>
          </div>
        </div>
    </div>
</body>
</html>