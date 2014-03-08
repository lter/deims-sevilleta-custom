<?php
/**
 * @file
 * sevilleta_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sevilleta_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:about/all_research_sites
  $menu_links['main-menu:about/all_research_sites'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/all_research_sites',
    'router_path' => 'about/all_research_sites',
    'link_title' => 'All Locations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'about/sites',
  );
  // Exported menu link: main-menu:about/sites
  $menu_links['main-menu:about/sites'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/sites',
    'router_path' => 'about/sites',
    'link_title' => 'Research sites',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:biblio
  $menu_links['main-menu:biblio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'biblio',
    'router_path' => 'biblio',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:data
  $menu_links['main-menu:data'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'data',
    'router_path' => 'data',
    'link_title' => 'Data',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:document-categories
  $menu_links['main-menu:document-categories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'document-categories',
    'router_path' => 'document-categories',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:documents/Annual Reports
  $menu_links['main-menu:documents/Annual Reports'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents/Annual Reports',
    'router_path' => 'documents/Annual Reports',
    'link_title' => 'Annual Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'document-categories',
  );
  // Exported menu link: main-menu:documents/Data Management
  $menu_links['main-menu:documents/Data Management'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents/Data Management',
    'router_path' => 'documents/Data Management',
    'link_title' => 'Data Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'document-categories',
  );
  // Exported menu link: main-menu:documents/Field Guides
  $menu_links['main-menu:documents/Field Guides'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents/Field Guides',
    'router_path' => 'documents/Field Guides',
    'link_title' => 'Field Guides',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'document-categories',
  );
  // Exported menu link: main-menu:documents/Proposals
  $menu_links['main-menu:documents/Proposals'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents/Proposals',
    'router_path' => 'documents/proposals',
    'link_title' => 'Proposals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'document-categories',
  );
  // Exported menu link: main-menu:documents/Research Permits
  $menu_links['main-menu:documents/Research Permits'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents/Research Permits',
    'router_path' => 'documents/Research Permits',
    'link_title' => 'Permits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'document-categories',
  );
  // Exported menu link: main-menu:documents/Site Review Documents
  $menu_links['main-menu:documents/Site Review Documents'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents/Site Review Documents',
    'router_path' => 'documents/Site Review Documents',
    'link_title' => 'Site Review',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'document-categories',
  );
  // Exported menu link: main-menu:gis/vector
  $menu_links['main-menu:gis/vector'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gis/vector',
    'router_path' => 'gis/vector',
    'link_title' => 'GIS Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '25',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:image-galleries
  $menu_links['main-menu:image-galleries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'image-galleries',
    'router_path' => 'image-galleries',
    'link_title' => 'Image Galleries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:met-central
  $menu_links['main-menu:met-central'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'met-central',
    'router_path' => 'met-central',
    'link_title' => 'Monthly Meteorological Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/6241
  $menu_links['main-menu:node/6241'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6241',
    'router_path' => 'node/%',
    'link_title' => 'Organizing  Framework',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/6243
  $menu_links['main-menu:node/6243'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6243',
    'router_path' => 'node/%',
    'link_title' => 'Abiotic Drivers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/6251
  $menu_links['main-menu:node/6251'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6251',
    'router_path' => 'node/%',
    'link_title' => 'Opportunities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:people
  $menu_links['main-menu:people'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people',
    'router_path' => 'people',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:people/researchers
  $menu_links['main-menu:people/researchers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/researchers',
    'router_path' => 'people/researchers',
    'link_title' => 'Researchers',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'people',
  );
  // Exported menu link: main-menu:posters
  $menu_links['main-menu:posters'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'posters',
    'router_path' => 'posters',
    'link_title' => 'Posters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:posters/2006-LTER-All-Scientists-Meeting
  $menu_links['main-menu:posters/2006-LTER-All-Scientists-Meeting'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'posters/2006-LTER-All-Scientists-Meeting',
    'router_path' => 'posters/2006-LTER-All-Scientists-Meeting',
    'link_title' => '2006 ASM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'posters',
  );
  // Exported menu link: main-menu:posters/2009-LTER-All-Scientists-Meeting
  $menu_links['main-menu:posters/2009-LTER-All-Scientists-Meeting'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'posters/2009-LTER-All-Scientists-Meeting',
    'router_path' => 'posters/2009-LTER-All-Scientists-Meeting',
    'link_title' => '2009 ASM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'posters',
  );
  // Exported menu link: main-menu:posters/2012-LTER-All-Scientits-Meeting
  $menu_links['main-menu:posters/2012-LTER-All-Scientits-Meeting'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'posters/2012-LTER-All-Scientits-Meeting',
    'router_path' => 'posters',
    'link_title' => '2012 ASM',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'posters',
  );
  // Exported menu link: main-menu:power-search/data-set
  $menu_links['main-menu:power-search/data-set'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'power-search/data-set',
    'router_path' => 'power-search/data-set',
    'link_title' => 'Power Search Data Set',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'data',
  );
  // Exported menu link: main-menu:presentations
  $menu_links['main-menu:presentations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'presentations',
    'router_path' => 'presentations',
    'link_title' => 'Presentations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '49',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:presentations/2006-Sevilleta-LTER-Research-Symposium
  $menu_links['main-menu:presentations/2006-Sevilleta-LTER-Research-Symposium'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'presentations/2006-Sevilleta-LTER-Research-Symposium',
    'router_path' => 'presentations/2006-Sevilleta-LTER-Research-Symposium',
    'link_title' => '2006 Sev Symposium',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'presentations',
  );
  // Exported menu link: main-menu:presentations/2007-Sevilleta-LTER-Research-Symposium
  $menu_links['main-menu:presentations/2007-Sevilleta-LTER-Research-Symposium'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'presentations/2007-Sevilleta-LTER-Research-Symposium',
    'router_path' => 'presentations/2007-Sevilleta-LTER-Research-Symposium',
    'link_title' => '2007 Sev Symposium',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'presentations',
  );
  // Exported menu link: main-menu:presentations/2008-Regional-LTER-Research-Symposium
  $menu_links['main-menu:presentations/2008-Regional-LTER-Research-Symposium'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'presentations/2008-Regional-LTER-Research-Symposium',
    'router_path' => 'presentations/2008-Regional-LTER-Research-Symposium',
    'link_title' => '2008 Regional Symposium',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'presentations',
  );
  // Exported menu link: main-menu:presentations/2009-NSF-Site-Visit:-SEV-LTER-PI-Presentations
  $menu_links['main-menu:presentations/2009-NSF-Site-Visit:-SEV-LTER-PI-Presentations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'presentations/2009-NSF-Site-Visit:-SEV-LTER-PI-Presentations',
    'router_path' => 'presentations/2009-NSF-Site-Visit:-SEV-LTER-PI-Presentations',
    'link_title' => '2009 NSF SEV PIs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'presentations',
  );
  // Exported menu link: main-menu:projects
  $menu_links['main-menu:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:projects_complete
  $menu_links['main-menu:projects_complete'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects_complete',
    'router_path' => 'projects_complete',
    'link_title' => 'Completed Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'projects',
  );
  // Exported menu link: main-menu:reu/mentors
  $menu_links['main-menu:reu/mentors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'reu/mentors',
    'router_path' => 'reu/mentors',
    'link_title' => 'Mentors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/6251',
  );
  // Exported menu link: main-menu:reu/participants
  $menu_links['main-menu:reu/participants'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'reu/participants',
    'router_path' => 'reu/participants',
    'link_title' => 'REU Participants',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/6251',
  );
  // Exported menu link: main-menu:user/login
  $menu_links['main-menu:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: main-menu:user/logout
  $menu_links['main-menu:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('2006 ASM');
  t('2006 Sev Symposium');
  t('2007 Sev Symposium');
  t('2008 Regional Symposium');
  t('2009 ASM');
  t('2009 NSF SEV PIs');
  t('2012 ASM');
  t('Abiotic Drivers');
  t('All Locations');
  t('Annual Reports');
  t('Completed Research');
  t('Contact');
  t('Data');
  t('Data Management');
  t('Documents');
  t('Field Guides');
  t('GIS Data');
  t('Image Galleries');
  t('Library');
  t('Login');
  t('Logout');
  t('Mentors');
  t('Monthly Meteorological Reports');
  t('Opportunities');
  t('Organizing  Framework');
  t('Permits');
  t('Posters');
  t('Power Search Data Set');
  t('Presentations');
  t('Proposals');
  t('Publications');
  t('REU Participants');
  t('Research');
  t('Research sites');
  t('Researchers');
  t('Site Review');


  return $menu_links;
}
