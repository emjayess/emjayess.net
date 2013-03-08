<?php
/**
 * @file
 * unsupport_ie.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function unsupport_ie_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chrome_frame_mode';
  $strongarm->value = 'inline';
  $export['chrome_frame_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chrome_frame_prompt';
  $strongarm->value = 'all';
  $export['chrome_frame_prompt'] = $strongarm;

  return $export;
}
