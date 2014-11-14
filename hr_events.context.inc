<?php
/**
 * @file
 * hr_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_events_space';
  $context->description = 'Events page per space';
  $context->tag = 'Events';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hr_events_calendar' => 'hr_events_calendar',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Events page per space');
  $export['hr_events_space'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_events_space_list';
  $context->description = 'Events list per space';
  $context->tag = 'Events';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hr_events:list' => 'hr_events:list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-hr_events-list' => array(
          'module' => 'views',
          'delta' => '-exp-hr_events-list',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'current_search-hr_current_search' => array(
          'module' => 'current_search',
          'delta' => 'hr_current_search',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-gPcXdpo5VXMKRnf2peK1lJwTKU9F3IAh' => array(
          'module' => 'facetapi',
          'delta' => 'gPcXdpo5VXMKRnf2peK1lJwTKU9F3IAh',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-sp6ljjoCBKBVws0uia1DCKcDmln6TeUq' => array(
          'module' => 'facetapi',
          'delta' => 'sp6ljjoCBKBVws0uia1DCKcDmln6TeUq',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-w7XuwcVu1l6DNu4aCenMydri96KBLxYh' => array(
          'module' => 'facetapi',
          'delta' => 'w7XuwcVu1l6DNu4aCenMydri96KBLxYh',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-9ew5LitJZ6pWU71gbHp1XW9oAOBwV11z' => array(
          'module' => 'facetapi',
          'delta' => '9ew5LitJZ6pWU71gbHp1XW9oAOBwV11z',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-hSnBts4Ap4yrSjQu7LKhsVdrHxAjyYKU' => array(
          'module' => 'facetapi',
          'delta' => 'hSnBts4Ap4yrSjQu7LKhsVdrHxAjyYKU',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v' => array(
          'module' => 'facetapi',
          'delta' => '9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-ufw6LRur6Vw9VcpuZ4VayzbcSrlX1VMS' => array(
          'module' => 'facetapi',
          'delta' => 'ufw6LRur6Vw9VcpuZ4VayzbcSrlX1VMS',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Events list per space');
  $export['hr_events_space_list'] = $context;

  return $export;
}
