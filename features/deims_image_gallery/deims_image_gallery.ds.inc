<?php
/**
 * @file
 * deims_image_gallery.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function deims_image_gallery_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|image|gallery_mode';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'gallery_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_file_image_title_text',
        1 => 'file',
      ),
    ),
    'fields' => array(
      'field_file_image_title_text' => 'ds_content',
      'file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['file|image|gallery_mode'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function deims_image_gallery_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'gallery_mode';
  $ds_view_mode->label = 'Gallery mode';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['gallery_mode'] = $ds_view_mode;

  return $export;
}
