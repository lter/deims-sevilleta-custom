<?php

/**
 * @file
 * Definition of SevilletaContentKeyFindingsMigration.
 */

class SevilletaContentKeyFindingsMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    $arguments += array(
      'description' => '',
      'source_connection' => 'drupal6',
      'source_version' => 6,
      'source_type' => 'key_findings',
      'destination_type' => 'article',
      'user_migration' => 'DeimsUser',
    );

    parent::__construct($arguments);

    $this->addFieldMapping('field_section')
      ->defaultValue('Key Findings');
    $this->addFieldMapping('field_section:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_related_people', 'field_keyfind_person_ref')
      ->sourceMigration('DeimsContentPerson');

    $this->addUnmigratedSources(array(
      'field_keyfind_biblio_ref',
    ));

    $this->addUnmigratedDestinations(array(
      'field_article_date:timezone',
      'field_article_date:rrule',
      'field_article_date:to',
      'field_files',
      'field_files:file_class',
      'field_files:language',
      'field_files:preserve_files',
      'field_files:destination_dir',
      'field_files:destination_file',
      'field_files:file_replace',
      'field_files:source_dir',
      'field_files:urlencode',
      'field_files:description',
      'field_files:display',
      'field_keywords',
      'field_keywords:source_type',
      'field_keywords:create_term',
      'field_keywords:ignore_case',
      'field_related_publications',
      'field_section:source_type',
      'field_section:ignore_case',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
  }

  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
}
