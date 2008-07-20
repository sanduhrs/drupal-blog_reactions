<?php
/* $Id$ */

/**
 * Blog reactions
 * 
 * Fetch blog reactions from Technorati and Google Blog Search
 * 
 * @author Stefan Auditor <stefan.auditor@erdfisch.de>
 */

/**
 * 
 */
function blog_reactions_admin_settings() {
  $form['blog_reactions_node_types'] = array(
    '#type' => 'select',
    '#options' => node_get_types('names'),
    '#default_value' => variable_get('blog_reactions_node_types', ''),
    '#multiple' => TRUE,
    '#description' => t('Choose the node type(s) that should fetch blog reactions.'),
  );
  return system_settings_form($form);
}
