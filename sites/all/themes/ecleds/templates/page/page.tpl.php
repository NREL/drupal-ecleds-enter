<?php
/**
* @file
* Main page template.
*/
?>

<?php

global $user;

// An anonymous user has a user id of zero.
if ($user->uid > 0) : ?>
<div class="top-fixed-area">
  <div id="fixed-branding"<?php print (empty($primary_local_tasks['#primary'])) ? ' class="no-primary"' : ''; ?>>

    <?php print $breadcrumb; ?>

    <?php print render($title_prefix); ?>

      <?php if ($title): ?>
        <h1 class="page-title"><?php print $title; ?></h1>
      <?php endif; ?>

      <?php print render($title_suffix); ?>

    <?php if ($page['header']): ?>
      <div id="header">
        <?php print render($page['header']); ?>
      </div>
    <?php endif; ?>

    <?php print render($primary_local_tasks); ?>

  </div>
</div>

<?php else: ?>
<div id="branding" class="clearfix">
	<?php print $breadcrumb; ?>

	<?php print render($title_prefix); ?>

	<?php if ($title): ?>
		<h1 class="page-title"><?php print $title; ?></h1>
	<?php endif; ?>

	<?php print render($title_suffix); ?>

	<?php if ($page['header']): ?>
		<div id="header">
			<?php print render($page['header']); ?>
		</div>
	<?php endif; ?>

	<?php print render($primary_local_tasks); ?>


</div>
<?php endif ?>

<?php if ($user->uid > 0) : ?>
  <div id="page" class="branding-overlay">
<?php else: ?>
    <div id="page" class="no-overlay">
<?php endif ?>
	<?php if ($secondary_local_tasks): ?>
		<div class="tabs-secondary clearfix"><ul class="tabs secondary"><?php print render($secondary_local_tasks); ?></ul></div>
	<?php endif; ?>

	<div id="content" class="clearfix">
		<div class="element-invisible"><a id="main-content"></a></div>

	<?php if ($messages): ?>
		<div id="console" class="clearfix"><?php print $messages; ?></div>
	<?php endif; ?>

	<?php if ($page['help']): ?>
		<div id="help">
			<?php print render($page['help']); ?>
		</div>
	<?php endif; ?>

	<?php if ($page['content_before']): ?>
		<div id="content-before">
			<?php print render($page['content_before']); ?>
		</div>
	<?php endif; ?>

	<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>

	<?php print render($page['content']['system_main']); ?>

	<?php if ($page['content_after']): ?>
		<div id="content-after">
			<?php print render($page['content_after']); ?>
		</div>
	<?php endif; ?>

	</div>

	<div id="footer">
		<?php print $feed_icons; ?>
	</div>

</div>
