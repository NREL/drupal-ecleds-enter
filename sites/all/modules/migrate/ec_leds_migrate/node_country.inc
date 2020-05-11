<?php

class ecLedsMigrateCountry extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();

    $query = Database::getConnection('normi', 'default')
      ->select('node_country', 'a')
      ->fields('a');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('country');
    $this->description = t('Import country.');

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
    //$this->addFieldMapping('field_baseline_workbook', 'field_baseline_workbook')->sourceMigration('ecLedsMigrateBaselineWorkbook');
    //$this->addFieldMapping('field_ecleds_reference_material', 'field_ecleds_reference_material');
    $this->addFieldMapping('field_environmental_and_economic', 'field_environmental_and_economic')->sourceMigration('ecLedsMigrateEnvironmentalAndEconomical');
    //$this->addFieldMapping('field_leds_plans_institutions', 'field_leds_plans_institutions')->sourceMigration('ecLedsMigrateLedsPlansInstitutions');
    //$this->addFieldMapping('field_nrel_ecled_country_other', 'field_nrel_ecled_country_other')->sourceMigration('ecLedsMigrateOtherUsgLedsRelatedPrograms');
    //$this->addFieldMapping('field_nrel_ecleds_mission_ppr', 'field_nrel_ecleds_mission_ppr')->sourceMigration('ecLedsMigrateMissionPpr');
    //$this->addFieldMapping('field_nrel_ecleds_program_level', 'field_nrel_ecleds_program_level')->sourceMigration('ecLedsMigrateProgramLevelProgress');
    //$this->addFieldMapping('field_program_plans', 'field_program_plans')->sourceMigration('ecLedsMigrateProgramPlans');

  }

}
