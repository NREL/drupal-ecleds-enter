<?php
/**
* @file
* Main page template.
*/
?>

<?php
  // Print the action buttons at the top of the form.
  print drupal_render($form['actions']);
  // Unset the printed property of the action buttons so that they will get
  // printed again when we render the form children.
  unset($form['actions']['#printed']);
  print drupal_render_children($form);