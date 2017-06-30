<?php

function _count_comments($val) {
  return isset($val['#comment']);
}

function _views_field(&$fields, $field) {
  if(isset($fields[$field]->content)) {
    $output = $fields[$field]->content;
    unset($fields[$field]);
    return $output;
  }
}

function _print_views_fields($fields, $exceptions = array()) {
  //global $one; if(!$one) { dpm($fields); $one = 1; }

  foreach ($fields as $field_name => $field) {
    if (!in_array($field_name, $exceptions)) {
      print $field->content;
    }
  }
}

function hcode_image_style($variables) {
  $variables['alt'] = empty($variables['alt']) ? 'Alt' : '';
  return theme_image_style($variables);
}

function hcode_image($variables) {
  $variables['alt'] = empty($variables['alt']) ? 'Alt' : '';
  return theme_image($variables);
}


/**
 * Implementation of hook_preprocess_html().
 */
function hcode_preprocess_html(&$variables) {
  drupal_add_css(drupal_get_path('theme', 'hcode_sub') . '/css/style-ie.css',
    array(
      'browsers' => array(
        'IE' => TRUE,
        '!IE' => FALSE,
      )
    )
  );

  $get_value = isset($_GET['skin']) ? $_GET['skin'] : '';
  if(!$get_value) {
    $args = arg();
    $get_value = array_pop($args);
  }
  $skins = array('default', 'blue', 'blue-gray', 'brown', 'cyan', 'green', 'green-light', 'indigo', 'orange', 'orange-deep', 'purple', 'red', 'yellow');  
  // Allow to override the skin by argument
  $skin = in_array($get_value, $skins) ? $get_value : theme_get_setting('skin');
  if($skin && $skin != 'default') {
    //drupal_add_css(drupal_get_path('theme', 'hcode') . '/css/colors/' . $skin . '.css', array('group' => CSS_THEME));
  }

  drupal_add_css(drupal_get_path('theme', 'hcode_sub') . '/css/custom.css', array('group' => CSS_THEME));
  if(theme_get_setting('retina')) {
    drupal_add_js(drupal_get_path('theme', 'hcode') . '/js/jquery.retina.js');
  }
  drupal_add_js(array(
    'theme_path' => drupal_get_path('theme', 'hcode'),
    'base_path' => base_path(),
  ), 'setting');
}

/**
 * Overrides theme_menu_tree().
 */
function stig_menu_tree(&$variables) {
  return $variables['tree'];
}

/**
 * Overrides theme_menu_tree().
 */
function stig_menu_tree__main_menu(&$variables) {
  return $variables['tree'];
}

