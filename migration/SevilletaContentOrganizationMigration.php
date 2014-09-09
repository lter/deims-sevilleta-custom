<?php

/**
 * @file
 * Definition of SevilletaContentOrganizationMigration.
 */

class SevilletaContentOrganizationMigration extends DeimsContentOrganizationMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // SEV uses a link field for field_person_organization that has a title
    // property, rather than a text field. So we need to rebuild the source
    // query.
    $query = $this->connection->select('content_type_person', 'ctp');
    $query->fields('ctp', array('nid', 'field_person_organization_title', 'field_person_organization_url'));
    $query->condition('ctp.field_person_organization_title', '', '<>');
    $query->groupBy('field_person_organization_title');
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Remap the organization title to the link field's title value.
    $this->removeFieldMapping('title');
    $this->removeFieldMapping('field_url');
    $this->addFieldMapping('title', 'field_person_organization_title');
    $this->addFieldMapping('field_url', 'field_person_organization_url');
  }
}
