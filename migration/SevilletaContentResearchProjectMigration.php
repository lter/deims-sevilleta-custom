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
* field_related_projects	Related projects (entityreference)  ENT REF TO ITSELF!
* 
* SOURCES
* 
* Each node has 2 figure fields : top and bottom, corresponding to   _proj_figure and _project_photo
* and a reference to a image field om a strip of thumbnails _image, displayed on the left, via a view.
* 
**/

  //related sites : depend on new content type and Research site migration
  $this->addFieldMapping('field_res_proj_rel_sites_ref','field_research_project_sites')
    ->sourceMigration('DeimsContentResearchSite');

  //related data: depend on new content type and migrated Data Sets. (do this last!)
  //
  $this->addFieldMapping('field_res_proj_rel_data_ref','field_research_project_data')
    ->sourceMigration('DeimsContentDataSet');


  // top-photo migration
   $this->addFieldMapping('field_images','field_research_project_photo')
     ->sourceMigration('DeimsFile');
//     ->sourceMigration('DeimsFile')
//     ->description('Handled in prepareRow().');
   $this->addFieldMapping('field_images:file_class')->defaultValue('MigrateFileFid');
   $this->addFieldMapping('field_images:preserve_files')->defaultValue(TRUE);

// side-photo migration
   $this->addFieldMapping('field_rp_figures_side','field_side_images')
     ->sourceMigration('DeimsFile')
     ->description('Handled in prepareRow().');
   $this->addFieldMapping('field_rp_figures_side:file_class')->defaultValue('MigrateFileFid');
   $this->addFieldMapping('field_rp_figures_side:preserve_files')->defaultValue(TRUE);


  // bottom-photo migration, needs new featurized content type
   $this->addFieldMapping('field_image_bottom','field_research_proj_figure')
     ->sourceMigration('DeimsFile');
//     ->sourceMigration('DeimsFile')
//     ->description('Handled in prepareRow().');
   $this->addFieldMapping('field_image_bottom:file_class')->defaultValue('MigrateFileFid');
   $this->addFieldMapping('field_image_bottom:preserve_files')->defaultValue(TRUE);

//   $this->addFieldMapping('field_images:title','field_research_proj_photos_txt');


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

    $this->addUnmigratedSources(array(
      'revision',
      'log',
      'revision_uid',
      'field_research_proj_figure:list',
      'field_research_project_links:attributes',
      'upload',
      'upload:description',
      'upload:list',
      'upload:weight',
      'field_research_project_photo:list',
      'field_research_project_photo:description',
      'field_research_project_sites_txt',
      'field_research_project_pi_txt',
    ));

    $this->addUnmigratedDestinations(array(
      'field_abstract:language',
      'field_images:language',
      'field_images:destination_dir',
      'field_images:destination_file',
      'field_images:file_replace',
      'field_images:source_dir',
      'field_images:urlencode',
      'field_images:alt',
      'field_images:title',
      'field_core_areas:create_term',
      'field_core_areas:ignore_case',
      'field_keywords:create_term',
      'field_keywords:ignore_case',
      'field_related_links:attributes',
      'field_related_links:language',
      'field_related_projects',   // chicken and egg problem self-ref
      'field_image_bottom:alt',
      'field_image_bottom:title',
      'field_image_bottom:language',
      'field_rp_figures_side:alt',
      'field_rp_figures_side:title',
      'field_rp_figures_side:language',
    ));
  }

  public function prepareRow($row) {
    parent::prepareRow($row);

   // Find all the scientific images that are refered by this research project node.

    $connection = Database::getConnection('default', $this->sourceConnection);
    $query = $connection->select('node', 'n');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->condition('n.type', 'scientific_image');
    $query->join('content_type_scientific_image', 'ctsi', 'n.vid = ctsi.vid');
    $query->condition('ctsi.nid', $row->field_research_project_image);
    $query->fields('ctsi', array('field_sci_image_fid'));
    $results = $query->execute()->fetchCol();
    if (!empty($results)) {
      $row->field_side_images = $results;
    }

    switch ($row->field_research_project_current) {
      case 'Yes':
        $row->field_research_project_current = 1;
        break;
      case 'No':
        $row->field_research_project_current = 0;
        break;
    }
  }

  public function prepare($node, $row) {
    // Remove any empty or illegal delta field values.
    EntityHelper::removeInvalidFieldDeltas('node', $node);
    EntityHelper::removeEmptyFieldValues('node', $node);
  }
}
