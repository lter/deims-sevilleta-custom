<?php

/**
* @file
* Definition of SevilletaStoryMigration.
*/

class SevilletaStoryMigration extends DrupalNode6Migration {

  protected $dependencies = array();

  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'spatial_data',
      'destination_type' => 'spatial_data',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
  }

  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
   
   $this->addFieldMapping('field_sev_tags', '3')
       ->sourceMigration('SevilletaTaxonomyArticles');
       ->arguments(array('source_type' => 'tid'));
}
