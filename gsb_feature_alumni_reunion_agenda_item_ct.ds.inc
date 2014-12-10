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
  );
  $export['node|alumni_reunion_agenda_item|default'] = $ds_fieldsetting;

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
        1 => 'field_reunion_group_page_ref',
        2 => 'field_date',
        3 => 'field_link_single',
        4 => 'field_body',
        5 => 'field_cost',
        6 => 'field_stanford_event',
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
      'field_reunion_group_page_ref' => 'left',
      'field_date' => 'left',
      'field_link_single' => 'left',
      'field_body' => 'left',
      'field_cost' => 'left',
      'field_stanford_event' => 'left',
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
