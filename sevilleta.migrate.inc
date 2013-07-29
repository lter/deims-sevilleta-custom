<?php

/**
 * @file
 * Migrate module integration for the Sevilleta module.
 */

/**
 * Implements hook_migrate_api().
 */
function sevilleta_migrate_api() {
  $info = array(
    'api' => 2,
    'migrations' => array(
      'SevilletaContentImageGallery' => array(
        'class_name' => 'SevilletaContentImageGalleryMigration',
      ),
      'SevilletaContentMetCentral' => array(
        'class_name' => 'SevilletaContentMetCentralMigration',
      ),
      'SevilletaTaxonomyCategories' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Categories' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '5',
        'destination_vocabulary' => 'categories',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = DEIMS_D6_MIGRATION_GROUP;
  }

  return $info;
}

/**
 * Implements hook_deims_migration_overrides().
 */
function sevilleta_deims_migration_overrides() {
  return array(
    'DeimsContentDataSet' => array('class_name' => 'SevilletaContentDataSetMigration'),
    'DeimsContentPerson' => array('class_name' => 'SevilletaContentPersonMigration'),
    'DeimsEntityOrganization' => array('class_name' => 'SevilletaEntityOrganizationMigration'),
    'DeimsFile' => array('class_name' => 'SevilletaFileMigration'),
  );
}
