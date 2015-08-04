/**
 * @file
 * JavaScript for expanding/collapsing all Milestones/IMs.
 */

(function ($) {

  Drupal.behaviors.ecledsOUToggle = {};
  Drupal.behaviors.ecledsOUToggle.attach = function(context) {
    // Show the element - it is initially hidden because we don't know, at the
    // time that the bean containing it is added, if there are milestones or
    // IMs for this node.
    $("#expand-collapse-all").show();
    // Control behavior on clicking the expand/expand link.
    $("#expand-collapse-all").click(function () {
      if ($(this).text() == "Expand all Milestones") {
        $(".toggle-closed").trigger('click');
        $(this).text("Collapse all Milestones");
      } else if ($(this).text() == "Collapse all Milestones") {
        $(".toggle-open").trigger('click');
        $(this).text("Expand all Milestones");
      } else if ($(this).text() == "Expand all IMs") {
        $(".toggle-closed").trigger('click');
        $(this).text("Collapse all IMs");
      } else if ($(this).text() == "Collapse all IMs") {
        $(".toggle-open").trigger('click');
        $(this).text("Expand all IMs");
      }
      return false;
    });
    // Control behavior on clicking the headers. If clicking on an open header
    // would result in all headers being closed, make sure that the text reads
    // "Expand all....". If clicking on an closed header
    // would result in all headers being open, make sure that the text reads
    // "Collapse all....". 
    $('#content .node-nrel-ecleds-milestone h2, #content .node-ecleds-implementing-mechanism > h2').click(function() {
      if (($('.toggle-open').length == 1) && $(this).hasClass('toggle-open')) {
        var txt = $("#expand-collapse-all").text();
        if (txt == "Collapse all Milestones") {
          $("#expand-collapse-all").text("Expand all Milestones");
        } else if (txt == "Collapse all IMs") {
          $("#expand-collapse-all").text("Expand all IMs");
        }
      } else if (($('.toggle-closed').length == 1) && $(this).hasClass('toggle-closed')) {
        var txt = $("#expand-collapse-all").text();
        if (txt == "Expand all Milestones") {
          $("#expand-collapse-all").text("Collapse all Milestones");
        } else if (txt == "Expand all IMs") {
          $("#expand-collapse-all").text("Collapse all IMs");
        }
      }

    });
  }
})(jQuery);

