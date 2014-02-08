<?php

/**
 * @file
 * Definition of SevilletaContentResearchProjectMigration.
 * 
 * we only mapped the source project_description to the abstract target. We need
 * photos, vocabularies and the likes.
*/

class SevilletaContentResearchProjectMigration extends DeimsContentResearchProjectMigration {
  
  public function __construct(array $arguments) {
    parent::__construct($arguments);

/**
*
* DEST UNMIG
* field_images:title	Subfield: String to be used as the title value
* field_related_projects	Related projects (entityreference)  ENT REF TO ITSELF!
* 
* SOURCES
* 
* Each node has 2 figures: top and bottom,
* corresponding to   _proj_figure and _project_photo
* ALSO, a node has a strip of thumbnails _image, 
* displayed on the left
* 
* field_research_project_photo:description Photos subfield
* 
* --need work:
* 
* -featurize
*  field_research_project_sites	Research Sites NODE REF
*  field_research_project_data	Related Data Set  
* 
* -prepare() or prepareRow()
*  field_research_project_current	Ongoing
*  field_research_projects	Related Projects   THIS is to SELF
* 
* -i dont know: dont migrate, concatenate, etc?
*   field_research_project_sites_txt	Research Sites txt
*   field_research_project_pi_txt	Investigators Text
*   field_research_project_gallery	Gallery
**/


   $this->addFieldMapping('field_images','field_research_project_photo')
     ->sourceMigration('DeimsFile');
//     ->sourceMigration('DeimsFile')
//     ->description('Handled in prepareRow().');
   $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
   $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);

   //unsure whether this is OK.
   $this->addFieldMapping('field_images:title','field_research_proj_photos_txt');

/**
*    THis is many to one.  Some examples are at
*    https://drupal.org/comment/8386105#comment-8386105
*    
*    OR we featurize another field !!
* 
*    $this->addFieldMapping('field_images:title','field_research_proj_fig_txt');
* 
*    $this->addFieldMapping('field_images','field_research_proj_figure')
*      ->sourceMigration('DeimsFile')
*      ->description('Handled in prepareRow().');
*    $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
*    $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);
* 
*     $this->addFieldMapping('field_images', 'field_images')
*       ->sourceMigration('DeimsFile')
*       ->description('Handled in prepareRow().');
*     $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
*     $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);
**/

    $this->addFieldMapping('field_ongoing', 'field_research_project_current')
      ->description('Text to Boolean Handled in prepareRow().');
      
    // entityreference, people
    $this->addFieldMapping('field_related_people','field_research_project_invest')
      ->sourceMigration('DeimsContentPerson');


    // entity ref, projects   a 360 relation - this may have to be done manually.
    //          $this->addFieldMapping('field_related_projects','field_research_projects')
    //SELF        ->sourceMigration('Deims);
    
    // links
    $this->addFieldMapping('field_related_links','field_research_project_links');
    $this->addFieldMapping('field_related_links:title','field_research_project_links:title');

    //keywords
    $this->addFieldMapping('field_core_areas', '1')
      ->sourceMigration('DeimsTaxonomyCoreAreas');
    $this->addFieldMapping('field_core_areas:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_keywords', '9')
      ->sourceMigration('DeimsTaxonomyLTERControlled');
    $this->addFieldMapping('field_keywords:source_type')
      ->defaultValue('tid');

    $this->addUnmigratedDestinations(array(
      'field_images:language',
      'field_images:destination_dir',
      'field_images:destination_file',
      'field_images:file_replace',
      'field_images:source_dir',
      'field_images:urlencode',
      'field_images:alt',
      'field_keywords:create_term',
      'field_keywords:ignore_case',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
    if (!empty($row->{'field_research_project_current'})) {
      $row->field_research_project_current='TRUE'; // check  
    }

  }

  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
}
