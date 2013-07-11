<?php

/**
 * @file
 * Migrate module integration for the Sevilleta module.
 */

/**
 * Implements hook_migrate_api().
 */
function sevilleta_migrate_api() {
  // This doesn't really have anything in it. This is mostly used so that
  // Migrate will auto-re-register migrations when this module is enabled.
  return array('api' => 2);
}

/**
 * Implements hook_deims_migration_overrides().
 */
function sevilleta_deims_migration_overrides() {
  return array(
    'DeimsContentPerson' => 'SevilletaContentPersonMigration',
    'DeimsEntityOrganization' => 'SevilletaEntityOrganizationMigration',
  );
}
