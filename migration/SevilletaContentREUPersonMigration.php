<?php

/**
 * @file
 * Definition of SevilletaContentREUPersonMigration.
 */

class SevilletaContentREUPersonMigration extends DrupalNode6Migration {

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'reu',
      'destination_type' => 'reu',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    // Add our mappings.
    $this->addFieldMapping('field_reu_type','field_reu_type');
    $this->addFieldMapping('field_reu_mentor','field_reu_mentor')
     ->sourceMigration('DeimsContentPerson');
    $this->addFieldMapping('field_reu_year','field_reu_year');
    $this->addFieldMapping('field_reu_home_institution', 'field_reu_institution');
    $this->addFieldMapping('field_reu_abstract', 'field_abstract');

    $this->addFieldMapping('field_reu_presentation','field_reu_presentation')
      ->sourceMigration('DeimsFile');
    $this->addFieldMapping('field_reu_presentation:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_reu_presentation:preserve_files')->defaultValue(TRUE);

    $this->addFieldMapping('field_reu_data_set','field_reu_datasets')
      ->sourceMigration('DeimsContentDataSet');

    $this->addFieldMapping('field_images', 'field_reu_photo')
      ->sourceMigration('DeimsFile');
    $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);

    //may need to prepare the "name", as it is bunched up in the title.
    $this->addFieldMapping('field_name', 'name')
      ->description('field_name first handled in prepareRow()');

    $this->addFieldMapping('field_name:family', 'lastname')
      ->description('field_name last handled in prepareRow()');

    $this->addUnmigratedSources(array(
      'field_reu_major',
      'field_reu_website',
      'field_reu_website:title',
      'field_reu_website:attributes',
      'field_reu_photo:list',
      'field_reu_presentation:list',
      'field_abstract:list',
      'field_reu_year_applied',

    ));
    $this->addUnmigratedDestinations(array(
      'field_images:language',
      'field_images:alt',
      'field_images:title',
      'field_name:given',
      'field_name:middle',
      'field_name:generational',
      'field_name:credentials',
      'field_reu_abstract:language',
      'field_reu_presentation:language',
      'field_reu_home_institution:language',
      'field_reu_presentation:description',
      'field_reu_presentation:display',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);    
    $composed_name = explode(" ", $row->title);
    $row->lastname = $composed_name[1];
    $row->name = $composed_name[0];
  }

  public function prepare($node, $row) {
    // Force the auto_entitylabel module to leave $node->title alone.
    $node->auto_entitylabel_applied = TRUE;

    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }

}
