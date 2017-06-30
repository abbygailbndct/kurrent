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
?>

  <!-- post image -->
<div class="blog-image">
  <a href="<?php print _views_field($fields, 'path'); ?>">
    <?php print _views_field($fields, 'body'); ?>
  </a>
</div>
<!-- end post image -->
<div class="blog-details">
  <div class="blog-date"><?php print t('Posted by ') . _views_field($fields, 'name'); ?> | <?php print _views_field($fields, 'created'); ?> | <?php print _views_field($fields, 'field_tags'); ?> </div>
  <div class="blog-title"><?php print _views_field($fields, 'title'); ?></div>
  <div><?php print _views_field($fields, 'body_1'); ?></div>
  <div class="separator-line bg-black no-margin-lr margin-four"></div>
  <div>
    <a href="#" class="blog-like">
      <i class="fa fa-heart-o"></i>
      <?php print t('Likes'); ?>
    </a>
    <a href="#" class="blog-share">
      <i class="fa fa-share-alt"></i>
      <?php print t('Share'); ?>
    </a>
    <a href="#" class="comment">
      <i class="fa fa-comment-o"></i>
      <?php print _views_field($fields, 'comment_count') . t('comment(s)'); ?>
    </a>
  </div>
  <?php print _views_field($fields, 'view_node'); ?>
</div>
<?php _print_views_fields($fields); ?>