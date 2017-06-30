<?php
// Match Column numbers to Bootsrap class
$columns_classes = array(1 => 12, 2 => 6, 3 => 4, 4 => 3, 6 => 2, 12 => 1);
$bootsrap_class = isset($columns_classes[$view->style_plugin->options['columns']]) ? $columns_classes[$view->style_plugin->options['columns']] : 3;
$row_style_class = 'blog-' . $view->style_plugin->options['columns'] . 'col';
?>
<div class = "row <?php if (isset($row_classes[0])) { print $row_style_class . ' ' . $row_classes[0]; } else { print $row_style_class; } ?>" >
  <?php foreach ($rows as $row_number => $columns): ?>
    <?php foreach ($columns as $column_number => $item): ?>
      <div class = "col-md-<?php print $bootsrap_class; ?><?php if ($column_classes[$row_number][$column_number]) { print ' ' . $column_classes[$row_number][$column_number];  } ?>" data-wow-duration="<?php print (300 * ($column_number + 1)) . 'ms' ?>">
        <?php print $item; ?>
      </div>
    <?php endforeach; ?>
  <?php endforeach; ?>
</div>