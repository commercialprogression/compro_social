<?php
/**
 * @file
 * compro_social.features.inc
 */

/**
 * Implements hook_eck_entity_type_info().
 */
function compro_social_eck_entity_type_info() {
  $items = array(
    'social' => array(
      'name' => 'social',
      'label' => 'Social',
      'properties' => array(),
    ),
  );
  return $items;
}
