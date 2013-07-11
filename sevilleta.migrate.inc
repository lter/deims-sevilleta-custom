<?php

/**
 * @file
 * Migrate module integration for the Sevilleta module.
 */

/**
 * Implements hook_deims_migration_overrides().
 */
function sevilleta_deims_migration_overrides() {
  return array(
    'DeimsContentPerson' => 'SevilletaContentPersonMigration',
    'DeimsEntityOrganization' => 'SevilletaEntityOrganizationMigration',
  );
}
