<?php
global $projects_categories;
$category = _views_field($fields, 'field_category');
$projects_categories[] = $category;
$images = _get_node_field($row, 'field_field_images');
$title_image = _views_field($fields, 'field_image');
$node_link = _views_field($fields, 'view_node');
$img_href = '';
if (isset($images[0])) {
  $i = 0;
  foreach ($images as $image) {
    $path = $image['raw']['uri'];
    if ($i == 0) {
      $title = '<a href="' . file_create_url($path) . '">' . $title_image . '</a>';
    }
    else {
      $img_href .= '<a href="' .file_create_url($path) . '"></a>';
    }
    $i++;
  }
  $lightbox_class = ' lightbox-gallery';
}
else {
  $title = str_replace('view', $title_image, $node_link);
  $lightbox_class = '';
}
?>

<li class="<?php print $category . $lightbox_class; ?>">
  <figure>
    <div class="gallery-img"><?php print $title . $img_href; ?></div>
    <figcaption>
      <h3><?php print _views_field($fields, 'title'); ?></h3>
      <p><?php print $category; ?></p>
    </figcaption>
  </figure>
</li>