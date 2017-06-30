<?php
$columns = isset($view->style_plugin->options['columns']) ? $view->style_plugin->options['columns'] : 3;
global $projects_categories;
$projects_categories = array_unique($projects_categories);
$class = isset($column_classes[0][0]) ? $column_classes[0][0] : '';
?>
<div class="<?php print $class; ?>">
  <div class="col-md-12 text-center">
    <div class="text-center">
      <?php if(count($view->result) > 4 && !empty($projects_categories)): ?>
        <ul class="portfolio-filter nav nav-tabs nav-tabs-light wow fadeInUp">
          <li class="nav active"><a href="#" class="filter active" data-filter="*"><?php print t('All'); ?></a></li>
          <?php  foreach($projects_categories as $category) { ?>
            <li class="nav"><a href="#" data-filter=".<?php print $category; ?>"><?php print $category; ?></a></li>
          <?php } ?>
        </ul>
      <?php endif; ?>
    </div>
  </div>
  
  <div class="col-md-12 grid-gallery overflow-hidden no-padding" >
    <div class="tab-content">
      <ul class="grid masonry-items">
        <?php foreach ($rows as $row_number => $columns): ?>
          <?php foreach ($columns as $column_number => $item): ?>
            <?php print $item; ?>
          <?php endforeach; ?>
        <?php endforeach; ?>
      </ul>
    </div>
  </div>
</div>