function stig_menu_link(array $variables) {

  $element = $variables['element'];
  $sub_menu = '';

  if (strpos($element['#href'], "_anchor_") !== false) {
    $element['#localized_options']['attributes']['data-scroll-to'] = str_replace("http://_anchor_", '#', $element['#href']);
    $element['#href'] = str_replace("http://_anchor_", '//' . $_SERVER['HTTP_HOST'] . request_uri() . '#', $element['#href']);
  }

  if ($element['#below']) {
    $element['#localized_options']['attributes']['class'][] = 'mn-has-sub';
    $angle_class = $element['#original_link']['depth'] == 1 ? 'down' : 'right right';
    $element['#title'] .= ' <i class="fa fa-angle-' . $angle_class . '"></i>';
    unset($element['#below']['#theme_wrappers']);
    $sub_menu = '<ul class = "mn-sub">' . drupal_render($element['#below']) . '</ul>';
  }
  $element['#localized_options']['html'] = TRUE;
  if(isset($element['#localized_options']['attributes']['class']) && in_array('active-trail', $element['#localized_options']['attributes']['class'])) {
    $element['#localized_options']['attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li>' . $output . $sub_menu . "</li>\n";
}

/**
 * Overrides theme_menu_local_tasks().
 */
function hcode_menu_local_tasks(array $variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<div class = "align-center primary-tabs mb-10 mt-30 mb-xxs-30"><ul class="nav nav-tabs tpl-minimal-tabs">';
    $variables['primary']['#suffix'] = '</ul></div>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<div class = "align-center mb-10 mt-30 mb-xxs-30"><ul class="nav nav-tabs tpl-minimal-tabs">';
    $variables['secondary']['#suffix'] = '</ul></div>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}

function hcode_fivestar_static($variables) {
  $rating  = $variables['rating'] / 20;
  $output = '';
  for($i = 1; $i <= 5; $i++) {
    $output .= $rating >= $i ? '<i class="black-text fa fa-star"></i>' : ($rating + 0.5 >= $i ? '<i class="black-text fa fa-star-half-o"></i>' : '<i class="black-text fa fa-star-o"></i>');
  }
  return $output;
}

/**
 * Display a static fivestar value as stars with a title and description.
 */
function hcode_fivestar_static_element($variables) {
  return $variables['star_display'];
}

/**
 * Update status messages
*/
function hcode_status_messages($variables) {
  $display = $variables['display'];
  $output = '<div class = "row"><div class = "col-md-8 col-md-offset-2">';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  $types = array(
    'status' => 'success',
    'error' => 'error',
    'warning' => 'notice',
  );
  $icons = array(
    'status' => 'check-circle-o',
    'error' => 'fa-exclamation-triangle',
    'warning' => 'fa-times-circle',
  ); 
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"alert " . $types[$type] . "\">\n<i class=\"fa fa-lg fa-" . $icons[$type] . "\"></i>";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      foreach ($messages as $message) {
        $output .= '<p>' . $message . "</p>\n";
      }
    }
    else {
      $output .= $messages[0];
    }
    $output .= "</div>\n";
  }
  $output .= '</div></div>';
  return $output;
}

/**
 * Implementation of hook_css_alter().
 */
function hcode_css_alter(&$css) {
  // Disable standart css from ubercart
  unset($css[drupal_get_path('module', 'system') . '/system.menus.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.messages.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.base.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.theme.css']);
  unset($css[drupal_get_path('module', 'search') . '/search.css']);
}


/**
 *  Implements theme_textarea().
 */
function stig_textarea($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'cols', 'rows'));
  _form_set_class($element, array('form-textarea'));

  $wrapper_attributes = array(
    'class' => array('form-textarea-wrapper', 'form-group'),
  );

  // Add resizable behavior.
  if (!empty($element['#resizable'])) {
    drupal_add_library('system', 'drupal.textarea');
    $wrapper_attributes['class'][] = 'resizable';
  }

  $output = '<div' . drupal_attributes($wrapper_attributes) . '>';
  $output .= '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
  $output .= '</div>';
  return $output;
}

/**
 *  Implements theme_select().
 */
/*function hcode_select($variables) {
  dpm($variables);
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'size'));
  if($element['#title_display'] == 'none') {
    //$element['#options'][''] = $element['#title'];
  }
//  _form_set_class($element, array('form-select'));

  $output = '<select' . drupal_attributes($element['#attributes']) . '>' . form_select_options($element) . '</select>';
  return $output;
}
*/

/**
 * Theme function to render an email component.
 */
function aurum_webform_email($variables) {
  $element = $variables['element'];

  // This IF statement is mostly in place to allow our tests to set type="text"
  // because SimpleTest does not support type="email".
  if (!isset($element['#attributes']['type'])) {
    $element['#attributes']['type'] = 'email';
  }

  // Convert properties to attributes on the element if set.
  foreach (array('id', 'name', 'value', 'size') as $property) {
    if (isset($element['#' . $property]) && $element['#' . $property] !== '') {
      $element['#attributes'][$property] = $element['#' . $property];
    }
  }
  _form_set_class($element, array('form-text', 'form-email'));
  
  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';

  if(isset($element['#nd_icon'])) {
    $size_class = in_array('input-lg', $element['#attributes']['class']) ? ' pi-input-with-icon-lg' : '';
    $size_class .= in_array('input-sm', $element['#attributes']['class']) ? ' pi-input-with-icon-sm' : '';
    $output = '<div class="pi-input-with-icon' . $size_class .'"><div class="pi-input-icon"><i class="' . $element['#nd_icon'] . '"></i></div>' . $output .  '</div>';
  }

  return $output;
}


/**
 *  Implements theme_password().
 */
function stig_password($variables) {
 $element = $variables['element'];
  $element['#attributes']['type'] = 'password';
  element_set_attributes($element, array('id', 'name', 'size', 'maxlength'));
  _form_set_class($element, array('form-control', 'input-md', 'round'));

  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';

  $output = '<div class = "form-group">' . $output . '</div>';
  return $output;
}

/**
 * Implements hook_preprocess_button().
 */
