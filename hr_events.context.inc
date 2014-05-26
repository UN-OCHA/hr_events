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
  $context->name = 'hr_event';
  $context->description = 'On event page';
  $context->tag = 'Events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'hr_event' => 'hr_event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-hr_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-hr_search-page',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
    'disable_context' => array(
      'disabled' => array(
        'hr_space_menu' => 'hr_space_menu',
        'within_space' => 'within_space',
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('On event page');
  $export['hr_event'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_events_space';
  $context->description = 'Events page per space';
  $context->tag = 'Events';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hr_events:calendar' => 'hr_events:calendar',
        'hr_events:master' => 'hr_events:master',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-hr_events-master' => array(
          'module' => 'views',
          'delta' => '-exp-hr_events-master',
          'region' => 'branding',
          'weight' => '-9',
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
        'mefibs-mefibs_hr_events--master--sorts' => array(
          'module' => 'mefibs',
          'delta' => 'mefibs_hr_events--master--sorts',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
      ),
    ),
  );
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
        'mefibs-mefibs_hr_events--list--sorts' => array(
          'module' => 'mefibs',
          'delta' => 'mefibs_hr_events--list--sorts',
          'region' => 'sidebar_first',
          'weight' => '-4',
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
