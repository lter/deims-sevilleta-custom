<?php
/**
 * @file
 * deims_article.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function deims_article_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'document_categories';
  $view->description = 'The terms used to catalog the documents';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Document Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Document Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'downloads' => 'downloads',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '690';

  /* Display: Documents */
  $handler = $view->new_display('page', 'Documents', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="documents/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'downloads' => 'downloads',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '689';
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = '!=';
  $handler->display->display_options['filters']['name']['value'] = 'Publications';
  $handler->display->display_options['path'] = 'document-categories';

  /* Display: Posters */
  $handler = $view->new_display('page', 'Posters', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Posters';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="posters/[name]">[name]</a>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'posters';

  /* Display: Presentations */
  $handler = $view->new_display('page', 'Presentations', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Presentations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<b><a href="presentations/[name]">[name]</a></b>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'downloads' => 'downloads',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '691';
  $handler->display->display_options['path'] = 'presentations';
  $export['document_categories'] = $view;

  $view = new view();
  $view->name = 'documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Field Guides';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'ds';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* Field: File: Download Keywords */
  $handler->display->display_options['fields']['field_download_keywords']['id'] = 'field_download_keywords';
  $handler->display->display_options['fields']['field_download_keywords']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['fields']['field_download_keywords']['field'] = 'field_download_keywords';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    692 => '692',
    693 => '693',
    694 => '694',
    695 => '695',
    697 => '697',
    698 => '698',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';

  /* Display: All-Documents */
  $handler = $view->new_display('page', 'All-Documents', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Download Keywords */
  $handler->display->display_options['fields']['field_download_keywords']['id'] = 'field_download_keywords';
  $handler->display->display_options['fields']['field_download_keywords']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['fields']['field_download_keywords']['field'] = 'field_download_keywords';
  $handler->display->display_options['fields']['field_download_keywords']['label'] = '';
  $handler->display->display_options['fields']['field_download_keywords']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_keywords']['type'] = 'token_formatters_term_reference';
  $handler->display->display_options['fields']['field_download_keywords']['settings'] = array(
    'text' => '[term:name]',
    'link' => 'taxonomy/term/[term:tid]',
    'check_access' => TRUE,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    692 => '692',
    693 => '693',
    694 => '694',
    695 => '695',
    697 => '697',
    698 => '698',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'sev-documents';

  /* Display: Annual Reports */
  $handler = $view->new_display('page', 'Annual Reports', 'page_1');
  $handler->display->display_options['path'] = 'documents/Annual Reports';

  /* Display: Permits */
  $handler = $view->new_display('page', 'Permits', 'page_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    697 => '697',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'documents/Research Permits';

  /* Display: Site Review */
  $handler = $view->new_display('page', 'Site Review', 'page_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    698 => '698',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'documents/Site Review Documents';

  /* Display: Proposals */
  $handler = $view->new_display('page', 'Proposals', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proposals';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    695 => '695',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'documents/proposals';

  /* Display: Field Guides */
  $handler = $view->new_display('page', 'Field Guides', 'page_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    694 => '694',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'documents/Field Guides';

  /* Display: Data Management */
  $handler = $view->new_display('page', 'Data Management', 'page_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    693 => '693',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'documents/Data Management';

  /* Display: posters-2012-ASM */
  $handler = $view->new_display('page', 'posters-2012-ASM', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2012 All Scientists Meeting Posters';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    711 => '711',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'posters/2012-LTER-All-Scientists-Meeting';

  /* Display: posters-2009-ASM */
  $handler = $view->new_display('page', 'posters-2009-ASM', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2009 All Scientists Meeting  Posters';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    710 => '710',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'posters/2009-LTER-All-Scientists-Meeting';

  /* Display: posters-2006-ASM */
  $handler = $view->new_display('page', 'posters-2006-ASM', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2006 All Scientists Meeting Posters';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    709 => '709',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'posters/2006-LTER-All-Scientists-Meeting';

  /* Display: pres-2009-NSF */
  $handler = $view->new_display('page', 'pres-2009-NSF', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2009 NSF Site Visit Sevilleta Principal Investigators Presentations';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    708 => '708',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/2009-NSF-Site-Visit:-SEV-LTER-PI-Presentations';

  /* Display: pres-2008-reg-symp */
  $handler = $view->new_display('page', 'pres-2008-reg-symp', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2008 Regional Symposium Presentations';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    707 => '707',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/2008-Regional-LTER-Research-Symposium';

  /* Display: pres-2007-Symp */
  $handler = $view->new_display('page', 'pres-2007-Symp', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2007 Sevilleta LTER Research Symposium Presentations';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    706 => '706',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/2007-Sevilleta-LTER-Research-Symposium';

  /* Display: pres-2006-symp */
  $handler = $view->new_display('page', 'pres-2006-symp', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2006 Sevilleta LTER-Research Symposium';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    705 => '705',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/2006-Sevilleta-LTER-Research-Symposium';

  /* Display: pres-2005-Symp */
  $handler = $view->new_display('page', 'pres-2005-Symp', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2005 Sevilleta LTER Research Symposium';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    704 => '704',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/2005-Sevilleta-LTER-Research-Symposium';

  /* Display: pres-2004-symp */
  $handler = $view->new_display('page', 'pres-2004-symp', 'page_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2004 Sevilleta LTER Research Symposium';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    703 => '703',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/2004-Sevilleta-LTER-Research-Symposium';

  /* Display: pres-2003-symp */
  $handler = $view->new_display('page', 'pres-2003-symp', 'page_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2003 Sevilleta LTER Research Symposium';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    702 => '702',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/2003-Sevilleta-LTER-Research-Symposium';

  /* Display: pres-2003-NSF */
  $handler = $view->new_display('page', 'pres-2003-NSF', 'page_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2003 NSF Site Visit Principal Investigators Presentations';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    701 => '701',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/2003-NSF-Site-Visit:-SEV-LTER-PI-Presentations';

  /* Display: pres-2001-symp */
  $handler = $view->new_display('page', 'pres-2001-symp', 'page_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '2001 Sevilleta LTER Research Symposium';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    700 => '700',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/2001-Sevilleta-LTER-Research-Symposium';

  /* Display: pres-1999-symp */
  $handler = $view->new_display('page', 'pres-1999-symp', 'page_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '1999 Sevilleta LTER Research Symposium';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  /* Filter criterion: File: Download Keywords (field_download_keywords) */
  $handler->display->display_options['filters']['field_download_keywords_tid']['id'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['table'] = 'field_data_field_download_keywords';
  $handler->display->display_options['filters']['field_download_keywords_tid']['field'] = 'field_download_keywords_tid';
  $handler->display->display_options['filters']['field_download_keywords_tid']['value'] = array(
    699 => '699',
  );
  $handler->display->display_options['filters']['field_download_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_download_keywords_tid']['vocabulary'] = 'downloads';
  $handler->display->display_options['path'] = 'presentations/1999-Sevilleta-LTER-Research-Symposium';
  $export['documents'] = $view;

  $view = new view();
  $view->name = 'met_central';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Met Central';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Met Central';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_article_date',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  $handler->display->display_options['fields']['field_article_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'year',
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';
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
    0 => '618',
    1 => '688',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
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

  /* Display: Met Central */
  $handler = $view->new_display('page', 'Met Central', 'page');
  $handler->display->display_options['display_description'] = 'A view of the meteoreology related posts, grouped by date';
  $handler->display->display_options['path'] = 'met-central';
  $export['met_central'] = $view;

  return $export;
}
