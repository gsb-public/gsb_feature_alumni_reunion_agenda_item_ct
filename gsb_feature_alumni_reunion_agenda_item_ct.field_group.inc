<?php
/**
 * @file
 * gsb_feature_alumni_reunion_agenda_item_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_alumni_reunion_agenda_item_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|alumni_reunion_agenda_item|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alumni_reunion_agenda_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '9',
    'children' => array(
      0 => 'field_alumni_ref',
      1 => 'field_link_unlimited',
      2 => 'field_person_fac_ref',
      3 => 'field_related_idea_story',
      4 => 'field_related_other_unlimited',
      5 => 'field_person_ref_unlimited',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|alumni_reunion_agenda_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_related|node|alumni_reunion_agenda_item|default';
  $field_group->group_name = 'group_wrapper_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alumni_reunion_agenda_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '8',
    'children' => array(
      0 => 'field_link_unlimited',
      1 => 'field_related_idea_story',
      2 => 'field_related_other_unlimited',
      3 => 'field_file_unlimited_public',
      4 => 'field_person_ref_unlimited',
      5 => 'related_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_wrapper_related|node|alumni_reunion_agenda_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_title_location|node|alumni_reunion_agenda_item|default';
  $field_group->group_name = 'group_wrapper_title_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alumni_reunion_agenda_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title and location wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_link_single',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title and location wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_title_location|node|alumni_reunion_agenda_item|default'] = $field_group;

  return $export;
}
