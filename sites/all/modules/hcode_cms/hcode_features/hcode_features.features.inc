<?php
/**
 * @file
 * hcode_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hcode_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hcode_features_image_default_styles() {
  $styles = array();

  // Exported image style: blog_368x230.
  $styles['blog_368x230'] = array(
    'label' => 'Blog (368x230)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 368,
          'height' => 230,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_600x450.
  $styles['blog_600x450'] = array(
    'label' => 'Blog (600x450)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 450,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_grid.
  $styles['blog_grid'] = array(
    'label' => 'Blog_Grid (561x420)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 561,
          'height' => 420,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_masonry.
  $styles['blog_masonry'] = array(
    'label' => 'Blog_Masonry',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 561,
          'height' => '',
          'upscale' => 0,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery.
  $styles['gallery'] = array(
    'label' => 'Gallery',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1153,
          'height' => 798,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: people_364x401.
  $styles['people_364x401'] = array(
    'label' => 'People (364x401)',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 364,
          'height' => 401,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_grid.
  $styles['portfolio_grid'] = array(
    'label' => 'Portfolio_Grid&Wide',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1048,
          'height' => 655,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_masonry.
  $styles['portfolio_masonry'] = array(
    'label' => 'Portfolio_Masonry',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 953,
          'height' => '',
          'upscale' => 0,
          'retinafy' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hcode_features_node_info() {
  $items = array(
    'nd_blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nd_gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nd_people' => array(
      'name' => t('People'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nd_portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
