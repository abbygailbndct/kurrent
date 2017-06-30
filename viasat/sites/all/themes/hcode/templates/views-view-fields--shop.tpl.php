<?php
/**
* @file
* Default simple view template to all the fields as a row.
*
* - $view: The view in use.
* - $fields: an array of $field objects. Each one contains:
*   - $field->content: The output of the field.
*   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
*   - $field->class: The safe class id to use.
*   - $field->handler: The Views field handler object controlling this field. Do not use
*     var_export to dump this object, as it can't handle the recursion.
*   - $field->inline: Whether or not the field should be inline.
*   - $field->inline_html: either div or span based on the above flag.
*   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
*   - $field->wrapper_suffix: The closing tag for the wrapper.
*   - $field->separator: an optional separator that may appear before a field.
*   - $field->label: The wrap label text to use.
*   - $field->label_html: The full HTML of the label to use including
*     configured element type.
* - $row: The raw result object from the query, with all data it fetched.
*
* @ingroup views_templates
*/
global $flag_short_display;
$nid = _views_field($fields, 'nid');
?>
<div class="home-product text-center position-relative overflow-hidden margin-ten no-margin-top">
  <a href="<?php print _views_field($fields, 'path'); ?>"><?php print _views_field($fields, 'field_images'); ?></a>
  <span class="product-name text-uppercase"><?php print _views_field($fields, 'title'); ?></span>
  <span class="price black-text"><del><?php print _views_field($fields, 'field_old_price'); ?></del><?php print _views_field($fields, 'commerce_price'); ?></span>
  <?php print _views_field($fields, 'field_sale_text'); ?>
  <div class="quick-buy">
    <div class="product-share">
      <?php print _views_field($fields, 'add_to_cart_form'); ?>
      <?php $flag_short_display = 1; print flag_create_link('wishlist', $nid); ?>
      <?php print flag_create_link('compare', $nid); $flag_short_display = 0; ?>
      <a href="#" class="highlight-button-dark btn btn-small no-margin-right quick-buy-btn" title="<?php print t('Add to Cart'); ?>"><i class="fa fa-shopping-cart"></i></a>
    </div>
  </div>
  <?php _print_views_fields($fields); ?>
</div>