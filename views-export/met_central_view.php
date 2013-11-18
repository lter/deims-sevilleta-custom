$view = new view();
$view->name = 'met_central';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'met_central';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Met Central';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Article Date */
$handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
$handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
$handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
$handler->display->display_options['fields']['field_article_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_article_date']['settings'] = array(
  'format_type' => 'only_year',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Sort criterion: Content: Article Date (field_article_date) */
$handler->display->display_options['sorts']['field_article_date_value']['id'] = 'field_article_date_value';
$handler->display->display_options['sorts']['field_article_date_value']['table'] = 'field_data_field_article_date';
$handler->display->display_options['sorts']['field_article_date_value']['field'] = 'field_article_date_value';
$handler->display->display_options['sorts']['field_article_date_value']['order'] = 'DESC';
$handler->display->display_options['sorts']['field_article_date_value']['expose']['label'] = 'Date';
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
  'article' => 'article',
);
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  0 => '710',
);
$handler->display->display_options['filters']['tid']['vocabulary'] = 'section';
/* Filter criterion: Content: Article Date (field_article_date) */
$handler->display->display_options['filters']['field_article_date_value']['id'] = 'field_article_date_value';
$handler->display->display_options['filters']['field_article_date_value']['table'] = 'field_data_field_article_date';
$handler->display->display_options['filters']['field_article_date_value']['field'] = 'field_article_date_value';
$handler->display->display_options['filters']['field_article_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_article_date_value']['expose']['operator_id'] = 'field_article_date_value_op';
$handler->display->display_options['filters']['field_article_date_value']['expose']['label'] = 'Article Date (field_article_date)';
$handler->display->display_options['filters']['field_article_date_value']['expose']['operator'] = 'field_article_date_value_op';
$handler->display->display_options['filters']['field_article_date_value']['expose']['identifier'] = 'field_article_date_value';
$handler->display->display_options['filters']['field_article_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  6 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_article_date_value']['granularity'] = 'year';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'field_article_date',
    'rendered' => 1,
    'rendered_strip' => 1,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_article_date' => 'field_article_date',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'met-central';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'field_article_date',
    'rendered' => 1,
    'rendered_strip' => 1,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_article_date' => 'field_article_date',
);
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Article Date */
$handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
$handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
$handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
$handler->display->display_options['fields']['field_article_date']['label'] = '';
$handler->display->display_options['fields']['field_article_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_article_date']['settings'] = array(
  'format_type' => 'only_year',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
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
  'article' => 'article',
);
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  0 => '710',
);
$handler->display->display_options['filters']['tid']['vocabulary'] = 'section';
/* Filter criterion: Content: Article Date (field_article_date) */
$handler->display->display_options['filters']['field_article_date_value']['id'] = 'field_article_date_value';
$handler->display->display_options['filters']['field_article_date_value']['table'] = 'field_data_field_article_date';
$handler->display->display_options['filters']['field_article_date_value']['field'] = 'field_article_date_value';
$handler->display->display_options['filters']['field_article_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_article_date_value']['expose']['operator_id'] = 'field_article_date_value_op';
$handler->display->display_options['filters']['field_article_date_value']['expose']['label'] = 'Filter by Year';
$handler->display->display_options['filters']['field_article_date_value']['expose']['operator'] = 'field_article_date_value_op';
$handler->display->display_options['filters']['field_article_date_value']['expose']['identifier'] = 'field_article_date_value';
$handler->display->display_options['filters']['field_article_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  5 => 0,
  6 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_article_date_value']['granularity'] = 'year';
$handler->display->display_options['filters']['field_article_date_value']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_article_date_value']['year_range'] = '-10:+1';
$handler->display->display_options['path'] = 'met-central-2';

