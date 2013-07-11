<?php

/**
 * @file
 * Definition of SevilletaContentDataSetMigration.
 */

class SevilletaContentDataSetMigration extends DeimsContentDataSetMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addUnmigratedSources(array(
      'field_dataset_issignature',
      'field_dataset_station_acronym',
      'field_dataset_sevid',
      'field_dataset_restricted',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);

    if (empty($row->field_dataset_id_value) && !empty($row->field_dataset_sevid_value)) {
      $row->field_dataset_id_value = $row->field_dataset_sevid_value;
    }
  }
}
