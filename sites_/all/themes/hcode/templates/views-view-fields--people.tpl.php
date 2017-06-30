<div class="text-center team-member position-relative wow fadeInUp" data-wow-duration="300ms">
    <?php print _views_field($fields, 'field_image'); ?>
    <figure class="position-relative bg-white">
        <span class="team-name text-uppercase black-text letter-spacing-2 display-block font-weight-600"><?php print _views_field($fields, 'title'); ?></span>
        <span class="team-post text-uppercase letter-spacing-2 display-block"><?php print _views_field($fields, 'field_position'); ?></span>
        <?php print _views_field($fields, 'field_social_links'); ?>
    </figure>
    <div class="team-details">
        <h5 class="team-headline white-text text-uppercase font-weight-600"><?php print _views_field($fields, 'field_slogan'); ?></h5>
        <p class="width-70 center-col light-gray-text margin-five"><?php print _views_field($fields, 'body'); ?></p>
        <div class="separator-line-thick bg-white"></div>
    </div>
    <?php _print_views_fields($fields); ?>
</div>