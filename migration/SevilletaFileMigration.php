<?php

/**
 * @file
 * Definition of SevilletaFileMigration.
 */

class SevilletaContentDataSetMigration extends DeimsFileMigration {

  public function prepare($file, $row) {
    // Add data for scientific images.
    $query = db_select('node', 'n');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->fields('nr', array('title', 'body', 'format'));
    $query->join('content_type_scientific_image', 'ctsi', 'n.vid = ctsi.vid');
    $query->condition('ctsi.field_sci_image_fid', $row->fid);
    $query->fields('ctsi', array('field_sci_image_author_nid'));
    if ($result = $query->execute()->fetchCol()) {
      $file->filename = $result->title;
      $file->field_photo_caption[LANGUAGE_NONE][0] = array('value' => $result->body, 'format' => $this->mapFormat($result->format));
      if ($photographer_person = $this->handleSourceMigration('DeimsContentPerson', $result->field_sci_image_author_nid)) {
        $file->field_related_people[LANGUAGE_NONE][0] = array('target_id' => $photographer_person);
      }
    }
  }
}
