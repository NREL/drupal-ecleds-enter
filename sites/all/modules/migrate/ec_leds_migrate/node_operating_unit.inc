<?php

class ecLedsMigrateOperatingUnit extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();

    $query = Database::getConnection('normi', 'default')
      ->select('node_operating_unit', 'a')
      ->fields('a');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('operating_unit');
    $this->description = t('Import operating_unit.');

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
    $this->addFieldMapping('field_opearting_unit_country', 'field_opearting_unit_country')->sourceMigration('ecLedsMigrateCountry')->separator(',');
    $this->addFieldMapping('field_operating_unit_bureau', 'field_operating_unit_bureau')->sourceMigration('ecLedsMigrateEcledsBureauTaxonomy');
    $this->addFieldMapping('field_theory_of_change', 'field_theory_of_change');

  }

}
