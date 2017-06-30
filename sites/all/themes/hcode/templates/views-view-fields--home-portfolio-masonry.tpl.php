<li class="portfolio-item" data-top-bottom="transform: translateY(-75px);" data-bottom-top="transform: translateY(150px);">
  <figure>
    <div class="gallery-img">
      <?php print _views_field($fields, 'field_image'); ?>
    </div>
    <figcaption>
      <h3>
        <?php print _views_field($fields, 'title'); ?>
      </h3>
      <p><?php print _views_field($fields, 'field_category'); ?></p>
    </figcaption>
  </figure>
</li>