<?php
// $Id: views-view-unformatted.tpl.php,v 1.6 2008/10/01 20:52:11 merlinofchaos Exp $
/**
* @file views-view-unformatted.tpl.php
* Default simple view template to display a list of rows.
*
* @ingroup views_templates
*/
?>
<?php drupal_add_js('misc/form.js'); ?>
<?php drupal_add_js('misc/collapse.js'); ?>


<fieldset class="collapsible collapsed">
  <legend><span class="fieldset-legend"><?php if (!empty($title)) : ?><?php print $title; ?><?php endif; ?></span></legend>
    <div class="fieldset-wrapper">
    <?php if (!empty($title)): ?>
            <a href="#"><?php print $title; ?></a>
        <?php endif; ?>
    </legend>
    <?php foreach ($rows as $id => $row): ?>
        <div class="<?php print $classes[$id]; ?>">
        <?php print $row; ?>
        </div>
    <?php endforeach; ?>
</div>
</fieldset>