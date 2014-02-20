<?php
/**
 * @file
 * deims_research_project.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function deims_research_project_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|project|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'project';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'submitted_by' => array(
      'weight' => '13',
      'label' => 'inline',
      'format' => 'ds_time_ago',
    ),
    'field_rp_figures_side' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|project|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|project|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'project';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '-5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|project|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function deims_research_project_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_core_areas',
        1 => 'field_keywords',
      ),
      'left' => array(
        2 => 'field_rp_figures_side',
      ),
      'middle' => array(
        3 => 'field_images',
        4 => 'field_abstract',
        5 => 'body',
        6 => 'field_image_bottom',
      ),
      'right' => array(
        7 => 'field_related_people',
        8 => 'field_res_proj_rel_sites_ref',
        9 => 'field_res_proj_rel_data_ref',
        10 => 'field_ongoing',
      ),
      'footer' => array(
        11 => 'field_related_projects',
        12 => 'field_related_links',
        13 => 'submitted_by',
      ),
    ),
    'fields' => array(
      'field_core_areas' => 'header',
      'field_keywords' => 'header',
      'field_rp_figures_side' => 'left',
      'field_images' => 'middle',
      'field_abstract' => 'middle',
      'body' => 'middle',
      'field_image_bottom' => 'middle',
      'field_related_people' => 'right',
      'field_res_proj_rel_sites_ref' => 'right',
      'field_res_proj_rel_data_ref' => 'right',
      'field_ongoing' => 'right',
      'field_related_projects' => 'footer',
      'field_related_links' => 'footer',
      'submitted_by' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|project|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        2 => 'field_abstract',
        3 => 'body',
      ),
      'right' => array(
        1 => 'field_images',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_images' => 'right',
      'field_abstract' => 'left',
      'body' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|project|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function deims_research_project_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'thumbs';
  $ds_view_mode->label = 'thumbs';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['thumbs'] = $ds_view_mode;

  return $export;
}