function stig_preprocess_button(&$vars) {
  $gray_buttons = array(t('Update cart'), t('Checkout'));
  if (isset($vars['element']['#add_black'])) {
    $vars['element']['#attributes']['class'][] = 'btn-large';
  }
  else if(in_array($vars['element']['#value'], $gray_buttons)) {
    $vars['element']['#attributes']['class'][] = 'btn-small';
    $vars['element']['#attributes']['class'][] = 'btn-color';
    //$vars['element']['#attributes']['class'][] = 'btn-round';
  }
  elseif (!isset($vars['element']['#attributes']['class']) || (!in_array('btn-large', $vars['element']['#attributes']['class'])) && !in_array('btn-small', $vars['element']['#attributes']['class'])) {
    $vars['element']['#attributes']['class'][] = 'btn-medium';
    //$vars['element']['#attributes']['class'][] = 'btn-round';
  }
  $vars['element']['#attributes']['class'][] = 'btn btn-mod';
  if ($vars['element']['#value'] == '<none>') {
    $vars['element']['#attributes']['class'][] = 'hidden';
  }
}

/**
 * Implements hook_button().
 */
function hcode_button($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'] = isset($element['#attributes']['class']) ? $element['#attributes']['class'] : array();
  $element['#attributes']['class'] = array_merge($element['#attributes']['class'], array('btn', 'button', 'xs-margin-bottom-five'));
  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  $suffix = '';
  if (in_array($element['#value'], array(t('Update cart')))) {
    $element['#attributes']['class'][] = 'highlight-button btn btn-very-small no-margin';
  }
  if (in_array($element['#value'], array(t('Checkout')))) {
    $element['#attributes']['class'][] = 'highlight-button-black-background btn no-margin pull-right checkout-btn';
  }
  else {
    $element['#attributes']['class'][] = 'btn-small';
    $element['#attributes']['class'][] = 'highlight-button-dark';
  }

  return '<input' . drupal_attributes($element['#attributes']) . ' />' . $suffix;
}

/**
 * Update breadcrumbs
*/
function hcode_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {

    if (!drupal_is_front_page() && !empty($breadcrumb)) {
      $node_title = filter_xss(menu_get_active_title(), array());
      $breadcrumb[] = t($node_title);
    }
    if (count($breadcrumb) > 1) {
      $output = '<div class="breadcrumb">';
      $output .= theme('item_list', array('items' => $breadcrumb));
      $output .= '</div>';
      return $output;
    }
  }
}

/**
 * Implements hook_preprocess_form().
 */
function stig_preprocess_form(&$variables) {
  $variables['element']['#attributes']['class'][] = 'form';
}

/**
 * Implements hook_element_info_alter().
 */
function hcode_element_info_alter(&$elements) {
  foreach ($elements as &$element) {
    if (!empty($element['#input'])) {
      $element['#process'][] = '_hcode_process_input';
    }
  }
}

function _hcode_process_input(&$element, &$form_state) {
  $types = array(
    'textarea',
    'textfield',
    'webform_email',
    'webform_number',
    'select',
    'password',
    'password_confirm',
  );
  if (!empty($element['#type']) && (in_array($element['#type'], $types))) {
    if (isset($element['#title']) && $element['#title_display'] != 'before' && (!isset($element['#title_show'])) && $element['#type'] != 'select') {
      $element['#attributes']['placeholder'] = $element['#title'];
      $element['#title_display'] = 'none';
    }
  }

  return $element;
}

/**
 *  Implements theme_radio().
 */
