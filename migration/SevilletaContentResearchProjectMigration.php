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

/*
DEST DONE
field_images
field_images:preserve_files	Option: Boolean indicating whether files should be preserved or deleted on rollback
field_related_links	Related links (link_field)
field_related_links:title	Subfield: The link title attribute
field_related_people	Investigators (entityreference)

DEST UNMIG
field_related_links:attributes	Subfield: The attributes for this link
field_related_links:language	Subfield: The language for the field
field_images:alt	Subfield: String to be used as the alt value
field_images:title	Subfield: String to be used as the title value
field_images:file_replace	Option: Value of $replace in that file function. Defaults to FILE_EXISTS_RENAME.
field_images:source_dir	Subfield: Path to source file.
field_images:destination_dir	Subfield: Path within Drupal files directory to store file
field_images:destination_file	Subfield: Path within destination_dir to store the file.
field_images:urlencode	Option: Encode all segments of the incoming path (defaults to TRUE).
field_related_projects	Related projects (entityreference)  ENT REF TO ITSELF!

SOURCES

(each node has 2 figures, top and bottom,
corresponding to      _proj_figure and _project_photo
and ALSO, has a strip of thumbnails _image, on the left)

field_research_project_photo:description	Photos subfield

DONE SOURCES

 field_research_project_sites	Research Sites NODE REF
  field_research_project_current	Ongoing
  1	Core Areas
  9	LTER Controlled Vocabulary
  field_research_project_links	Related Links
  field_research_project_links:title	Related Links subfield
  field_research_project_invest	Investigators 
  field_research_project_image	image  (the images on the side of trhe project, shown as thumbnails)
field_research_proj_figure	Figure    (
field_research_proj_figure:list	Figure subfield
field_research_project_photo	Photos
field_research_project_photo:list	Photos subfield

 UNMG SOURCES
  field_research_project_links:attributes	Related Links subfield  
  field_research_project_sites_txt	Research Sites txt
  field_research_project_pi_txt	Investigators Text
  field_research_project_gallery	Gallery
  field_research_project_data	Related Data Set  I WOULD NEED TO FEATURIZE IT !!!
  field_research_projects	Related Projects   THIS is to SELF
  field_research_proj_figure:list	Figure subfield
  field_research_project_photo:list	Photos subfield

   WE DONT HAVE RELATED SITES -- would need to featurize --
   $this->addFieldMapping('field_research_project_sites'

  MAY need to concat free text fields? or are those unused?
*/


   $this->addFieldMapping('field_images','field_research_project_photo')
     ->sourceMigration('DeimsFile')
     ->description('Handled in prepareRow().');
   $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
   $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);

   //unsure whether this is OK.
   $this->addFieldMapping('field_images:title','field_research_proj_photos_txt');
/*
   THis is many to one.  Some examples are at
   https://drupal.org/comment/8386105#comment-8386105
   
   OR we featurize another field !!

   $this->addFieldMapping('field_images:title','field_research_proj_fig_txt');


   $this->addFieldMapping('field_images','field_research_proj_figure')
     ->sourceMigration('DeimsFile')
     ->description('Handled in prepareRow().');
   $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
   $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);

    $this->addFieldMapping('field_images', 'field_images')
      ->sourceMigration('DeimsFile')
      ->description('Handled in prepareRow().');
    $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);
*/

    // this is text to boolean, may have to 'prepare'
    $this->addFieldMapping('field_ongoing', 'field_research_project_current');

    // entityreference, people
    $this->addFieldMapping('field_related_people','field_research_project_invest')
      ->sourceMigration('DeimsContentPerson');


    // entity ref, projects   a 360 relation!
    //          $this->addFieldMapping('field_related_projects','field_research_projects')
    //SELF        ->sourceMigration('Deims);
    
    // links
    $this->addFieldMapping('field_related_links','field_research_project_links');
    $this->addFieldMapping('field_related_links:title','field_research_project_links:title');

    //keywords
    this->addFieldMapping('field_core_areas', '1')
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
  }

  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
}
