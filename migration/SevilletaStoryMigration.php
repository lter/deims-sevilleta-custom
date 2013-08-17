<?php

/**
* @file
* Definition of SevilletaStoryMigration.
*/

class SevilletaStoryMigration extends DeimsContentStoryMigration {

    public function __construct(array $arguments) {
    parent::__construct($arguments);

      $this->addFieldMapping('field_sev_tags', '3')
            ->sourceMigration('SevilletaTaxonomyArticles');
            ->arguments(array('source_type' => 'tid'));
    }
}
