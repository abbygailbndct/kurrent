<!-- navigation panel -->
<div class = "nav-wrapper bg-wrapper-<?php print $color; ?>">
<nav class="navbar navbar-default overlay-nav navbar-fixed-top nav-transparent sticky-nav bg-<?php print $color; ?> nav-border-bottom <?php print $transparent; ?>" role="navigation">
    <div class="container">
        <div class="row">
            <!-- logo -->
            <div class="col-md-2 pull-left">
              <a class="logo-light" href="<?php print url('<front>'); ?>"><img alt="" src="<?php print $logo; ?>" class="logo" /></a>
              <a class="logo-dark" href="<?php print url('<front>'); ?>"><img alt="" src="<?php print $logo_sticky ? $logo_sticky : $logo; ?>" class="logo" /></a>
            </div>
            <!-- end logo -->
            <!-- search and cart  -->
            <div class="col-md-2 no-padding-left search-cart-header pull-right">

              <?php if(isset($search) && $search && module_exists('search')): ?>
                <div id="top-search">
                  <!-- nav search -->
                  <a href="#search-header" class="header-search-form"><i class="fa fa-search search-button"></i></a>
                  <!-- end nav search -->
                </div>

                <?php
                  $search_form_box = module_invoke('search', 'block_view');
                  $search_form_box['#prefix'] = '<div id = "search-header" class = "mfp-hide search-form-result"><div class="search-form position-relative">';
                  $search_form_box['#suffix'] = '</div><button title="'. t('Close (Esc)') . '" type="button" class="mfp-close">×</button></div>';
                  $search_form_box['content']['search_block_form']['#prefix'] = '<button type="submit" class="fa fa-search close-search search-button"></button>';
                  $search_form_box['content']['search_block_form']['#attributes']['class'][] = 'search-input';
                  $search_form_box['content']['search_block_form']['#attributes']['placeholder'] = t('Enter your keywords...');
                  $search_form_box['content']['search_block_form']['#attributes']['autocomplete'] = 'off';
                  $search_form_box['content']['actions']['#attributes']['class'][] = 'hidden';
                  print render($search_form_box);
                ?>

              <?php endif; ?>


              <?php if(isset($cart) && $cart && module_exists('commerce_cart')): ?>
                <div class="top-cart">
                  <!-- nav shopping bag -->
                  <a href="#" class="shopping-cart">
                    <i class="fa fa-shopping-cart"></i>
                    <div class="subtitle"><?php print '(' . _hcode_cart_count() . ') ' . t('Items') ?></div>
                  </a>
                </div>
              <?php endif; ?>
                
            </div>
            <!-- end search and cart  -->
            <!-- toggle navigation -->
            <div class="navbar-header col-sm-8 col-xs-2 pull-right">
                <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse"> <span class="sr-only"><?php print t('Toggle navigation'); ?></span> <span class="icon-bar"></span> <span class="icon-bar"></span> <span class="icon-bar"></span> </button>
            </div>
            <!-- toggle navigation end -->
            <!-- main menu -->
            <div class="col-md-8 no-padding-right accordion-menu text-right">
                <div class="navbar-collapse collapse">
                  <?php if(module_exists('tb_megamenu')) {
                      print theme('tb_megamenu', array('menu_name' => $menu));
                    }
                    else {
                      $main_menu_tree = module_exists('i18n_menu') ? i18n_menu_translated_tree($menu) : menu_tree($menu);
                      print drupal_render($main_menu_tree);
                    }
                  ?>
                </div>
            </div>
            <!-- end main menu -->
        </div>
    </div>
</nav>
</div>