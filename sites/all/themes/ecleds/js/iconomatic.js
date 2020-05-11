/**
 * @file
 * Attaches behaviors for Iconomatic.
 */

(function ($) {

  Drupal.behaviors.PolProcThemeIconomatics = {
    attach: function (context, settings) {
      $('body').iconomatic();
    }
  };

})(jQuery);
