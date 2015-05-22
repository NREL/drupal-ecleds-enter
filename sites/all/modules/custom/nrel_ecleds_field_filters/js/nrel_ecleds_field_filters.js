(function ($) {
  Drupal.behaviors.nrel_ecleds_field_filters = {
    attach: function (context, settings) {

      // Data is a nice, short and easy to type variable :)
      var ImData = Drupal.settings.nrelEcledsFieldFiltersOUIM;
      var MilestoneData = Drupal.settings.nrelEcledsFieldFiltersOUMilestone;
      var CountryData = Drupal.settings.nrelEcledsFieldFiltersOUCountry;

      var $operatingUnit = $('#edit-field-activity-operating-unit-und');
      var $implementingMechanism = $('#edit-field-implementing-mechanism-und').once();
      var $milestones = $('.field-name-field-results-milestone .form-checkboxes').once();
      var $apgMilestones = $('.field-name-field-apg-milestone-ref .form-select').once();

      // We want the whole original list, not the remaining items after filtering
      if (typeof settings.country == 'undefined') {
        var $country = $('#edit-field-activity-country-und');
        $country.data('list', $country.find('.form-item'));
        settings.country = $country;
      }
      else {
        var $country = settings.country;
      }

      // We want the whole original list, not the remaining items after filtering
      if (typeof settings.areaOfCooperation == 'undefined') {
        var $areaOfCooperation = $('#edit-field-area-of-cooperation-und');
        $areaOfCooperation.data('list', $areaOfCooperation.find('option'));
        settings.areaOfCooperation = $areaOfCooperation;
      }
      else {
        var $areaOfCooperation = settings.areaOfCooperation;
      }

      $implementingMechanism.data('list', $implementingMechanism.children());

      $($milestones).each(function () {
        $(this).data('list', $(this).find('.form-item'));
      });

      $($apgMilestones).each(function () {
        $(this).data('list', $(this).find('option'));
      });

      /**
       * Resets field to empty, preserving first "- none -" item.
       */
      function resetList($list) {
        $list.empty();
        if ($list.data('list')) {
          $list.append($list.data('list')[0]);
        }
      }

      /**
       * Updates values in implementing mechanism field based on OU field.
       */
      function handleOUChange() {

        var val = $(this).val();
        var ou = $('option[value="' + val + '"]').text();

        resetList($implementingMechanism);

        if ($implementingMechanism.data('list')) {

          $implementingMechanism.data('list').each(function () {

            $option = $(this);

            // On 'none' option, show all.
            if (val == '_none') {
              $implementingMechanism.append($option);
              return;
            }

            if (typeof ImData[ou] === 'undefined') {
              return
            }

            // Check if OU contains this IM.
            var imTest = ImData[ou].some(function (impl, i, array) {
              return impl === $option.text();
            });

            // If found, add option.
            if (imTest) {
              $implementingMechanism.append($option);
            }

          });

          $implementingMechanism[0].selectedIndex = 0;

        }

        $($milestones).each(function () {

          var $milestone = $(this);

          $milestone.empty();

          if ($milestone.data('list')) {

            $milestone.data('list').each(function () {

              $option = $(this);

              // On 'none' option, show all.
              if (val == '_none') {
                $milestone.append($option);
                return;
              }

              if (typeof MilestoneData[ou] === 'undefined') {
                return
              }

              // Check if OU contains this Milestone.
              var milestoneTest = MilestoneData[ou].some(function (mile, i, array) {
                return $.trim(mile) === $.trim($option.find('label').text());
              });

              // If found, add option.
              if (milestoneTest) {
                $milestone.append($option);
              }

            });

          }

        });

        $($apgMilestones).each(function () {

          var $apgMilestone = $(this);

          resetList($apgMilestone);

          if ($apgMilestone.data('list')) {

            $apgMilestone.data('list').each(function () {

              $option = $(this);

              // On 'none' option, show all.
              if (val == '_none') {
                $apgMilestone.append($option);
                return;
              }

              if (typeof MilestoneData[ou] === 'undefined') {
                return;
              }

              // Check if OU contains this Milestone.
              var milestoneTest = MilestoneData[ou].some(function (apg, i, array) {
                return ($.trim(apg) === $.trim($option.find('label').text())) ||
                  ($.trim(apg) === $.trim($option.text().replace('Milestone:', '')));
              });

              // If found, add option.
              if (milestoneTest) {
                $apgMilestone.append($option);
              }

            });

          }
        });

        $country.empty();

        if ($country.data('list')) {

          $country.data('list').each(function () {

            $option = $(this);

            // On 'none' option, show all.
            if (val == '_none') {
              $country.append($option);
              return;
            }

            if (typeof CountryData[ou] === 'undefined') {
              return
            }

            // Check if OU contains this Country.
            var countryTest = CountryData[ou].some(function (country, i, array) {
              return $.trim(country) === $.trim($option.find('label').text());
            });

            // If found, add option.
            if (countryTest) {
              $country.append($option);
            }

          });

        }

      }

      /**
       * Updates values in Areas of Cooperation field based on Country field.
       */
      function handleCountryChange() {

        var selectedCountryNames = [];

        $country.find('input:checked').parent().find('label').each(function () {

          selectedCountryNames.push($.trim($(this).text()));

        });

        resetList($areaOfCooperation);

        if ($areaOfCooperation.data('list')) {

          $areaOfCooperation.data('list').each(function () {

            $option = $(this);
            var countryName = $.trim($option.text().split('-')[0]);

            // If found, add option.

            if (
              (selectedCountryNames.length == 0) ||
              ($.inArray(countryName, selectedCountryNames) > -1)
            ) {
              $areaOfCooperation.append($option);
            }

          });

          $areaOfCooperation[0].selectedIndex = 0;

        }

      }

      handleOUChange.call($operatingUnit);

      $operatingUnit.change(function () {
        handleOUChange.call(this);
        Drupal.attachBehaviors(context, settings);
      });

      handleCountryChange.call();

      $country.find('input').change(function () {
        handleCountryChange.call();
        Drupal.attachBehaviors(context, settings);
      });


    }
  }

}).call(window, jQuery);
