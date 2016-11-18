<?php
/**
 * @file
 * book_review.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function book_review_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_book-reviews:node/5.
  $menu_links['main-menu_book-reviews:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Book Reviews',
    'options' => array(
      'attributes' => array(
        'title' => 'book reviews',
      ),
      'identifier' => 'main-menu_book-reviews:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Book Reviews');

  return $menu_links;
}
