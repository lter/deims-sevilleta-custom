<?php

/**
 * @file
 * Definition of SevilletaContentDataFileMigration.
 */

class SevilletaContentDataFileMigration extends DeimsContentDataFileMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

  }

  public function prepareRow($row) {

    // Fix double/single quotes in SEV.

    switch ($row->field_quote_character) {
      case 'double quotes':
        $row->field_quote_character = '"';
        break;
      case 'single quotes':
        $row->field_quote_character = "'";
        break;
    }

    parent::prepareRow($row);
  }
}
