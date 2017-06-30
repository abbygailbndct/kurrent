<?php
$columns_classes = array(1 => 12, 2 => 6, 3 => 4, 4 => 3, 6 => 2, 12 => 1);
$bootsrap_class = isset($columns_classes[$view->style_plugin->options['columns']]) ? $columns_classes[$view->style_plugin->options['columns']] : 3;
?>

<div class = "row lightbox-gallery" >
  <?php foreach ($rows as $row_number => $columns): ?>
    <?php foreach ($columns as $column_number => $item): ?>
      <div class = "col-md-<?php print $bootsrap_class; ?> col-sm-<?php print $bootsrap_class; ?> wow fadeIn" style="padding: 15px">
        <?php print $item; ?>
      </div>
    <?php endforeach; ?>
  <?php endforeach; ?>
</div>