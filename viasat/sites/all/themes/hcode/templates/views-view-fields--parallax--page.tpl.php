<?php

$node_link = _views_field($fields, 'view_node');
$image = _get_node_field($row, 'field_field_image');
?>

<section class="parallax-portfolio no-padding" style="background-image:url('<?php print file_create_url($image[0]['raw']['uri']); ?>');">
  <?php print str_replace('view', '<div class="opacity-light bg-slider"></div>', $node_link); ?>
  <figure>
    <figcaption>
      <?php print _views_field($fields, 'body'); ?>
    </figcaption>
    <div class="look-project wow fadeInUp"><?php print str_replace('view', '+' . t('see project details'), $node_link); ?></div>
  </figure>
</section>