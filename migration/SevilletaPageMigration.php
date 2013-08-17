<?php

/**
* @file
* Definition of SevilletaPageMigration.
*/

class SevilletaPageMigration extends DeimsContentPageMigration {

    public function __construct(array $arguments) {
    parent::__construct($arguments);

      $this->addFieldMapping('field_sev_tags', '3')
            ->sourceMigration('SevilletaTaxonomyArticles');
      $this->addFieldMapping('field_core_areas:source_type')
            ->defaultValue('tid');
    }
}