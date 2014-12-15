<?php
/**
 * @file
 * gsb_feature_alumni_reunion_agenda_item_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_alumni_reunion_agenda_item_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|alumni_reunion_agenda_item|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'alumni_reunion_agenda_item';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'alumni_reunion_agenda_item_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_link_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_related_faculty' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_related_idea_story' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_related_other_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_alumni_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_cost' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_reunion_group_page_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_reunion_session_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|alumni_reunion_agenda_item|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function gsb_feature_alumni_reunion_agenda_item_ct_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'alumni_reunion_agenda_item_date';
  $ds_field->label = 'Alumni reunion agenda item date';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'alumni_reunion_agenda_item|default';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="day">[node:field-date:custom:l, F j, Y]</div>
<div class="time">[node:field-date:time_only]</div>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['alumni_reunion_agenda_item_date'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_alumni_reunion_agenda_item_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|alumni_reunion_agenda_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'alumni_reunion_agenda_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_reunion_session_ref',
        1 => 'alumni_reunion_agenda_item_date',
        2 => 'title',
        3 => 'field_link_single',
        4 => 'field_body',
        5 => 'field_reunion_group_page_ref',
        6 => 'field_cost',
      ),
      'right' => array(
        7 => 'current_reunion_block',
        8 => 'group_wrapper_related',
        9 => 'field_related_faculty',
        10 => 'conditional_stanford_block',
        11 => 'field_alumni_ref',
        12 => 'field_related_idea_story',
        13 => 'field_related_other_unlimited',
        14 => 'field_link_unlimited',
      ),
    ),
    'fields' => array(
      'field_reunion_session_ref' => 'left',
      'alumni_reunion_agenda_item_date' => 'left',
      'title' => 'left',
      'field_link_single' => 'left',
      'field_body' => 'left',
      'field_reunion_group_page_ref' => 'left',
      'field_cost' => 'left',
      'current_reunion_block' => 'right',
      'group_wrapper_related' => 'right',
      'field_related_faculty' => 'right',
      'conditional_stanford_block' => 'right',
      'field_alumni_ref' => 'right',
      'field_related_idea_story' => 'right',
      'field_related_other_unlimited' => 'right',
      'field_link_unlimited' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|alumni_reunion_agenda_item|default'] = $ds_layout;

  return $export;
}
