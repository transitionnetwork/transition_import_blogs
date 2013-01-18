<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _transition_import_blogs_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_feeds_importer_default().
 */
function _transition_import_blogs_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'transition_blogs_importer';
  $feeds_importer->config = array(
    'name' => 'Transition blogs importer',
    'description' => 'import transition blogs',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'imported_blogs',
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          '0' => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          '1' => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          '2' => array(
            'source' => 'url',
            'target' => 'field_original_url:url',
            'unique' => FALSE,
          ),
          '3' => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 1,
          ),
        ),
      ),
    ),
    'content_type' => 'imported_blogs_parent',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['transition_blogs_importer'] = $feeds_importer;
  return $export;
}
