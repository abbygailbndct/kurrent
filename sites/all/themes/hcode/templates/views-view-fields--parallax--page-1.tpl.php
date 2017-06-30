<?php
$image = _get_node_field($row, 'field_field_image');
?>

<section class="portfolio-short-description no-padding-bottom">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <div class="portfolio-short-description-bg pull-left" style="background-image:url('<?php print file_create_url($image[0]['raw']['uri']); ?>');">
          <figure class="pull-right wow fadeInRight">
            <figcaption>
              <?php print _views_field($fields, 'body'); ?>
              <?php print _views_field($fields, 'view_node'); ?>
            </figcaption>
          </figure>
        </div>
      </div>
    </div>
  </div>
</section>