<?php
/**
 * @file
 * deims_research_site.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function deims_research_site_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|research_site|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'research_site';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'submitted_by' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
  );
  $export['node|research_site|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|research_site|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'research_site';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|research_site|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function deims_research_site_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_site|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_site';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_description',
        1 => 'field_site_details',
        2 => 'field_elevation',
        3 => 'field_core_areas',
        4 => 'field_is_core_site',
        5 => 'submitted_by',
      ),
      'right' => array(
        6 => 'field_images',
        7 => 'field_coordinates',
      ),
    ),
    'fields' => array(
      'field_description' => 'left',
      'field_site_details' => 'left',
      'field_elevation' => 'left',
      'field_core_areas' => 'left',
      'field_is_core_site' => 'left',
      'submitted_by' => 'left',
      'field_images' => 'right',
      'field_coordinates' => 'right',
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
  $export['node|research_site|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|research_site|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'research_site';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_images',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_description',
      ),
    ),
    'fields' => array(
      'field_images' => 'left',
      'title' => 'right',
      'field_description' => 'right',
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
  $export['node|research_site|teaser'] = $ds_layout;

  return $export;
}
