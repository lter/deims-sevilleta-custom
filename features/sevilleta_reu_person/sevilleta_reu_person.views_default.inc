<?php
/**
 * @file
 * sevilleta_reu_person.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sevilleta_reu_person_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reu_participants';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REU Participants';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sevilleta REU Participants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reu_year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_images' => 'field_images',
    'title' => 'title',
    'body' => 'body',
    'field_reu_year' => 'field_reu_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_images' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_reu_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_reu_year']['id'] = 'field_reu_year';
  $handler->display->display_options['fields']['field_reu_year']['table'] = 'field_data_field_reu_year';
  $handler->display->display_options['fields']['field_reu_year']['field'] = 'field_reu_year';
  $handler->display->display_options['fields']['field_reu_year']['label'] = '';
  $handler->display->display_options['fields']['field_reu_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reu_year']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Year (field_reu_year) */
  $handler->display->display_options['sorts']['field_reu_year_value']['id'] = 'field_reu_year_value';
  $handler->display->display_options['sorts']['field_reu_year_value']['table'] = 'field_data_field_reu_year';
  $handler->display->display_options['sorts']['field_reu_year_value']['field'] = 'field_reu_year_value';
  $handler->display->display_options['sorts']['field_reu_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reu' => 'reu',
  );
  /* Filter criterion: Content: Type (field_reu_type) */
  $handler->display->display_options['filters']['field_reu_type_value']['id'] = 'field_reu_type_value';
  $handler->display->display_options['filters']['field_reu_type_value']['table'] = 'field_data_field_reu_type';
  $handler->display->display_options['filters']['field_reu_type_value']['field'] = 'field_reu_type_value';
  $handler->display->display_options['filters']['field_reu_type_value']['value'] = array(
    'Student' => 'Student',
  );

  /* Display: REU Student Page */
  $handler = $view->new_display('page', 'REU Student Page', 'page');
  $handler->display->display_options['path'] = 'reu/participants';

  /* Display: REU Grads Page */
  $handler = $view->new_display('page', 'REU Grads Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Graduate REU Participants';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reu' => 'reu',
  );
  /* Filter criterion: Content: Type (field_reu_type) */
  $handler->display->display_options['filters']['field_reu_type_value']['id'] = 'field_reu_type_value';
  $handler->display->display_options['filters']['field_reu_type_value']['table'] = 'field_data_field_reu_type';
  $handler->display->display_options['filters']['field_reu_type_value']['field'] = 'field_reu_type_value';
  $handler->display->display_options['filters']['field_reu_type_value']['value'] = array(
    'Graduate Student' => 'Graduate Student',
  );
  $handler->display->display_options['path'] = 'reu/grads';

  /* Display: Undergraduate Student Interns */
  $handler = $view->new_display('page', 'Undergraduate Student Interns', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sevilleta Undergraduate Student Interns';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reu' => 'reu',
  );
  /* Filter criterion: Content: Type (field_reu_type) */
  $handler->display->display_options['filters']['field_reu_type_value']['id'] = 'field_reu_type_value';
  $handler->display->display_options['filters']['field_reu_type_value']['table'] = 'field_data_field_reu_type';
  $handler->display->display_options['filters']['field_reu_type_value']['field'] = 'field_reu_type_value';
  $handler->display->display_options['filters']['field_reu_type_value']['value'] = array(
    'Intern' => 'Intern',
  );
  $handler->display->display_options['path'] = 'reu/interns';
  $export['reu_participants'] = $view;

  return $export;
}
