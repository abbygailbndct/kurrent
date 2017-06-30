(function($) {
  $(document).ready(function() {
    // Expand the menu
    $('li.expanded ul').addClass('hide');
    $('li.expanded').click(function() {
      $(this).toggleClass('clicked');
      $(this).find('ul').toggleClass('hide');
    });

    // Updates dashboard element class
    var find = $('body').find('div#content');
    if (find.hasClass('col-md-5') == true) {
      find.removeClass('col-md-5');
      find.addClass('col-md-6');
    }
  });
})(jQuery);
