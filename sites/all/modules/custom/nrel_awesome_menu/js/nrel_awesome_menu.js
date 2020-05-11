(function ($, window) {
  Drupal.behaviors.neon_map = {
    attach: function() {
      if ($('.ui-front').length > 1) {
        return;
      }
      // Infect the menu!
      // ================
      var $menu = $('.menu-name-main-menu');
      if (!$menu.length) return;

      var $links = $menu.find('li');
      $links.each(function(i) {
        var $this = $(this);
        var contentType = $this.text().toLowerCase();
        var $input = $(
          '<div class="ui-front">' +
            '<input data-autocomplete="' + contentType + '"' +
                   'type="text" placeholder=' + contentType + '>' +
          '</div>'
        );
        $this.append($input);
      });

      // Give it powers!
      // ===============
      var $autocompletes = $('input[data-autocomplete]');
      $autocompletes.each(function() {
        var $autocomplete = $(this);
        var contentType = $autocomplete.data().autocomplete;
        var suggestions;

        $.ajax({
          url: '/api/' + contentType,
          dataType: 'json',
          success: function(data) {
            var items = Object.keys(data).map(function(key) {
              var itemPath = data[key].title || data[key].name;
              itemPath = itemPath
                .toLowerCase()
                .replace(/\s+/g, '-')
                .replace(/'/g, '')
                .replace(/\//g, '-');
              var basePath;

              switch (contentType) {
                case 'countries':
                  basePath = '/country/';
                  break;

                case 'activities':
                  basePath = '/activity/';
                  break;

                case 'milestones':
                  basePath = '/milestone-category/';
                  break;

                case 'frameworks':
                  basePath = '/content/';
                  break;
              }

              var item = {
                value: basePath + itemPath,
                label: data[key].title || data[key].name
              }
              return item;
            });
            $autocomplete.autocomplete({
              select: function(ev, ui) {
                window.location.href = ui.item.value;
              },
              source: items
            });
          }
        });

      });
    }
  }
})(jQuery, window);
