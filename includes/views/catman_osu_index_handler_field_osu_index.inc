<?php
class catman_osu_index_handler_field_index_code extends views_handler_field {
  function construct() {
    parent::construct();

    //$this->additional_fields['uid'] = 'uid';
  }

  function render($values) {
    $order_id = $this->get_value($values, 'order_id');
    $text = '';
    $text = catman_osu_index_code_from_order_id($order_id);
    return $text;
  }
}


