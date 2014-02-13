<?php
/**
 * @file
 * sevilleta_reu_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sevilleta_reu_person_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|reu|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reu_details';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_reu_type',
      2 => 'field_reu_mentor',
      3 => 'field_reu_home_institution',
      4 => 'field_reu_year',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => ' group-contact field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_contact|node|reu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_results|node|reu|form';
  $field_group->group_name = 'group_results';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reu';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_reu_details';
  $field_group->data = array(
    'label' => 'Results',
    'weight' => '6',
    'children' => array(
      0 => 'field_reu_presentation',
      1 => 'field_reu_data_set',
      2 => 'field_reu_abstract',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Results',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => ' group-results field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_results|node|reu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reu_details|node|reu|form';
  $field_group->group_name = 'group_reu_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'reu';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '3',
    'children' => array(
      0 => 'group_contact',
      1 => 'group_results',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'classes' => ' group-details field-group-htabs',
      ),
    ),
  );
  $export['group_reu_details|node|reu|form'] = $field_group;

  return $export;
}
