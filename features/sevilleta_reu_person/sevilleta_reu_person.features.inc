<?php
/**
 * @file
 * sevilleta_reu_person.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sevilleta_reu_person_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sevilleta_reu_person_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sevilleta_reu_person_node_info() {
  $items = array(
    'reu' => array(
      'name' => t('Reu Person'),
      'base' => 'node_content',
      'description' => t('A person associated with the REU program'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