function hcode_form_element($variables) {
  $element = &$variables['element'];
  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('form-item', 'form-group', 'no-margin-bottom');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  if(isset($element['#name']) && isset($element['#return_value']) && strpos($element['#name'], 'field_color_attribute') !== FALSE) {
    $attributes['style']= "background-color: #" . $element['#return_value']; 
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';


  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}
/**
 *  Implements theme_textfield().
 */
function stig_textfield($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = isset($element['#attributes']['type']) ? $element['#attributes']['type'] : 'text';

  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength',
  ));
  $output = '<input' . drupal_attributes($element['#attributes']) . ' />';
  $extra = '';
  if ($element['#autocomplete_path'] && drupal_valid_path($element['#autocomplete_path'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';
    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#attributes']['id'] . '-autocomplete';
    $attributes['value'] = url($element['#autocomplete_path'], array('absolute' => TRUE));
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    $output = '<div class="input-group">' . $output . '<span class="input-group-addon"><i class = "fa fa-refresh"></i></span></div>';
    $extra = '<input' . drupal_attributes($attributes) . ' />';
  }
  $output .= $extra; 
  if(isset($element['#nd_icon'])) {
    $size_class = in_array('input-lg', $element['#attributes']['class']) ? ' pi-input-with-icon-lg' : '';
    $size_class .= in_array('input-sm', $element['#attributes']['class']) ? ' pi-input-with-icon-sm' : '';
    $output = '<div class="pi-input-with-icon' . $size_class .'"><div class="pi-input-icon"><i class="' . $element['#nd_icon'] . '"></i></div>' . $output .  '</div>';
  }
  $output = '<div class = "form-group">' . $output . '</div>';
  return $output;
}

/**
 * Implements theme_field()
 *
 * Make field items a comma separated unordered list
 */
function stig_field__properties($variables) {
  $rows = array();
  $rows[] = array('data' => array(t('Parameter'), t('Value')), 'no_striping' => TRUE, 'class' => array('bold'));
  foreach ($variables['items'] as $items) {
    foreach (element_children($items) as $i) {
      $item = $items[$i];
      if (isset($item['#markup'])) {
        $rows[] = array('data' => array(t($item['#title']), t($item['#markup'])), 'no_striping' => TRUE);
      }
    }
  }
  return theme('table', array(
    'rows' => $rows,
    'attributes' => array('class' => array('table', 'table-bordered', 'table-striped')))
  );
}

/**
 * Implements theme_field()
 *
 * Make field items a comma separated unordered list
 */
function hcode_field($variables) {
  $output = '';
  $output .= $variables['label_hidden'] ? '' : ($variables['label'] . ': ');
  $field_output = array();
  // Render the items as a comma separated inline list
  for ($i = 0; $i < count($variables['items']); $i++) {
    if(!isset($variables['items'][$i]['#printed']) || (isset($variables['items'][$i]['#printed']) && !$variables['items'][$i]['#printed'])) {
      $field_output[] = drupal_render($variables['items'][$i]);
    }
  }
  $output .= implode(', ', $field_output);
  // Render the top-level DIV.
  $output = '<div class="' . $variables ['classes'] . '"' . $variables ['attributes'] . '>' . $output . '</div>';
  return $output;
}

/**
 * Implements theme_field()
 *
 * Make field items a comma separated unordered list
 */
function hcode_field__field_products($variables) {
  $output = '';
  $output .= $variables['label_hidden'] ? '' : ($variables['label'] . ': ');
  $field_output = array();
  // Render the items as a comma separated inline list
  for ($i = 0; $i < count($variables['items']); $i++) {
    if(!isset($variables['items'][$i]['#printed']) || (isset($variables['items'][$i]['#printed']) && !$variables['items'][$i]['#printed'])) {
      if(isset($variables['items'][$i]['quantity'])) {
        $variables['items'][$i]['quantity']['#prefix'] = '<div class = "row"><div class="col-md-3 col-sm-3 margin-five">';
        $variables['items'][$i]['quantity']['#suffix'] = '</div>';
        $variables['items'][$i]['quantity']['#attributes']['class'][] = 'med-input';
        $variables['items'][$i]['quantity']['#attributes']['class'][] = 'xs-med-input ';
        $variables['items'][$i]['submit']['#prefix'] = '<div class="col-md-9 col-sm-9 no-padding margin-five">
            <button class="highlight-button-dark btn btn-medium button"><i class="icon-basket"></i>' . t('Add to Cart') . '</button>';
        $variables['items'][$i]['submit']['#suffix'] = '</div></div>';
        $variables['items'][$i]['submit']['#attributes']['class'][] = 'hidden';
      }
      $field_output[] = drupal_render($variables['items'][$i]);
    }
  }
  $output .= implode(', ', $field_output);
  // Render the top-level DIV.
  $output = '<div class="' . $variables ['classes'] . '"' . $variables ['attributes'] . '>' . $output . '</div>';
  return $output;
}


/**
 * Implements theme_field()
 */
function stig_field__field_sale_text($variables) {
  $output = '';
  if(count($variables['items'])) {
    for ($i = 0; $i < count($variables['items']); $i++) {
      $output .= '<div class="intro-label"><span class="label label-danger bg-red">' . $variables['items'][$i]['#markup']  . '</span></div>';
    }
  }
  return $output;
}

/**
 * Implements theme_field()
 */
function stig_field__field_old_price($variables) {
  $output = '';
  if(count($variables['items'])) {
    for ($i = 0; $i < count($variables['items']); $i++) {
      $output .= '<del>' . $variables['items'][$i]['#markup']  . '</del>&nbsp;';
    }
  }
  return $output;
}

function stig_url_outbound_alter(&$path, &$options, $original_path) {
  $alias = drupal_get_path_alias($original_path);
  $url = parse_url($alias);
  if (isset($url['fragment'])) {
    //set path without the fragment
    $path = isset($url['path']) ? $url['path'] : '';

    //prevent URL from re-aliasing
    $options['alias'] = TRUE;

    //set fragment
    $options['fragment'] = $url['fragment'];
  }
}

function stig_link($variables) {
  if($variables['text'] == t('View cart')) {
    $variables['options']['attributes']['class'][] = 'btn btn-mod btn-small';
  }
  return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '>' . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
}

function stig_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => '<a href = "#" class = "active">' . $i . '</a>',
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    $output = '<div class = "pagination">';
    foreach($items as $item) {
      $output .= $item['data'] . ' ';
    }
    $output .= '</div>';
    return $output;
  }
}

