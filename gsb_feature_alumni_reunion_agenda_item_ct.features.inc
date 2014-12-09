<?php
/**
 * @file
 * gsb_feature_alumni_reunion_agenda_item_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_alumni_reunion_agenda_item_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_alumni_reunion_agenda_item_ct_node_info() {
  $items = array(
    'alumni_reunion_agenda_item' => array(
      'name' => t('Alumni Reunion Agenda Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
