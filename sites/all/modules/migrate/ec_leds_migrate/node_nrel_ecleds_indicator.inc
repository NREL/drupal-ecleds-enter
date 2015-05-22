<?php

class ecLedsMigrateNrelEcledsIndicator extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();

    $query = Database::getConnection('normi', 'default')
      ->select('node_nrel_ecleds_indicator', 'a')
      ->fields('a');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('nrel_ecleds_indicator');
    $this->description = t('Import nrel_ecleds_indicator.');

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
    $this->addFieldMapping('field_2013_actual', 'field_2013_actual');
    $this->addFieldMapping('field_2013_baseline_disaggregate', 'field_2013_baseline_disaggregate');
    $this->addFieldMapping('field_2013_target', 'field_2013_target');
    $this->addFieldMapping('field_2013_target_disaggeragate', 'field_2013_target_disaggeragate');
    $this->addFieldMapping('field_2014_baseline', 'field_2014_baseline');
    $this->addFieldMapping('field_2014_baseline_disaggragate', 'field_2014_baseline_disaggragate');
    $this->addFieldMapping('field_2014_target', 'field_2014_target');
    $this->addFieldMapping('field_2014_target_disaggeragate', 'field_2014_target_disaggeragate');
    $this->addFieldMapping('field_2015_target', 'field_2015_target');
    $this->addFieldMapping('field_2015_target_disaggeragate', 'field_2015_target_disaggeragate');
    $this->addFieldMapping('field_2016_target', 'field_2016_target');
    $this->addFieldMapping('field_2016_ttarget_disaggeragate', 'field_2016_ttarget_disaggeragate');
    $this->addFieldMapping('field_indicator', 'field_indicator')->sourceMigration('ecLedsMigrateIndicator');
    $this->addFieldMapping('field_indicator_2013_baseline', 'field_indicator_2013_baseline');

  }

}
