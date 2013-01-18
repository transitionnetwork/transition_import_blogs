<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function transition_import_blogs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function transition_import_blogs_node_info() {
  $items = array(
    'imported_blogs' => array(
      'name' => t('Imported Blogs'),
      'module' => 'features',
      'description' => t('A <em>Imported Blogs</em> that comes from an external source - other Transition Initiatives not hosted here or related partners. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'imported_blogs_parent' => array(
      'name' => t('Imported Blogs - parent'),
      'module' => 'features',
      'description' => t('The parent for generating imported blogs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
