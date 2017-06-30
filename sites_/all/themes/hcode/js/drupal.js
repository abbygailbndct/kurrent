(function() {
  
  var $ = jQuery;

  Drupal.behaviors.scroll_to_down = {
    attach: function (context, settings) {
      $('.scroll-to-down-white', context).click(function() {
        $('html, body').animate({scrollTop: $(this).next('.after-parallax-anchor').offset().top}, 800);
      });
    }
  };


  Drupal.behaviors.href_click = {
    attach: function (context, settings) {
      $('a[href="#"]', context).click(function() {
        return false;
      });
    }
  };

  Drupal.behaviors.cart_remove_wrap = {
    attach: function (context, settings) {
      $('.cart-remove-wrap a', context).click(function() {
        $(this).parent().find('input').click();
        return false;
      });
    }
  };

  Drupal.behaviors.cart_quick_add = {
    attach: function (context, settings) {
      $('.product-share .quick-buy-btn', context).click(function() {
        $(this).closest('.product-share').find('.form-submit').click();
        return false;
      });
    }
  };

  var id = 0;

  Drupal.behaviors.counters = {
    attach: function (context, settings) {
      $('.counter-section', context).each(function() {
        $(this).attr('id', 'counter-id-' + id);
        id++;
      });
    }
  };

  function animate_counter($this) {
    $({ ValuerHbcO: 0 }).delay(500).animate({ ValuerHbcO: $this.data('number') }, {
      duration: 2000,
      easing: "swing",
      step: function () {
        $this.find('.counter-number').text(Math.ceil(this.ValuerHbcO));
      }
    });
  }

  function isScrolledIntoView(elem) {
      try {
          var docViewTop = $(window).scrollTop();
          var docViewBottom = docViewTop + $(window).height();

          var elemTop = $(elem).offset().top;
          var elemBottom = elemTop + $(elem).height();

          return ((elemTop <= docViewBottom) && (elemBottom >= docViewTop));
      }
      catch (ex) {
          return false;
      }
  }

  $(window).scroll(function () {

    for (var i = 0; i < id; i++) {
      if (isScrolledIntoView('#counter-id-' + i)) {
        var $this = $('#counter-id-' + i);
        if (!$this.hasClass('counted')) {
          $this.addClass('counted');
          animate_counter($this);
        }
      } 
    }

  });

}());