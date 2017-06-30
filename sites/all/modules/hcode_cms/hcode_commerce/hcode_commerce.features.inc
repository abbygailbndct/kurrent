<?php
/**
 * @file
 * hcode_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hcode_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hcode_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function hcode_commerce_flag_default_flags() {
  $flags = array();
  // Exported flag: "Compare".
  $flags['compare'] = array(
    'entity_type' => 'node',
    'title' => 'Compare',
    'global' => 0,
    'types' => array(
      0 => 'nd_product_display',
    ),
    'flag_short' => 'Add to Compare List',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove from Compare List',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'hcode_commerce',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Wishlist".
  $flags['wishlist'] = array(
    'entity_type' => 'node',
    'title' => 'Wishlist',
    'global' => 0,
    'types' => array(
      0 => 'nd_product_display',
    ),
    'flag_short' => '<i class="fa fa-heart-o black-text"></i> Add to Wishlist',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '<i class="fa fa-heart-o black-text"></i> Remove from Wishlist',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'hcode_commerce',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function hcode_commerce_image_default_styles() {
  $styles = array();

  // Exported image style: product_120x120.
  $styles['product_120x120'] = array(
    'label' => 'Product (120x120)',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_140x117.
  $styles['product_140x117'] = array(
    'label' => 'Product (140x117)',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 117,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_354x295.
  $styles['product_354x295'] = array(
    'label' => 'Product (354x295)',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 354,
          'height' => 295,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_562x468.
  $styles['product_562x468'] = array(
    'label' => 'Product (562x468)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 562,
          'height' => 468,
          'retinafy' => 1,
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
function hcode_commerce_node_info() {
  $items = array(
    'nd_product_display' => array(
      'name' => t('Product Display'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
