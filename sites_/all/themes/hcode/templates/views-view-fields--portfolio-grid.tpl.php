<?php
/*global $projects_categories;
$category = _views_field($fields, 'field_category');
$projects_categories[] = $category;*/

global $projects_categories;
$categories = array();  
if(isset($row->field_field_category) && !empty($row->field_field_category)) {
  foreach($row->field_field_category as $taxonomy) {
    $category = $taxonomy['raw']['taxonomy_term']->name;
    $category_id = $view->vid . '-' . $taxonomy['raw']['taxonomy_term']->tid;
    $projects_categories[$category_id] = $category;
    $categories[] = $category_id;
  }
}
?>

<li class="<?php print implode(' ', $categories); ?> lightbox-gallery">
  <figure>
    <div class="gallery-img"><?php print _views_field($fields, 'field_image'); ?></div>
    <figcaption>
      <h3><?php print _views_field($fields, 'title'); ?></h3>
      <p><?php print _views_field($fields, 'field_category'); ?></p>
    </figcaption>
  </figure>
  <?php _print_views_fields($fields); ?>
</li>