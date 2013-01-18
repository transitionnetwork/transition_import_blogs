<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function transition_import_blogs_user_default_permissions() {
  $permissions = array();

  // Exported permission: create imported_blogs content
  $permissions['create imported_blogs content'] = array(
    'name' => 'create imported_blogs content',
    'roles' => array(),
  );

  // Exported permission: create imported_blogs_parent content
  $permissions['create imported_blogs_parent content'] = array(
    'name' => 'create imported_blogs_parent content',
    'roles' => array(),
  );

  // Exported permission: delete any imported_blogs content
  $permissions['delete any imported_blogs content'] = array(
    'name' => 'delete any imported_blogs content',
    'roles' => array(),
  );

  // Exported permission: delete any imported_blogs_parent content
  $permissions['delete any imported_blogs_parent content'] = array(
    'name' => 'delete any imported_blogs_parent content',
    'roles' => array(),
  );

  // Exported permission: delete own imported_blogs content
  $permissions['delete own imported_blogs content'] = array(
    'name' => 'delete own imported_blogs content',
    'roles' => array(),
  );

  // Exported permission: delete own imported_blogs_parent content
  $permissions['delete own imported_blogs_parent content'] = array(
    'name' => 'delete own imported_blogs_parent content',
    'roles' => array(),
  );

  return $permissions;
}
