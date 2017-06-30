<div class="col-md-2 col-sm-2 col-xs-5 clearfix text-center no-padding-right xs-padding-right">
  <!-- post avtar image -->
  <div class="avtar text-left">
    <a href="#">
      <?php print _views_field($fields, 'picture'); ?>
    </a>
  </div>
  <!-- end post avtar image -->
  <!-- post by -->
  <div class="blog-date-right no-padding-bottom">
    <?php print _views_field($fields, 'created'); ?>
  </div>
  <div class="blog-date-right"><?php print t('Posted by'); ?> 
    <a href="#">
      <?php print _views_field($fields, 'name'); ?>
    </a>
  </div>
  <!-- end post by -->
  <div class="separator-line bg-black no-margin-lr no-margin xs-margin-bottom-ten"></div>
</div>
<div class="col-md-10 col-sm-10 col-xs-12 no-padding-left xs-padding-left">
  <div class="blog-number bg-white black-text text-center"><?php print sprintf('%02d',$view->row_index+1); ?></div>
  <!-- post image -->
  <div class="blog-image">
    <a href="#">
      <?php print _views_field($fields, 'field_image'); ?>
    </a>
  </div>
  <!-- end post image -->
  <div class="blog-details">
    <div class="blog-date no-padding-top"><a href="#"><?php print _views_field($fields, 'field_tags'); ?></a> </div>
    <div class="blog-title">
      <?php print _views_field($fields, 'title'); ?>
    </div>
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
        <i class="fa fa-comment-o"></i><?php print _views_field($fields, 'comment_count') . t(' comment(s)'); ?>
      </a>
    </div>
    <div class="separator-line bg-black no-margin-lr margin-four"></div>
    <div><?php print _views_field($fields, 'body'); ?></div>
    <?php print _views_field($fields, 'view_node'); ?>
  </div>
</div>
<?php _print_views_fields($fields); ?>