(function ($) {

  Drupal.behaviors.gsb_feature_alumni_reunion_agenda_item_destination = {
    attach: function() {
      $('.tabs.primary li').each(function() {
        if ($(this).text() == 'New draft') {
          oldhref = $(this).find('a').attr('href');
          newhref = oldhref + '?destination=' + window.location.pathname;
          $(this).find('a').attr('href', newhref);
        }
      });
    }
  }

}(jQuery));
