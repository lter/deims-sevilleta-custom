<?php
/**
 * @file
 * deims_research_project.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function deims_research_project_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'research_projects';
  $view->description = 'Pages that show summaries of the ongoing and completed research projects';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current Research Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'project' => 'project',
  );
  /* Filter criterion: Content: Ongoing (field_ongoing) */
  $handler->display->display_options['filters']['field_ongoing_value']['id'] = 'field_ongoing_value';
  $handler->display->display_options['filters']['field_ongoing_value']['table'] = 'field_data_field_ongoing';
  $handler->display->display_options['filters']['field_ongoing_value']['field'] = 'field_ongoing_value';
  $handler->display->display_options['filters']['field_ongoing_value']['value'] = array(
    0 => '0',
  );

  /* Display: Current Projects */
  $handler = $view->new_display('page', 'Current Projects', 'page');
  $handler->display->display_options['title'] = 'Current Research Projects';
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
    'project' => 'project',
  );
  /* Filter criterion: Content: Ongoing (field_ongoing) */
  $handler->display->display_options['filters']['field_ongoing_value']['id'] = 'field_ongoing_value';
  $handler->display->display_options['filters']['field_ongoing_value']['table'] = 'field_data_field_ongoing';
  $handler->display->display_options['filters']['field_ongoing_value']['field'] = 'field_ongoing_value';
  $handler->display->display_options['filters']['field_ongoing_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'projects';

  /* Display: Completed Projects */
  $handler = $view->new_display('page', 'Completed Projects', 'page_1');
  $handler->display->display_options['title'] = 'Complete Research Projects';
  $handler->display->display_options['path'] = 'projects_complete';
  $export['research_projects'] = $view;

  return $export;
}
