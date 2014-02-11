<?php

/**
 * @file
 * Definition of SevilletaContentResearchSiteMigration.
 */

class SevilletaContentResearchSiteMigration extends DeimsContentResearchSiteMigration {
  public function __construct(array $arguments) {
     parent::__construct($arguments);

//   the photos use a different field
     $this->removeFieldMapping('field_images');
     $this->addFieldMapping('field_images','field_research_site_image')
       ->sourceMigration('DeimsFile');

     // field_research_site_core to a featurized new field
     $this->addFieldMapping('field_is_core_site', 'field_research_site_core')
       ->description('Text to Boolean Handled in prepareRow().');
      
  }
  public function prepareRow($row) {
    parent::prepareRow($row);

    switch ($row->field_research_site_core) {
      case 'TRUE':
        $row->field_research_site_core = 1;
        break;
      case 'FALSE':
        $row->field_research_site_core = 0;
        break;
      default:
        $row->field_research_site_core = 0;
    }
  }
}
