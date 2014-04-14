<?php
/**
 * @file
 * hr_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function hr_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hr_space_events';
  $page->task = 'page';
  $page->admin_title = 'Space Events';
  $page->admin_description = '';
  $page->path = 'node/%node/events';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'List',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
      'keyword' => 'node',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hr_space_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hr_space_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => array(
        'region_title' => '',
      ),
      'top' => array(
        'region_title' => '',
      ),
      'contentmain' => array(
        'region_title' => '',
      ),
    ),
    'bottom' => array(
      'style' => 'naked',
    ),
    'top' => array(
      'style' => 'bootstrap_styles:tabs',
    ),
    'middle' => array(
      'style' => 'bootstrap_styles:tabs',
    ),
    'contentmain' => array(
      'style' => 'bootstrap_styles:tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '75dbaa3f-7b89-459d-aca5-67bcbce6180c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-42379ec3-1ed4-4d09-81a0-6ec2129fb105';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_events-calendar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Calendar',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '42379ec3-1ed4-4d09-81a0-6ec2129fb105';
    $display->content['new-42379ec3-1ed4-4d09-81a0-6ec2129fb105'] = $pane;
    $display->panels['contentmain'][0] = 'new-42379ec3-1ed4-4d09-81a0-6ec2129fb105';
    $pane = new stdClass();
    $pane->pid = 'new-d3fb5c9d-4b94-416b-b84a-114c83eb63e6';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_events-list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'List',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd3fb5c9d-4b94-416b-b84a-114c83eb63e6';
    $display->content['new-d3fb5c9d-4b94-416b-b84a-114c83eb63e6'] = $pane;
    $display->panels['contentmain'][1] = 'new-d3fb5c9d-4b94-416b-b84a-114c83eb63e6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hr_space_events'] = $page;

  return $pages;

}