function stig_pager_link($variables) {
  $text = $variables['text'];
  $page_new = $variables['page_new'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = $variables['attributes'];

  $page = isset($_GET['page']) ? $_GET['page'] : '';
  if ($new_page = implode(',', pager_load_array($page_new[$element], $element, explode(',', $page)))) {
    $parameters['page'] = $new_page;
  }

  $query = array();
  if (count($parameters)) {
    $query = drupal_get_query_parameters($parameters, array());
  }
  if ($query_pager = pager_get_query_parameters()) {
    $query = array_merge($query, $query_pager);
  }

  // Set each pager link title
  if (!isset($attributes['title'])) {
    static $titles = NULL;
    if (!isset($titles)) {
      $titles = array(
        t('«') => t('Go to first page'),
        t('‹') => t('Go to previous page'),
        t('›') => t('Go to next page'),
        t('»') => t('Go to last page'),
      );
    }
    if (isset($titles[$text])) {
      $attributes['title'] = $titles[$text];
    }
    elseif (is_numeric($text)) {
      $attributes['title'] = t('Go to page @number', array('@number' => $text));
    }
  }
  $replace_titles = array(
    t('« first') => '<i class="fa fa-angle-double-left"></i>',
    t('‹ previous') => '<i class="fa fa-angle-left"></i>',
    t('next ›') => '<i class="fa fa-angle-right"></i>',
    t('last »') => '<i class="fa fa-angle-double-right"></i>',
  );
  $text = isset($replace_titles[$text]) ? $replace_titles[$text] : check_plain($text);

  $attributes['href'] = url($_GET['q'], array('query' => $query));
  return '<a' . drupal_attributes($attributes) . '>' . $text . '</a>';
}

/**
 * Theme function to render a container full of share links (for a node).
 */
function hcode_social_share_links($variables) {
  $content = theme_social_share_links($variables);
  unset($content['#prefix'], $content['#suffix']);
  $output = '<div class = "product-details-social">';
  global $language;
  $label = variable_get('social_share_label', NULL);
  $label_enabled = variable_get('social_share_show_label_' . $variables['node']->type, FALSE);
  if (is_array($label) && $label_enabled) {
    $output .= '<span class="black-text text-uppercase text-small vertical-align-middle margin-right-five">' . ((isset($label[$language->language])) ? $label[$language->language] : '') . '</span>';
  }
  $output .= implode(' ', $content);
  $output .= '</div>';
  $content = array('#markup' => $output);
  return $content;
}

/**
 * Theme function to render a single social share link (for a node)
 */
function hcode_social_share_link($variables) {
  $link = theme_social_share_link($variables);
  $social = str_replace(' ', '-', strtolower($link['#title']));
  $icon = '<i class = "fa fa-' . $social . '"></i>';
  $link_options = $link['#options'];
  $link_options['html'] = TRUE;
  $link_options['attributes']['class'] = $social;
  $link_output = l($icon, $link['#href'], $link_options);
  return $link_output;
}
