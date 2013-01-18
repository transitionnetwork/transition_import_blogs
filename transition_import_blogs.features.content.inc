<?php

/**
 * Implementation of hook_content_default_fields().
 */
function transition_import_blogs_content_default_fields() {
  $fields = array();

  // Exported field: field_importsource
  $fields['imported_blogs-field_importsource'] = array(
    'field_name' => 'field_importsource',
    'type_name' => 'imported_blogs',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'movement|Transition Movement
partner|Transition Partner
voices|Transition Voices',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Source',
      'weight' => '-4',
      'description' => '<p>Please choose the most suitable source for this Blog</p>
<ul><li><strong>Transition Movement</strong>: Anything from the Transition movement.</li>
<li><strong>Transition Partner</strong>: From the wider web of partners.</li>
<li><strong>Transition Voices</strong>: Respected bloggers and other voices around the web.</li></ul>',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_original_url
  $fields['imported_blogs-field_original_url'] = array(
    'field_name' => 'field_original_url',
    'type_name' => 'imported_blogs',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'url',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'url',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Original article',
      'weight' => '1',
      'description' => 'The original source of this article.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_importsource
  $fields['imported_blogs_parent-field_importsource'] = array(
    'field_name' => 'field_importsource',
    'type_name' => 'imported_blogs_parent',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'movement|Transition Movement
partner|Transition Partner
voices|Transition Voices',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Source',
      'weight' => '-4',
      'description' => '<p>Please choose the most suitable source for this News story:</p>
<ul><li><strong>Transition Movement</strong>: Anything from the Transition movement.</li>
<li><strong>Transition Partner</strong>: From the wider web of partners.</li>
<li><strong>Transition Voices</strong>: Respected bloggers and other voices around the web.</li></ul>',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_themes
  $fields['imported_blogs_parent-field_themes'] = array(
    'field_name' => 'field_themes',
    'type_name' => 'imported_blogs_parent',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'topic' => 'topic',
      'blog' => 0,
      'initiative_event' => 0,
      'initiative_group' => 0,
      'movement_news' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_blogs' => 0,
      'imported_blogs_parent' => 0,
      'imported_news' => 0,
      'imported_news_parent' => 0,
      'initiative_event_external' => 0,
      'initiative_profile' => 0,
      'initiative_hub_profile' => 0,
      'page' => 0,
      'panel' => 0,
      'imported_event' => 0,
      'imported_events_parent' => 0,
      'pattern' => 0,
      'project_profile' => 0,
      'resource' => 0,
      'tool' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Themes',
      'weight' => '-3',
      'description' => 'The <em>Themes</em> related to this <em>Blog post</em>.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Original article');
  t('Source');
  t('Themes');

  return $fields;
}
