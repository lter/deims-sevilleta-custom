<?php

/**
 * @file
 * Definition of SevilletaStoryMigration.
 */

class SevilletaContentStoryMigration extends DeimsContentStoryMigration {

    public function __construct(array $arguments) {
        parent::__construct($arguments);

//    preserves the terms from the D6 Story nodes by moving
//    the relationshop to the Articles
//    The articles vocabulary (vid=3) was migrated to the
//    DEIMS D7 Vocabulary "Section" already.

        $this->addFieldMapping('field_section', '3')
          ->sourceMigration('SevilletaTaxonomyArticles')
        $this->addFieldMapping('field_section:source_type')
          ->defaultValue('tid');
       
    }
}
