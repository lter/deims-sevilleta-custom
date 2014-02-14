<?php
/**
 * @file
 * sevilleta_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sevilleta_menu_menu_default_menu_links() {
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
    'weight' => '-47',
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
    'weight' => '-50',
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
  // Exported menu link: main-menu:node/29
  $menu_links['main-menu:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Eligibility Requirements',
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
    'parent_path' => 'node/96',
  );
  // Exported menu link: main-menu:node/71
  $menu_links['main-menu:node/71'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/71',
    'router_path' => 'node/%',
    'link_title' => 'Housing',
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
    'parent_path' => 'node/96',
  );
  // Exported menu link: main-menu:node/74
  $menu_links['main-menu:node/74'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/74',
    'router_path' => 'node/%',
    'link_title' => 'Mentor/Mentee Contract',
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
    'weight' => '-46',
    'parent_path' => 'node/96',
  );
  // Exported menu link: main-menu:node/79
  $menu_links['main-menu:node/79'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/79',
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
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/80
  $menu_links['main-menu:node/80'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/80',
    'router_path' => 'node/%',
    'link_title' => 'Conceptual Model',
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
  // Exported menu link: main-menu:node/81
  $menu_links['main-menu:node/81'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/81',
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
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/82
  $menu_links['main-menu:node/82'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/82',
    'router_path' => 'node/%',
    'link_title' => 'Biotic Responses',
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
  // Exported menu link: main-menu:node/86
  $menu_links['main-menu:node/86'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/86',
    'router_path' => 'node/%',
    'link_title' => 'Ecosystems Processes',
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
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/89
  $menu_links['main-menu:node/89'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/89',
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
    'expanded' => '1',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:node/93
  $menu_links['main-menu:node/93'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/93',
    'router_path' => 'node/%',
    'link_title' => 'Application Information',
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
    'parent_path' => 'node/96',
  );
  // Exported menu link: main-menu:node/94
  $menu_links['main-menu:node/94'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/94',
    'router_path' => 'node/%',
    'link_title' => 'Project Ideas',
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
    'weight' => '-44',
    'parent_path' => 'node/96',
  );
  // Exported menu link: main-menu:node/96
  $menu_links['main-menu:node/96'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/96',
    'router_path' => 'node/%',
    'link_title' => 'REU Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'node/89',
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
    'weight' => '-45',
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
    'weight' => '-48',
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
    'weight' => '-45',
    'parent_path' => 'node/96',
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
    'weight' => '-43',
    'parent_path' => 'node/96',
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
    'weight' => '-43',
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
    'weight' => '-42',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Abiotic Drivers');
  t('Application Information');
  t('Biotic Responses');
  t('Completed Research');
  t('Conceptual Model');
  t('Contact');
  t('Ecosystems Processes');
  t('Eligibility Requirements');
  t('Housing');
  t('Library');
  t('Login');
  t('Logout');
  t('Mentor/Mentee Contract');
  t('Mentors');
  t('Monthly Meteorological Reports');
  t('Opportunities');
  t('Organizing  Framework');
  t('Power Search Data Set');
  t('Project Ideas');
  t('Publications');
  t('REU Participants');
  t('REU Program');
  t('Research');
  t('Research sites');
  t('Researchers');


  return $menu_links;
}
