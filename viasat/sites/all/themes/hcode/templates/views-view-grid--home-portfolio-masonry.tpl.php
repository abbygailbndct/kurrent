<?php
  $columns = isset($view->style_plugin->options['columns']) ? $view->style_plugin->options['columns'] : 4;
?>
<div class="row no-padding"> 
  <div class="grid-gallery overflow-hidden" >
    <div class="tab-content no-margin-top">
      <ul class="masonry-items portfolio-items col-4 grid">
        <?php foreach ($rows as $row_number => $columns): ?>
          <?php foreach ($columns as $column_number => $item): ?>
            <?php print $item; ?>
          <?php endforeach; ?>
        <?php endforeach; ?>
      </ul>
    </div>
  </div>
</div>