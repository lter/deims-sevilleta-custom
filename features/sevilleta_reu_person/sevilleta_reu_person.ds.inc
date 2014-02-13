<?php
/**
 * @file
 * sevilleta_reu_person.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function sevilleta_reu_person_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|reu|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'reu';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_name',
        2 => 'body',
        3 => 'field_reu_type',
        4 => 'field_reu_mentor',
        5 => 'field_reu_home_institution',
        6 => 'field_reu_year',
      ),
      'right' => array(
        1 => 'field_images',
        7 => 'field_reu_abstract',
        8 => 'field_reu_presentation',
      ),
    ),
    'fields' => array(
      'field_name' => 'left',
      'field_images' => 'right',
      'body' => 'left',
      'field_reu_type' => 'left',
      'field_reu_mentor' => 'left',
      'field_reu_home_institution' => 'left',
      'field_reu_year' => 'left',
      'field_reu_abstract' => 'right',
      'field_reu_presentation' => 'right',
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
  $export['node|reu|full'] = $ds_layout;

  return $export;
}
