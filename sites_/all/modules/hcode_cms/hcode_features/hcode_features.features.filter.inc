<?php
/**
 * @file
 * hcode_features.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function hcode_features_filter_default_formats() {
  $formats = array();

  // Exported format: Dynamic Shortcodes.
  $formats['dynamic_shortcodes'] = array(
    'format' => 'dynamic_shortcodes',
    'name' => 'Dynamic Shortcodes',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'shortcode_dynamic' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'nd_menu' => 1,
          'nd_container' => 1,
          'nd_div' => 1,
          'row' => 1,
          'col' => 1,
          'nd_view' => 1,
          'nd_block' => 1,
          'nd_node' => 1,
          'html' => 1,
          'nd_title' => 1,
          'bg' => 1,
          'feature' => 1,
          'accordions' => 1,
          'accordion' => 1,
          'button' => 1,
          'progress_bar_box' => 1,
          'progress_bar' => 1,
          'pricing_box' => 1,
          'pricing_item' => 1,
          'hr' => 1,
          'icon' => 1,
          'nd_message' => 1,
          'slider' => 1,
          'slider_item' => 1,
          'nd_quote' => 1,
          'nd_image' => 1,
          'nd_tabs' => 1,
          'nd_tab' => 1,
          'drop_caps' => 1,
          'deviders_header' => 1,
          'counter' => 1,
          'nd_video' => 1,
          'header' => 1,
        ),
      ),
    ),
  );

  // Exported format: HTML.
  $formats['html'] = array(
    'format' => 'html',
    'name' => 'HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(),
  );

  // Exported format: Shortcodes.
  $formats['shortcodes'] = array(
    'format' => 'shortcodes',
    'name' => 'Shortcodes',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'shortcode' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'nd_menu' => 0,
          'nd_container' => 1,
          'nd_div' => 1,
          'row' => 1,
          'col' => 1,
          'nd_view' => 0,
          'nd_block' => 0,
          'nd_node' => 0,
          'html' => 1,
          'nd_title' => 1,
          'bg' => 1,
          'feature' => 1,
          'accordions' => 1,
          'accordion' => 1,
          'button' => 1,
          'progress_bar_box' => 1,
          'progress_bar' => 1,
          'pricing_box' => 1,
          'pricing_item' => 1,
          'hr' => 1,
          'icon' => 1,
          'nd_message' => 1,
          'slider' => 1,
          'slider_item' => 1,
          'nd_quote' => 1,
          'nd_image' => 1,
          'nd_tabs' => 1,
          'nd_tab' => 1,
          'drop_caps' => 1,
          'deviders_header' => 1,
          'counter' => 1,
          'nd_video' => 1,
          'header' => 1,
        ),
      ),
    ),
  );

  return $formats;
}
