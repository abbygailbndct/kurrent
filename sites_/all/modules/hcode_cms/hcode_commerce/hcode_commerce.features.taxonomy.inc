<?php
/**
 * @file
 * hcode_commerce.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hcode_commerce_taxonomy_default_vocabularies() {
  return array(
    'product_category' => array(
      'name' => 'Product Category',
      'machine_name' => 'product_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
