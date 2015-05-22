<?php

class ecLedsMigrateNrelEcledsGccResults extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();

    $query = Database::getConnection('normi', 'default')
      ->select('node_nrel_ecleds_gcc_results', 'a')
      ->fields('a');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('nrel_ecleds_gcc_results');
    $this->description = t('Import nrel_ecleds_gcc_results.');

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
    $this->addFieldMapping('field_ecleds_reference_material', 'field_ecleds_reference_material');
    // $this->addFieldMapping('field_ecleds_sub_sub_ir', 'field_ecleds_sub_sub_ir')->sourceMigration('ecLedsMigrateSubSubIrs');

  }

}
