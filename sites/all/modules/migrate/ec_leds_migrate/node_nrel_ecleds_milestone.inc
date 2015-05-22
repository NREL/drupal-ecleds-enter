<?php

class ecLedsMigrateNrelEcledsMilestone extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();

    $query = Database::getConnection('normi', 'default')
      ->select('node_nrel_ecleds_milestone', 'a')
      ->fields('a');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('nrel_ecleds_milestone');
    $this->description = t('Import nrel_ecleds_milestone.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'description' => t('Unique ID'),
          'alias' => 'a',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_completion_description', 'field_completion_description');
    $this->addFieldMapping('field_completion_month', 'field_completion_month');
    $this->addFieldMapping('field_completion_year', 'field_completion_year');
    $this->addFieldMapping('field_ecleds_milestone_country', 'field_ecleds_milestone_country')->sourceMigration('ecLedsMigrateCountry');
    $this->addFieldMapping('field_exp_compl_month', 'field_exp_compl_month');
    $this->addFieldMapping('field_exp_compl_year', 'field_exp_compl_year');
    $this->addFieldMapping('field_explanation_if_not_complet', 'field_explanation_if_not_complet');
    $this->addFieldMapping('field_full_milestone_name', 'field_full_milestone_name');
    $this->addFieldMapping('field_milestone_description', 'field_milestone_description');
    $this->addFieldMapping('field_milestone_operating_unit', 'field_milestone_operating_unit')->sourceMigration('ecLedsMigrateOperatingUnit');
    $this->addFieldMapping('field_milestone_type_notes', 'field_milestone_type_notes');
    $this->addFieldMapping('field_notes_on_status', 'field_notes_on_status');
    $this->addFieldMapping('field_nrel_ecleds_milestone_ben', 'field_nrel_ecleds_milestone_ben');
    $this->addFieldMapping('field_nrel_ecleds_milestone_cat', 'field_nrel_ecleds_milestone_cat')->sourceMigration('ecLedsMigrateNrelEcledsMilestoneCategory');
    $this->addFieldMapping('field_nrel_ecleds_milestone_date', 'field_nrel_ecleds_milestone_date');
    $this->addFieldMapping('field_nrel_ecleds_milestone_type', 'field_nrel_ecleds_milestone_type');
    $this->addFieldMapping('field_status', 'field_status');

  }

  function prepareRow(&$row) {

    $integer_fields = array('field_completion_month', 'field_completion_year');

    foreach ($integer_fields as $field) {
      if (empty($row->{$field})) {
        unset($row->{$field});
      }
      else {
        $row->{$field} = intval($row->{$field});
      }
    }

  }

}
