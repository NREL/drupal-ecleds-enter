;(function($){

  $.fn.toggler = function(options) {

    var defaults,
        params;

    defaults = {
      toggle: {
        open: 'toggle-open',
        closed: 'toggle-closed'
      },
      icon: {
        el: 'span',
        sel: 'toggle-icon'
      },
      content: {
        sel: 'content'
      }
    };

    params = $.extend({}, defaults, options);

    function Toggle($toggle) {

      var $content,
          $context;

      console.log(params);

      $toggle.addClass(params.toggle.closed);
      $toggle.prepend($('<' + params.icon.el + '/>').addClass(params.icon.sel));

      $context = $toggle.parent();
      $content = $('.' + params.content.sel, $context);

      $content.hide();

      $toggle.click(function(e) {
        $toggle.toggleClass(params.toggle.open);
        $toggle.toggleClass(params.toggle.closed);

        $content.slideToggle();
        e.preventDefault();
      });
    }

    return this.each(function() {
      var toggle = new Toggle($(this));
    });

  }

})(jQuery);