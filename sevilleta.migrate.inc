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
      'SevilletaContentSectionCentral' => array(
        'class_name' => 'SevilletaContentSectionMigration',
      ),
      'SevilletaContentKeyFindings' => array(
        'class_name' => 'SevilletaContentKeyFindingsMigration',
      ),
      'SevilletaContentFAQ' => array(
        'class_name' => 'SevilletaContentFAQMigration',
      ),
      'SevilletaContentSlide' => array(
        'class_name' => 'SevilletaContentSlideMigration',
      ),
      'SevilletaContentSpatialData' => array(
        'class_name' => 'SevilletaContentSpatialDataMigration',
      ),
      'SevilletaContentREUPerson' => array(
        'class_name' => 'SevilletaContentREUPersonMigration',
      ),
      // Migrates the "SEV D6" taxonomy article" to the D7 "section" container.
      'SevilletaTaxonomyArticles' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Articles' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
         // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '3',
        'destination_vocabulary' => 'section',
      ),
      'SevilletaTaxonomyDownloads' => array(
         'class_name' => 'DrupalTerm6Migration',
         'description' => "Taxonomy migration for the 'Downloads' vocabulary.",
         'source_connection' => 'drupal6',
         'source_version' => 6,
      // @todo Make this vocabulary source ID automatic from the D6 database.
         'source_vocabulary' => '2',
         'destination_vocabulary' => 'downloads',
       ),
      // this go into catgories
      'SevilletaTaxonomyCategories' => array(
        'class_name' => 'DrupalTerm6Migration',
        'description' => "Taxonomy migration for the 'Categories' vocabulary.",
        'source_connection' => 'drupal6',
        'source_version' => 6,
        // @todo Make this vocabulary source ID automatic from the D6 database.
        'source_vocabulary' => '5',
        'destination_vocabulary' => 'categories',
      ),
      'SevilletaTaxonomySpatialData' => array(
         'class_name' => 'DrupalTerm6Migration',
         'description' => "Taxonomy migration for the 'Spatial Data' vocabulary.",
         'source_connection' => 'drupal6',
         'source_version' => 6,
      // @todo Make this vocabulary source ID automatic from the D6 database.
         'source_vocabulary' => '11',
         'destination_vocabulary' => 'spatial_data',
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
    'DeimsContentDataFile' => array('class_name' => 'SevilletaContentDataFileMigration'), 
    'DeimsContentOrganization' => array('class_name' => 'SevilletaContentOrganizationMigration'),
    'DeimsContentPerson' => array('class_name' => 'SevilletaContentPersonMigration'),
    'DeimsFile' => array('class_name' => 'SevilletaFileMigration'),
    'DeimsContentStory' => array('class_name' => 'SevilletaContentStoryMigration'),
    'DeimsContentResearchProject' => array('class_name' => 'SevilletaContentResearchProjectMigration'),
    'DeimsContentResearchSite' => array('class_name' => 'SevilletaContentResearchSiteMigration'),
  );
}
