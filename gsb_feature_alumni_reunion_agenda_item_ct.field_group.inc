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
    'weight' => '8',
    'children' => array(
      0 => 'field_related_faculty',
      1 => 'field_related_idea_story',
      2 => 'field_related_other_unlimited',
      3 => 'field_link_unlimited',
      4 => 'field_alumni_ref',
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
      1 => 'field_related_faculty',
      2 => 'field_related_idea_story',
      3 => 'field_related_other_unlimited',
      4 => 'field_alumni_ref',
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

  return $export;
}
