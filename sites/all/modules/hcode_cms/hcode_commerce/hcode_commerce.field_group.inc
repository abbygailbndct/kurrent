<?php
/**
 * @file
 * hcode_commerce.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hcode_commerce_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bootstrap_tabs|node|nd_product_display|default';
  $field_group->group_name = 'group_bootstrap_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nd_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'DATA',
    'weight' => '4',
    'children' => array(
      0 => 'group_details',
      1 => 'group_washing_instructions',
      2 => 'group_sizing',
      3 => 'group_reviews',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav',
    'format_settings' => array(
      'label' => 'DATA',
      'instance_settings' => array(
        'bootstrap_nav_type' => 'tabs',
        'bootstrap_stacked' => '0',
        'bootstrap_orientation' => '0',
        'classes' => 'group-bootstrap-tabs field-group-bootstrap_fieldgroup_nav',
      ),
    ),
  );
  $export['group_bootstrap_tabs|node|nd_product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|nd_product_display|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nd_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bootstrap_tabs';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_details',
    ),
    'format_type' => 'bootstrap_fieldgroup_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-details field-group-bootstrap_fieldgroup_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details|node|nd_product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sizing_col_1|node|nd_product_display|default';
  $field_group->group_name = 'group_sizing_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nd_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sizing_row';
  $field_group->data = array(
    'label' => 'Sizing Col 1',
    'weight' => '13',
    'children' => array(
      0 => 'field_weight',
      1 => 'field_dimensions',
      2 => 'field_size',
      3 => 'field_color',
      4 => 'field_guarantee',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Sizing Col 1',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '0',
        'bootstrap_grid_col_sm' => '0',
        'bootstrap_grid_col_md' => '6',
        'bootstrap_grid_col_lg' => '0',
        'classes' => 'group-sizing-col-1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_sizing_col_1|node|nd_product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sizing_col_2|node|nd_product_display|default';
  $field_group->group_name = 'group_sizing_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nd_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sizing_row';
  $field_group->data = array(
    'label' => 'Sizing Col 2',
    'weight' => '14',
    'children' => array(
      0 => 'field_sizing_instructions',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Sizing Col 2',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '0',
        'bootstrap_grid_col_sm' => '0',
        'bootstrap_grid_col_md' => '6',
        'bootstrap_grid_col_lg' => '0',
        'classes' => 'group-sizing-col-2 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_sizing_col_2|node|nd_product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sizing_row|node|nd_product_display|default';
  $field_group->group_name = 'group_sizing_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nd_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_sizing';
  $field_group->data = array(
    'label' => 'Sizing Row',
    'weight' => '5',
    'children' => array(
      0 => 'group_sizing_col_1',
      1 => 'group_sizing_col_2',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-sizing-row field-group-bootstrap_grid_row',
        'show_heading' => 0,
        'heading_position' => 0,
        'label_element' => 'h3',
        'description_element' => 'p',
        'description' => '',
        'panelize' => 0,
        'bootstrap_grid_col_xs' => '',
        'bootstrap_grid_col_sm' => '',
        'bootstrap_grid_col_md' => '',
        'bootstrap_grid_col_lg' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sizing_row|node|nd_product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_washing_col_1|node|nd_product_display|default';
  $field_group->group_name = 'group_washing_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nd_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_washing_row';
  $field_group->data = array(
    'label' => 'Washing Col 1',
    'weight' => '7',
    'children' => array(
      0 => 'field_washing_type',
      1 => 'field_fabric',
      2 => 'field_sleeves',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Washing Col 1',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '0',
        'bootstrap_grid_col_sm' => '0',
        'bootstrap_grid_col_md' => '3',
        'bootstrap_grid_col_lg' => '3',
        'classes' => 'group-washing-col-1 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_washing_col_1|node|nd_product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_washing_col_2|node|nd_product_display|default';
  $field_group->group_name = 'group_washing_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nd_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_washing_row';
  $field_group->data = array(
    'label' => 'Washing Col 2',
    'weight' => '9',
    'children' => array(
      0 => 'field_neck',
      1 => 'field_fit',
      2 => 'field_length',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Washing Col 2',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '0',
        'bootstrap_grid_col_sm' => '0',
        'bootstrap_grid_col_md' => '3',
        'bootstrap_grid_col_lg' => '3',
        'classes' => 'group-washing-col-2 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_washing_col_2|node|nd_product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_washing_col_3|node|nd_product_display|default';
  $field_group->group_name = 'group_washing_col_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nd_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_washing_row';
  $field_group->data = array(
    'label' => 'Washing Col 3',
    'weight' => '10',
    'children' => array(
      0 => 'field_washing_instructions',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Washing Col 3',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '0',
        'bootstrap_grid_col_sm' => '0',
        'bootstrap_grid_col_md' => '6',
        'bootstrap_grid_col_lg' => '0',
        'classes' => 'group-washing-col-3 field-group-bootstrap_grid_col',
      ),
    ),
  );
  $export['group_washing_col_3|node|nd_product_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_washing_row|node|nd_product_display|default';
  $field_group->group_name = 'group_washing_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nd_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_washing_instructions';
  $field_group->data = array(
    'label' => 'Washing Row',
    'weight' => '5',
    'children' => array(
      0 => 'group_washing_col_2',
      1 => 'group_washing_col_1',
      2 => 'group_washing_col_3',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-washing-row field-group-bootstrap_grid_row',
        'show_heading' => 0,
        'heading_position' => 0,
        'label_element' => 'h3',
        'description_element' => 'p',
        'description' => '',
        'panelize' => 0,
        'bootstrap_grid_col_xs' => '',
        'bootstrap_grid_col_sm' => '',
        'bootstrap_grid_col_md' => '',
        'bootstrap_grid_col_lg' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_washing_row|node|nd_product_display|default'] = $field_group;

  return $export;
}
