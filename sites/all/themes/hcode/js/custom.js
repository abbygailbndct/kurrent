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
    var regForm = $('body').find('form#registration-form');
    if( regForm.length == 1 ) { // found form
      $(regForm).find('div.field-type-text').each(function(e) {
        var label = $(this).find('label').text(); // Gets the label of the input fields.
        $(this).find('input').attr('placeholder', label);
      });

      // for Email field.
      $(regForm).find('input#edit-anon-mail').attr('placeholder', 'Mail');

      // Replace button text
      $(this).find('input[type="submit"]').attr('value', 'Update Profile');
    }

    // Adding Placeholders to login fields
    var LoginForm = $('body').find('form#user-login');
    if ( LoginForm.length > 0 ) {
      LoginForm.find('div.form-item').each(function(e) {
        var label = $(this).find('label').text();
        $(this).find('input').attr('placeholder', label.replace('*', ''));
      });
    }
  });
})(jQuery);
