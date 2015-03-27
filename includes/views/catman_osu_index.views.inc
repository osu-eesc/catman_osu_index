<?php

/**
 * Export Catam OSU Index to Views.
 */

/**
 * Implements hook_views_data_alter()
 */
function catman_osu_index_views_data_alter(&$data) {
  $data['commerce_order']['index_code'] = array(
    'title' => t('OSU index code'),
    'help' => t('The index code associated with this order.'),
    'field' => array(
      'handler' => 'catman_osu_index_handler_field_index_code',
      'click sortable' => TRUE,
    ),
  );
}


