<?php
/**
 * @file
 * hcode_blocks.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function hcode_blocks_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 1,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 13,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 14,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 15,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 16,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 17,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 18,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 19,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 20,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 21,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 22,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 23,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 24,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 25,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 26,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 27,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 28,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 30,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 31,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 32,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 33,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 34,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 35,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 36,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 37,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 38,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 39,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 40,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 41,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -42,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 42,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 43,
  'module' => 'commerce_cart',
  'delta' => 'cart',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'checkout*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 44,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 45,
  'module' => 'commerce_cart',
  'delta' => 'cart',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'checkout*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 46,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 47,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 48,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 49,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 50,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 51,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 52,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 5,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 53,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 54,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 55,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 56,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 57,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 58,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 59,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 60,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 61,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 62,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 63,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 64,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 65,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 66,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-white',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 67,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 68,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-white',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 69,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -33,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-gray
content/blog-grid-full-width
content/blog-grid-4-columns
content/blog-grid-3-columns
content/blog-grid-2-columns
content/masonry-full-width
content/masonry-4-columns
content/masonry-3-columns
content/masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 70,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -34,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-dark-gray',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 71,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -38,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-black',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 72,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -31,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 73,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -25,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-large
content/portfolio-*
content/features-box
content/accordions
content/progress-bar
content/buttons
content/grid
content/et-line-icons
ontent/font-awesome-icons
content/alert-massage
content/tabs
content/typography
content/video-and-sound
content/counter-and-skills',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 74,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-small-white
content/about-company
content/team-members
content/testimonials
content/our-clients
content/careers
content/contact-us
content/services
content/faqs
user*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 75,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -22,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-small-gray
content/full-width
content/full-width-wide
one_column_gallery
two_columns_gallery
three_columns_gallery
four_columns_gallery
six_columns_gallery
cart
checkout*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 76,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -23,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-small-dark-gray',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 77,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -24,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-small-black',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 78,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -26,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-center-align',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 79,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 80,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 81,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-gray
content/blog-grid-full-width
content/blog-grid-4-columns
content/blog-grid-3-columns
content/blog-grid-2-columns
content/masonry-full-width
content/masonry-4-columns
content/masonry-3-columns
content/masonry-2-columns',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 82,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 83,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 84,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-large
content/portfolio-*
content/features-box
content/accordions
content/progress-bar
content/buttons
content/grid
content/et-line-icons
ontent/font-awesome-icons
content/alert-massage
content/tabs
content/typography
content/video-and-sound
content/counter-and-skills',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 85,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-small-black',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 86,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 87,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-small-gray
content/full-width
content/full-width-wide
one_column_gallery
two_columns_gallery
three_columns_gallery
four_columns_gallery
six_columns_gallery
cart
checkout*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 88,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-title-small-white
content/about-company
content/team-members
content/testimonials
content/our-clients
content/careers
content/contact-us
content/services
content/faqs
user*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 89,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -36,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/bootstrap-slider',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 90,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -27,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/slider-owl
content/light-version
content/dark-version',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 91,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 92,
  'module' => 'views',
  'delta' => 'blog_grid-block_full_width',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 93,
  'module' => 'views',
  'delta' => 'blog_grid-block_1',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 94,
  'module' => 'views',
  'delta' => 'blog_grid-block_2',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 95,
  'module' => 'views',
  'delta' => 'blog_grid-block_3',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 96,
  'module' => 'views',
  'delta' => 'blog_grid-block_4',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 97,
  'module' => 'views',
  'delta' => 'blog_masonry-block_1',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 98,
  'module' => 'views',
  'delta' => 'blog_masonry-block_2',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 99,
  'module' => 'views',
  'delta' => 'blog_masonry-block_3',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 100,
  'module' => 'views',
  'delta' => 'blog_masonry-block_4',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 101,
  'module' => 'views',
  'delta' => 'blog_default-block',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 102,
  'module' => 'views',
  'delta' => 'blog_sidebar-block',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 103,
  'module' => 'views',
  'delta' => 'categories-block',
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -40,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-left-sidebar
content/page-right-sidebar
content/page-both-sidebar
content/blog-right-sidebar
content/blog-left-sidebar',
  'title' => 'MORE ABOUT COMPANY',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 104,
  'module' => 'views',
  'delta' => 'portfolio_grid-block',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 105,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_1',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 106,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_2',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 107,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_3',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 108,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_4',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 109,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_5',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 110,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_6',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 111,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_7',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 112,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_8',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 113,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_9',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 114,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_10',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 115,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_11',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 116,
  'module' => 'views',
  'delta' => 'portfolio_masonry-block',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 117,
  'module' => 'views',
  'delta' => 'portfolio_masonry-block_1',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 118,
  'module' => 'views',
  'delta' => 'portfolio_masonry-block_2',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 119,
  'module' => 'views',
  'delta' => 'portfolio_masonry-block_3',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 120,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -28,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'short_description',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 121,
  'module' => 'views',
  'delta' => 'portfolio_grid-block_12',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 122,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -37,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/blog-right-sidebar
content/blog-full-width',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 123,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -29,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/blog-left-sidebar
content/page-left-sidebar
content/page-right-sidebar',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 124,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -35,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-both-sidebar',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 125,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -32,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/home-page',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 126,
  'module' => 'views',
  'delta' => 'blog_grid_2-block_3',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 127,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -30,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'shop*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 128,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -43,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'node/165*
content/portfolio-*
content/dark-version',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 129,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -40,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/portfolio-*
node/165
node/165/fullscreen-video
node/165/halfscreen-video
node/165/text-rotator
node/165/fullwidth-image
node/165/gradient-with-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 130,
  'module' => 'views',
  'delta' => 'people-block',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 131,
  'module' => 'hcode_cms',
  'delta' => 'search_with_icon',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 4,
);
  $export['block'][] = array(
  'bid' => 132,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -38,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-left-sidebar
content/page-right-sidebar
content/page-both-sidebar
content/blog-right-sidebar
content/blog-left-sidebar',
  'title' => 'TEXT WIDGET',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 133,
  'module' => 'block',
  'delta' => 25,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -39,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-left-sidebar
content/page-right-sidebar
content/page-both-sidebar
content/blog-right-sidebar
content/blog-left-sidebar',
  'title' => 'HAPPY CLIENT SAY\'S',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 134,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -40,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-both-sidebar',
  'title' => 'TEXT WIDGET',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 135,
  'module' => 'block',
  'delta' => 27,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -41,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/page-both-sidebar',
  'title' => 'QUICK CONTACT',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 136,
  'module' => 'block',
  'delta' => 28,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -41,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/dark-version',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 137,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 138,
  'module' => 'tb_megamenu',
  'delta' => 'features',
  'theme' => 'hcode_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 139,
  'module' => 'block',
  'delta' => 29,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -19,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/165/background-slider',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 140,
  'module' => 'block',
  'delta' => 30,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => -39,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/165/background-slider',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 141,
  'module' => 'block',
  'delta' => 31,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/165/fullscreen-video',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 142,
  'module' => 'block',
  'delta' => 32,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/165/halfscreen-video',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 143,
  'module' => 'block',
  'delta' => 33,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/165/text-rotator',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 144,
  'module' => 'block',
  'delta' => 34,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/165/fullwidth-image',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 145,
  'module' => 'block',
  'delta' => 35,
  'theme' => 'hcode_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/165/gradient-with-image',
  'title' => '',
  'cache' => -1,
);
  $export['block_custom'][] = array(
  'bid' => 1,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" stick_fixed="0" search="1" cart="1" language="0" different_values="0" fid="1" fid_sticky="1"]
[/nd_menu]
 ',
  'info' => 'Menu Homepage',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 2,
  'body' => '[nd_div extra_classes="footer-top" animation="fadeIn" style_background_color="ffffff" different_values="0" vertical_align="0"]
[nd_container different_values="0"]
[row style_margin_top="46" style_margin_bottom="46" different_values="0"]
[col tablet="4" desktop="4" text_align="center" different_values="0"]
[icon type="i-plain" extra_classes="black-text" link="#" icon="icon-phone" icon_style="default" icon_size="small-icon" boxed_size="i-large-box" color="bg-orange" circled="0" different_values="0"]
[/icon]
[nd_title title="123-456-7890" size="h6" font_color="black-text" strong="0" no_transform="0" style_margin_top="7" style_margin_bottom="0" different_values="0"]
[/nd_title]
[/col]
[col tablet="4" desktop="4" text_align="center" different_values="0"]
[icon type="i-plain" extra_classes="black-text" link="#" icon="icon-map-pin" icon_style="default" icon_size="small-icon" boxed_size="i-large-box" color="bg-orange" circled="0" different_values="0"]
[/icon]
[nd_title title="Victoria, United States" size="h6" font_color="black-text" strong="0" no_transform="0" style_margin_top="7" style_margin_bottom="0" different_values="0"]
[/nd_title]
[/col]
[col tablet="4" desktop="4" text_align="center" different_values="0"]
[icon type="i-plain" extra_classes="black-text" link="#" icon="icon-envelope" icon_style="default" icon_size="small-icon" boxed_size="i-large-box" color="bg-orange" circled="0" different_values="0"]
[/icon]
[html different_values="0" font_weight="normal" format="plain_text"]<h6 class="margin-two no-margin-bottom"><a class="black-text" href="mailto:no-reply@domain.com">no-reply@domain.com</a></h6>[/html]
[/col]
[/row]
[/nd_container]
[/nd_div]
[nd_container style_margin_top="80" style_margin_bottom="45" different_values="0"]
[row different_values="0"]
[col tablet="3" desktop="3" different_values="0"]
[nd_title title="About Us" size="h5" font_color="black-text" strong="0" no_transform="0" different_values="0"]
[/nd_title]
[html format="html" font_weight="normal" style_margin_bottom="20" different_values="0"]<p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s.</p>[/html]
[/col]
[col tablet="3" desktop="2" different_values="0" extra_classes="col-md-offset-3"]
[nd_title title="Company" size="h5" font_color="black-text" strong="0" no_transform="0" different_values="0"]
[/nd_title]
[html format="plain_text" font_weight="normal" style_margin_bottom="20" different_values="0"]<ul><li><a href="about-us.html">About Company</a></li><li><a href="about-us.html">What We Do</a></li><li><a href="about-us.html">What We Think</a></li><li><a href="careers.html">Careers</a></li></ul>[/html]
[/col]
[col tablet="3" desktop="2" different_values="0"]
[nd_title title="Services" size="h5" font_color="black-text" strong="0" no_transform="0" different_values="0"]
[/nd_title]
[html format="plain_text" font_weight="normal" style_margin_bottom="20" different_values="0"]<ul><li><a href="services.html">Web Development</a></li><li><a href="services.html">Graphic Design</a></li><li><a href="services.html">Copywriting</a></li><li><a href="services.html">Online Marketing</a></li></ul>[/html]
[/col]
[col tablet="3" desktop="2" different_values="0"]
[nd_title title="Introduction" size="h5" font_color="black-text" strong="0" no_transform="0" different_values="0"]
[/nd_title]
[html format="plain_text" font_weight="normal" style_margin_bottom="20" different_values="0"]<ul><li><a href="team-members.html">Team Members</a></li><li><a href="testimonials.html">Testimonials</a></li><li><a href="our-clients.html">Our Clients</a></li><li><a href="careers.html">Careers With Us</a></li></ul>[/html]
[/col]
[/row]
[hr extra_classes="bg-mid-gray" style_margin_bottom="0" style_margin_top="34" different_values="0"]
[/hr]
[row different_values="0" style_padding_bottom="0" style_padding_top="46"]
[col different_values="0" desktop="6" tablet="12"]
[html different_values="0" font_weight="normal" format="plain_text"]<ul class="list-inline footer-link text-uppercase"><li><a href="about-us.html">About</a></li><li><a href="blog-masonry-3columns.html">Blog</a></li><li><a href="careers.html">Careers</a></li><li><a href="testimonials.html">Testimonials</a></li><li><a href="contact-us.html">Contact</a></li></ul>[/html]
[/col]
[col extra_classes="footer-social" text_align="right" different_values="0" desktop="6" tablet="12"]
[icon type="i-plain" different_values="0" link="https://www.facebook.com/" circled="0" color="bg-orange" boxed_size="i-large-box" icon_style="none" icon="fa fa-facebook"]
[/icon]
[icon type="i-plain" different_values="0" link="https://twitter.com/" circled="0" color="bg-orange" boxed_size="i-large-box" icon_style="none" icon="fa fa-twitter"]
[/icon]
[icon type="i-plain" different_values="0" link="https://plus.google.com" circled="0" color="bg-orange" boxed_size="i-large-box" icon_style="none" icon="fa fa-google-plus"]
[/icon]
[icon type="i-plain" different_values="0" link="https://dribbble.com/" circled="0" color="bg-orange" boxed_size="i-large-box" icon_style="none" icon="fa fa-dribbble"]
[/icon]
[icon type="i-plain" different_values="0" link="http://youtube.com" circled="0" color="bg-orange" boxed_size="i-large-box" icon_style="none" icon="fa fa-youtube"]
[/icon]
[icon type="i-plain" different_values="0" link="https://www.linkedin.com/" circled="0" color="bg-orange" boxed_size="i-large-box" icon_style="none" icon="fa fa-linkedin"]
[/icon]
[/col]
[/row]
[/nd_container]
[nd_div different_values="0" extra_classes="container-fluid bg-dark-gray footer-bottom" vertical_align="0"]
[nd_container different_values="0"]
[row different_values="0" style_padding_bottom="34" style_padding_top="34"]
[col different_values="0" desktop="6" tablet="6" phone="12"]
[html different_values="0" extra_style="text-transform: uppercase;letter-spacing: 1px !important;" font_weight="normal" format="html"]<p><span style="color:rgb(136, 136, 136); font-size:11px">© 2015 H-Code is proudly powered by NikaDevs.</span></p>[/html]
[/col]
[col extra_classes="footer-logo" different_values="0" desktop="6" tablet="6" phone="12" text_align="right"]
[nd_image different_values="0" link="/" fid="8"]
[/nd_image]
[/col]
[/row]
[/nd_container]
[/nd_div]
[html different_values="0" font_weight="normal" format="plain_text"]<a class="scrollToTop" href="javascript:;" style="display: inline;"><i class="fa fa-angle-up"></i></a>[/html]
 ',
  'info' => 'Footer block',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 3,
  'body' => '[header title="Page title white" different_values="0" description="Lorem Ipsum is simply dummy text of the printing." color="border-bottom-light border-top-light" header_type="white"]
[/header]
 ',
  'info' => 'White Page Header',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 4,
  'body' => '[header color="bg-gray" description="Lorem Ipsum is simply dummy text of the printing." different_values="0" header_type="gray"]
[/header]
 ',
  'info' => 'Gray Page Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 5,
  'body' => '[header color="bg-dark-gray" description="Lorem Ipsum is simply dummy text of the printing." different_values="0" title="Page title dark gray" header_type="dark-gray"]
[/header]
 ',
  'info' => 'Dark Gray Header',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 6,
  'body' => '[header color="bg-black" description="Lorem Ipsum is simply dummy text of the printing." different_values="0" title="Page title black" header_type="black"]
[/header]
 ',
  'info' => 'Black Title Header',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 7,
  'body' => '[header title="Page title with image" different_values="0" description="Lorem Ipsum is simply dummy text of the printing." color="parallax3 parallax-fix" fid="6" header_type="image"]
[/header]
 ',
  'info' => 'Image Header',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 8,
  'body' => '[header fid="7" different_values="0" description="Lorem Ipsum is simply dummy text of the printing." color="border-bottom-light border-top-light" header_type="large"]
[/header]
 ',
  'info' => 'Title Large Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 9,
  'body' => '[header different_values="0" description="Lorem Ipsum is simply dummy text of the printing." color="border-bottom-light border-top-light" header_type="small-white"]
[/header]
 ',
  'info' => 'Title Small White Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 10,
  'body' => '[header header_type="small-gray" color="border-bottom-light border-top-light" description="Lorem Ipsum is simply dummy text of the printing." different_values="0"]
[/header]
 ',
  'info' => 'Title Small Gray Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 11,
  'body' => '[header header_type="small-dark-gray" color="border-bottom-light border-top-light" description="Lorem Ipsum is simply dummy text of the printing." different_values="0" title="Page Title Small Dark Gray"]
[/header]
 ',
  'info' => 'Title Small Dark Gray Header',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 12,
  'body' => '[header header_type="small-black" color="border-bottom-light border-top-light" description="Lorem Ipsum is simply dummy text of the printing." different_values="0" title="Page Title Small Black"]
[/header]
 ',
  'info' => 'Title Small Black Header',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 13,
  'body' => '[header header_type="center" color="border-bottom-light border-top-light" description="Lorem Ipsum is simply dummy text of the printing." different_values="0" title="Page Title Center Align"]
[/header]
 ',
  'info' => 'Title Center Align Header',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 14,
  'body' => '[slider type="myCarousel" different_values="0"]
[slider_item different_values="0" subtitle="We believe in design, |{br|} strategy and web |{br|} technology" title="We believe hard work" fid="10" active="1"]
[/slider_item]
[slider_item different_values="0" subtitle="We believe in design, |{br|} strategy and web |{br|} technology" title="We believe hard work" fid="11" active="0"]
[/slider_item]
[slider_item different_values="0" subtitle="We believe in design, |{br|} strategy and web |{br|} technology" title="We believe hard work" fid="12" active="0"]
[/slider_item]
[/slider]
 ',
  'info' => 'Bootstrap slider',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 15,
  'body' => '[slider type="slider" different_values="0" slider_style="dark"]
[slider_item active="0" fid="12" subtitle="Change the world one |{br|} digital experience." different_values="0"]
[button btn_type="highlight-button-black-border" btn_size="btn-large" rounded="0" title="Go Innovation!" link="#features" bootstrap_btn="btn-primary" social_btn="fa fa-facebook" style_margin_right="20" style_margin_top="57" different_values="0"]
[/button]
[/slider_item]
[slider_item active="0" fid="13" subtitle="Change the world one |{br|} digital experience." different_values="0"]
[button btn_type="highlight-button-black-border" btn_size="btn-large" rounded="0" title="Go Innovation!" link="#features" bootstrap_btn="btn-primary" social_btn="fa fa-facebook" style_margin_right="20" style_margin_top="57" different_values="0"]
[/button]
[/slider_item]
[slider_item active="0" fid="15" subtitle="Change the world one |{br|} digital experience." different_values="0"]
[button btn_type="highlight-button-black-border" btn_size="btn-large" rounded="0" title="Go Innovation!" link="#features" bootstrap_btn="btn-primary" social_btn="fa fa-facebook" style_margin_right="20" style_margin_top="57" different_values="0"]
[/button]
[/slider_item]
[/slider]
 ',
  'info' => 'Slider OWL Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 16,
  'body' => '[slider type="slider" slider_style="white" different_values="0" no_prev_next="0"]
[slider_item active="0" fid="96" title="We believe in design, strategy and web technology" subtitle="We believe hard work" different_values="0"]
[/slider_item]
[slider_item active="0" fid="97" title="We believe in design, strategy and web technology" subtitle="We believe hard work" different_values="0"]
[/slider_item]
[slider_item active="0" fid="98" title="We believe in design, strategy and web technology" subtitle="We believe hard work" different_values="0"]
[/slider_item]
[/slider]
 ',
  'info' => 'Parallax Short Description',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 17,
  'body' => '[header header_type="large" fid="99" description="Lorem Ipsum is simply dummy text of the printing." different_values="0"]
[/header]
 ',
  'info' => 'Blog Right Sidebar Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 18,
  'body' => '[header different_values="0" description="Lorem Ipsum is simply dummy text of the printing." fid="100" header_type="large"]
[/header]
 ',
  'info' => 'Left Sidebar Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 19,
  'body' => '[header header_type="large" fid="132" description="Lorem Ipsum is simply dummy text of the printing." different_values="0"]
[/header]
 ',
  'info' => 'Both Sidebar Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 20,
  'body' => '[slider type="slider" different_values="0" no_prev_next="1" slider_style="square"]
[slider_item subtitle="we craft experiences that help brands" title="experiences" different_values="0" fid="146" active="0"]
[/slider_item]
[slider_item subtitle="we work hard - we play hard" title="Leadership" different_values="0" fid="147" active="0"]
[/slider_item]
[slider_item subtitle="We craft unique digital experiences" title="Expertise" different_values="0" fid="148" active="0"]
[/slider_item]
[/slider]
 ',
  'info' => 'Home Page Header',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 21,
  'body' => '[header different_values="0" description="SINCE 1982 BRAND" color="parallax3 parallax-fix" fid="168" header_type="image-big" opacity="bgopacity opacity40"]
[/header]
 ',
  'info' => 'Image Header Shop',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 22,
  'body' => '[nd_menu menu="main-menu" type="white" transparent="0" stick_fixed="0" search="1" cart="1" language="0" different_values="0" fid="1" fid_sticky="1"]
[/nd_menu]
 ',
  'info' => 'Menu Default',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 23,
  'body' => '[nd_menu menu="main-menu" type=" nav-white" transparent="0" stick_fixed="0" search="1" cart="1" language="0" different_values="0" fid="175" fid_sticky="1"]
[/nd_menu]
 ',
  'info' => 'Menu Transparent White Text',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 24,
  'body' => '[html format="html" font_weight="normal" different_values="0"]<p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s.</p>[/html]
 ',
  'info' => 'TEXT WIDGET',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 25,
  'body' => '[nd_quote author="ADARIO STRANGE - APPLE" text_color="black-text" different_values="0" type="testimonial-style2" style_margin_top="-20"]
[html format="html" font_weight="normal" different_values="0"]<p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley.</p>[/html]
[/nd_quote]
 ',
  'info' => 'HAPPY CLIENT SAY\'S',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 26,
  'body' => '[html format="html" font_weight="normal" different_values="0"]<p>Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s.</p>[/html]
 ',
  'info' => 'TEXT WIDGET SECOND',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 27,
  'body' => '[nd_node admin_url="node/166/edit" different_values="0"]
[/nd_node]
 ',
  'info' => 'QUICK CONTACT',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 28,
  'body' => '[nd_menu menu="main-menu" type=" nav-white nav-dark" transparent="0" stick_fixed="0" search="1" cart="1" language="0" different_values="0" fid="175" fid_sticky="175"]
[/nd_menu]
 ',
  'info' => 'Menu Dark',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 29,
  'body' => '[slider type="background" no_prev_next="0" slider_style="dark" different_values="0"]
[slider_item different_values="0" subtitle="We believe in design, |{br|} strategy and web |{br|} technology" title="We believe hard work" active="0"]
[slider type="carousel" slider_style="dark" no_prev_next="0" different_values="0"]
[slider_item active="0" fid="188" different_values="0"]
[/slider_item]
[slider_item active="0" fid="189" different_values="0"]
[/slider_item]
[slider_item active="0" fid="190" different_values="0"]
[/slider_item]
[/slider]
[/slider_item]
[/slider]
 ',
  'info' => 'Background Slider',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 30,
  'body' => '[nd_menu menu="main-menu" fid="1" fid_sticky="1" type=" nav-transp-dark" search="1" cart="1" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Menu Transparent Dark',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 31,
  'body' => '[bg background="1" different_values="0" video="1" no_parallax="0" fid="191" slider="0" options="background"]
[slider type="typography" title="WE" different_values="0" no_prev_next="0" slider_style="dark"]
[slider_item different_values="0" title="We believe hard work" active="1"]
[/slider_item]
[slider_item different_values="0" title="We believe in design" active="0"]
[/slider_item]
[slider_item different_values="0" title="We believe in strategy" active="0"]
[/slider_item]
[/slider]
[/bg]
 ',
  'info' => 'Header: FullScreen Video',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 32,
  'body' => '[bg different_values="0" background="1" video="1" no_parallax="0" fid="191" slider="0" options="default" extra_classes="video-half-screen"]
[/bg]
 ',
  'info' => 'Header: HalfScreen Video',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 33,
  'body' => '[bg slider="0" fid="192" no_parallax="0" video="0" background="0" style_padding_left="0" style_padding_right="0" style_padding_top="0" style_padding_bottom="0" extra_classes="full-screen scroll-to-down-white" different_values="0" options="default"]
[nd_div vertical_align="0" extra_classes="slider-overlay bg-slider" different_values="0"]
[/nd_div]
[nd_container extra_classes="full-screen position-relative" different_values="0"]
[slider type="typography_dd" slider_style="dark" no_prev_next="0" different_values="0"]
[slider_item active="1" title="Change the world one|{br/|}digital experience." different_values="0"]
[/slider_item]
[slider_item active="0" title="We believe in design,|{br/|} strategy and technology" different_values="0"]
[/slider_item]
[slider_item active="0" title="Change the world one|{br/|}digital experience." different_values="0"]
[/slider_item]
[/slider]
[nd_div style_margin_top="630" vertical_align="0" text_align="center" different_values="0"]
[button different_values="0" social_btn="fa fa-facebook" bootstrap_btn="btn-primary" link="#features" title="Go Innovation!" rounded="0" btn_size="btn-medium" btn_type="btn-small-white" extra_classes="inner-link"]
[/button]
[button different_values="0" social_btn="fa fa-facebook" bootstrap_btn="btn-primary" link="#features" title="Go Emotions!" rounded="0" btn_size="btn-medium" btn_type="btn-small-white" extra_classes="inner-link"]
[/button]
[/nd_div]
[/nd_container]
[/bg]
 ',
  'info' => 'Header: Text Rotator',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 34,
  'body' => '[bg different_values="0" options="default" video="0" no_parallax="0" fid="193" slider="0" style_padding_top="0" style_padding_bottom="0" extra_classes="scroll-to-down-white full-width-image owl-half-slider"]
[nd_div different_values="0" extra_classes="opacity-light bg-black" vertical_align="0"]
[/nd_div]
[nd_container different_values="0" extra_classes="position-relative"]
[nd_div different_values="0" text_align="center" extra_classes="slider-typography" vertical_align="0"]
[nd_div different_values="0" extra_classes="slider-text-middle-main" vertical_align="0"]
[nd_div different_values="0" animation="fadeInUp" extra_classes="slider-text-bottom" style_padding_right="15" style_padding_left="15" vertical_align="0"]
[html different_values="0" font_weight="normal" format="plain_text"]<span class="owl-subtitle white-text">We believe hard work</span>[/html]
[hr type="bg-yellow" different_values="0" style_margin_top="34" style_margin_bottom="34"]
[/hr]
[html different_values="0" style_margin_bottom="115" style_margin_top="0" font_weight="normal" format="plain_text"]<span class="owl-title white-text center-col">We believe in design, strategy and web technology.</span>[/html]
[/nd_div]
[/nd_div]
[/nd_div]
[/nd_container]
[/bg]
 ',
  'info' => 'Header: Full Width Image',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 35,
  'body' => '[bg options="default" different_values="0" extra_classes="full-screen" style_padding_bottom="0" style_padding_top="0" style_padding_right="0" style_padding_left="0" background="0" video="0" no_parallax="0" fid="194" slider="0"]
[nd_div different_values="0" extra_classes="opacity-light gradient-overlay-light" vertical_align="0"]
[/nd_div]
[nd_container different_values="0" extra_classes="full-screen position-relative"]
[slider type="typography_1f" different_values="0" no_prev_next="0" slider_style="dark"]
[slider_item different_values="0" title="Change the world one|{br/|}digital experience." active="0"]
[button extra_classes="inner-link" btn_type="btn-small-white" btn_size="btn-medium" rounded="0" title="Go Innovation!" link="#features" bootstrap_btn="btn-primary" social_btn="fa fa-facebook" different_values="0" style_margin_top="57" style_margin_bottom="20"]
[/button]
[button extra_classes="inner-link" btn_type="btn-small-white" btn_size="btn-medium" rounded="0" title="Go Emotions!" link="#features" bootstrap_btn="btn-primary" social_btn="fa fa-facebook" different_values="0" style_margin_top="57" style_margin_bottom="20"]
[/button]
[/slider_item]
[/slider]
[/nd_container]
[/bg]
 ',
  'info' => 'Header: Gradient With Image',
  'format' => 'shortcodes',
);
return $export;
}
