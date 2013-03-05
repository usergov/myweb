<?php

  $default_blocks = array (
    
    array (
      'module' => 'user',
      'delta' => 'login',
      'theme' => variable_get('theme_default', FALSE),
      'status' => 1,
      'weight' => 0,
      'region' => 'sidebar_first',
      'pages' => '',
      'cache' => -1,
      'visibility' => 0,
    ),

    array (
      'module' => 'user',
      'delta' => 'login',
      'theme' => variable_get('admin_theme', FALSE),
      'status' => 1,
      'weight' => 10,
      'region' => 'content',
      'pages' => '',
      'cache' => -1,
      'visibility' => 0,
    ),
    array (
      'module' => 'user',
      'delta' => 'new',
      'theme' => variable_get('admin_theme', FALSE),
      'status' => 1,
      'weight' => 0,
      'region' => 'dashboard_sidebar',
      'pages' => '',
      'cache' => -1,
      'visibility' => 0,
    ),
    array (
      'module' => 'search',
      'delta' => 'form',
      'theme' => variable_get('admin_theme', FALSE),
      'status' => 1,
      'weight' => -10,
      'region' => 'dashboard_sidebar',
      'pages' => '',
      'cache' => -1,
      'visibility' => 0,
    ),
    array (
      'module' => 'system',
      'delta' => 'main-menu',
      'theme' => variable_get('theme_default', FALSE),
      'status' => 1,
      'weight' => 0,
      'region' => 'menu_bar',
      'pages' => '',
      'cache' => -1,
      'visibility' => 0,
    ),   

  );