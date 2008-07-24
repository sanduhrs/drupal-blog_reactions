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
    '#default_value' => variable_get('blog_reactions_node_types', array('blog')),
    '#multiple' => TRUE,
    '#description' => t('Choose the node type(s) that should fetch blog reactions.'),
  );
  $form['blog_reactions_services'] = array(
    '#type' => 'checkboxes',
    '#options' => array(
      'technorati' => t('Technorati'),
      'blogsearch' => t('Google Blogsearch'),
      'bloglines'  => t('Yahoo! Bloglines'),
    ),
    '#default_value' => variable_get('blog_reactions_services', array('technorati', 'blogsearch', 'bloglines')),
    '#description' => t('Choose the services that should be queried.'),
  );
  $form['blog_reactions_node_display'] = array(
    '#title' => t('Display the reactions underneath the node'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('blog_reactions_node_display', FALSE),
  );
  return system_settings_form($form);
}