<?php
/**
 * @file
 * sevilleta_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sevilleta_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 253,
    2 => 251,
    3 => 250,
    4 => 249,
    5 => 245,
    6 => 241,
    7 => 127,
    8 => 126,
    9 => 125,
    10 => 124,
    11 => 123,
    12 => 122,
    13 => 121,
    14 => 117,
    15 => 112,
    16 => 63,
    17 => 62,
    18 => 61,
    19 => 60,
    20 => 59,
    21 => 58,
    22 => 56,
    23 => 44,
    24 => 42,
    25 => 31,
    26 => 30,
    27 => 29,
    28 => 24,
    29 => 23,
    30 => 22,
    31 => 21,
    32 => 15,
    33 => 14,
    34 => 13,
    35 => 12,
    36 => 11,
    37 => 8,
    38 => 7,
    39 => 6,
    40 => 5,
    41 => 3,
    42 => 2,
    43 => 1,
  );
  $export['menu_masks'] = $strongarm;

  return $export;
}
