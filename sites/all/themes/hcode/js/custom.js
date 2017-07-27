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

    // Adding Placeholders to Custom registration form fields
    var regForm = $('body').find('form#user-register-form');
    if( regForm.length == 1 ) { // found form
      $(regForm).find('div.field-type-text').each(function(e) {
        var label = $(this).find('label').text(); // Gets the label of the input fields.
        $(this).find('input').attr('placeholder', label.replace('*', ''));
      });

      $(regForm).find('div.form-item').each(function(e) {
        var label = $(this).find('label').text(); // Gets the label of the input fields.
        $(this).find('input').attr('placeholder', label.replace('*', ''));
      });

      // for Email field.
      $(regForm).find('input#edit-anon-mail').attr('placeholder', 'Mail');

      // Replace button text
      $(this).find('input[type="submit"]').attr('value', 'Register');
    }

    // Adding Placeholders to login fields
    var LoginForm = $('body').find('form#user-login');
    if ( LoginForm.length > 0 ) {
      LoginForm.find('div.form-item').each(function(e) {
        var label = $(this).find('label').text();
        $(this).find('input').attr('placeholder', label.replace('*', ''));
      });
    }


    /**
    * Breakers page
    * - content block switch display
    *  - Thumbnail and List
    */
    $('body.page-video-and-contents').find('div#content .widget-title').append('<div class="right-icons"><i class="fa fa-list active"></i><i class="fa fa-th"></i></div>');

    $('.view-id-video_and_contents.view-display-id-page').addClass('hide');

    // Clickable functionality for icons on Header elements
    $('div#content .widget-title').find('div.right-icons i')
      .each(function(e) {
        $(this).on('click', function() {
          if ($(this).hasClass('fa-list')) {
            $(this).addClass('active');
            $('.fa-th.active').removeClass('active');
            $('#lists_video_block').removeClass('hide');
            $('.view-id-video_and_contents.view-display-id-page').addClass('hide');
          }
          else if ($(this).hasClass('fa-th')) {
            $(this).addClass('active');
            $('.fa-list.active').removeClass('active');
            $('#lists_video_block').addClass('hide');
            $('.view-id-video_and_contents.view-display-id-page').removeClass('hide');
          }
        });
      });
  });
})(jQuery);
