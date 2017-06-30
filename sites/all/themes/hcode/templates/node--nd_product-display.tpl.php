<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
$comments_array = isset($content['comments']['comments']) ? array_filter($content['comments']['comments'], '_count_comments') : array();
hide($content['body']); hide($content['comments']); hide($content['links']); hide($content['links']['comment']); hide($content['field_description']);

$comment_form = isset($content['comments']['comment_form']) ? $content['comments']['comment_form'] : '';
unset($content['comments']['comment_form']);
unset($content['group_bootstrap_tabs']['group_reviews']['product:status']);
$comments = '<div class = "row">
  <div class = "col-md-6 col-sm-12 review-main">' . render($content['comments']) .'</div>
  <div class = "col-md-5 col-sm-12 col-md-offset-1 blog-single-full-width-form sm-margin-top-seven">'  . render($comment_form) . '</div>
</div>';
$content['group_bootstrap_tabs']['group_reviews']['comments']['#markup'] = $comments;
$content['group_bootstrap_tabs']['group_reviews']['#group']->children[] = 'comments';
//dpm($content);
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <section>
    <div <?php print $content_attributes; ?> class="row">
      <!-- product images -->
      <div class="col-md-6 col-sm-12">
        <?php print render($content['product:field_images']); ?>
      </div>
      <!-- end product images -->
      <div class="col-md-5 col-sm-12 col-md-offset-1">
          <!-- product rating -->
          <div class="rating margin-five no-margin-top">
            <?php print render($content['field_rating']); ?>
            <span class="rating-text text-uppercase"><?php print count($comments_array) . ' ' . t('Reviews'); ?></span>
            <span class="rating-text text-uppercase pull-right"><?php print render($content['product:sku']); ?></span>
          </div>
          <!-- end product rating -->
          <!-- product name -->
          <?php print render($title_prefix); ?>
          <?php if ($title): ?>
            <span class="product-name-details text-uppercase font-weight-600 letter-spacing-2 black-text"><?php print $title; ?></span>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <!-- end product name -->
          <!-- product stock -->
          <?php if (isset($content['product:field_stock_status'])): ?>
            <p class="text-uppercase letter-spacing-2 margin-two"><?php print render($content['product:field_stock_status']); ?></p>
          <?php endif; ?>
          <!-- end product stock -->
          <div class="separator-line bg-black no-margin-lr margin-five"></div>
          <!-- product short description -->
          <?php print render($content['product:field_short_description']); ?>
          <!-- end product short description -->
          <span class="price black-text title-small"><del><?php print strip_tags(render($content['product:field_old_price'])); ?></del><?php print strip_tags(render($content['product:commerce_price'])); ?></span>
          <?php print render($content['field_products']); ?>
          <div class="col-lg-4 col-md-5 col-sm-3 no-padding-left pt5">
            <?php  print render($content['flag_wishlist']); ?>
          </div>
          <div class="col-md-8 col-sm-9  no-padding">
             <?php print render($content['social_share']); ?>
          </div>
      </div>
    </div>
  </section>

  <section class="border-top">
    <div class="container">
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        print render($content);
      ?>
    </div>
  </section>

<?php if (!empty($content['links'])): ?>
  <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
  <div class="clearfix"></div>
<?php endif; ?>