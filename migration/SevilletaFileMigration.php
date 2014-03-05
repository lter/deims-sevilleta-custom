<?php

/**
 * @file
 * Definition of SevilletaFileMigration.
 */

class SevilletaFileMigration extends DeimsFileMigration {

  public function prepare($file, $row) {
    parent::prepare($file, $row);

    // Add data for scientific images.
    $connection = Database::getConnection('default', $this->sourceConnection);
    $query = $connection->select('node', 'n');
    $query->condition('n.type', 'scientific_image');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->fields('nr', array('title', 'body', 'format'));
    $query->join('content_type_scientific_image', 'ctsi', 'n.vid = ctsi.vid');
    $query->condition('ctsi.field_sci_image_fid', $row->fid);
    $query->fields('ctsi', array('field_sci_image_author_nid'));
    if ($result = $query->execute()->fetch()) {
      if (!empty($result->title)) {
        $file->filename = $result->title;
        $file->field_file_image_title_text[LANGUAGE_NONE][0] = array('value' => strip_tags($result->title), 'format' => $this->mapFormat($result->format));
      }
      if (!empty($result->body)) {
        $file->field_photo_caption[LANGUAGE_NONE][0] = array('value' => strip_tags($result->body), 'format' => $this->mapFormat($result->format));
      }
      if ($result->photographer_person = $this->handleSourceMigration('DeimsContentPerson', $result->field_sci_image_author_nid)) {
        $file->field_related_people[LANGUAGE_NONE][0] = array('target_id' => $result->photographer_person);
      }
    }

    // Add data for documents from the CCT "Download"

    $connection = Database::getConnection('default', $this->sourceConnection);
    $query = $connection->select('node', 'n');
    $query->condition('n.type', 'download');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->fields('nr', array('title'));
    $query->join('content_type_download', 'ctd', 'n.vid = ctd.vid');
    $query->condition('ctd.field_download_file_fid', $row->fid);
    $query->join('term_node', 'tn', 'tn.vid = ctd.vid');
    $query->fields('tn', array('tid'));

    if ($result = $query->execute()->fetch()) {
      if (!empty($result->title)) {
        $file->filename = $result->title;
      } 
      if ($result->newtid = $this->handleSourceMigration('SevilletaTaxonomyDownloads', $result->tid)) {
        $file->field_download_keywords[LANGUAGE_NONE][0] = array('tid' => $result->newtid );
      }
    }

  }
}
