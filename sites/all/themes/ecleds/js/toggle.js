/**
 * @file
 * JavaScript for dynamically inserting the section number into the node
 * add/edit form.
 */

(function ($) {

  Drupal.behaviors.ecledsOUToggle = {};
  Drupal.behaviors.ecledsOUToggle.attach = function(context) {
    $("#node-3210 h2").addClass("toggle-open");
  }
})(jQuery);

