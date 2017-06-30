<?php
  $a_classes[] = $submenu ? ' mn-has-sub' : '';
  $angle_class = $item['link']['depth'] == 1 ? 'down' : 'right right';
  $href = strpos($item['link']['href'], "_anchor_") !== false ? str_replace("http://_anchor_", '#', $item['link']['href']) : url($item['link']['href'], $item['link']['localized_options']);
  $classes = 'panel';
  $classes .= strpos($item['link']['href'], "_anchor_") !== false ? ' local-scroll' : '';
  $classes .= $submenu ? ' dropdown' : '';
  $classes .= $item_config['alignsub'] ? ' align-menu-' . $item_config['alignsub'] : '';
  $title = (!empty($item_config['xicon']) ? '<i class="' . $item_config['xicon'] . '"></i> ' : '') . t($item['link']['link_title']);
?>
<?php if(!empty($item_config['caption'])) : ?>
  <li class="dropdown-header"><?php print t($item_config['caption']);?></li>
<?php endif;?>
<li class="<?php print $classes;?>" <?php print $attributes;?>>
  <?php if($submenu): ?>
    <a href="#collapse<?php print $item['link']['mlid']; ?>" class="dropdown-toggle collapsed" data-toggle="collapse" data-parent="#<?php print $menu_name; ?>" data-hover="dropdown">
      <?php print $title; ?> <i class="fa fa-angle-down"></i>
    </a>
  <?php else: ?>
    <a href="<?php print in_array($item['link']['href'], array('<nolink>')) ? "#" : $href; ?>">
      <?php print $title; ?>
    </a>
  <?php endif; ?>
  <?php print $submenu; ?>
</li>
