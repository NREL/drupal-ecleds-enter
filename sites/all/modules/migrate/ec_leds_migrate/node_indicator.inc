<?php

class ecLedsMigrateIndicator extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();

    $query = Database::getConnection('normi', 'default')
      ->select('node_indicator', 'a')
      ->fields('a');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('indicator');
    $this->description = t('Import indicator.');

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
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('field_indicator_category', 'field_indicator_category')->sourceMigration('ecLedsMigrateIndicatorCategory');
    $this->addFieldMapping('field_indicator_type', 'field_indicator_type');
    $this->addFieldMapping('field_mandatory', 'field_mandatory');

  }

  function prepareRow($row) {

    $mandatory = $row->field_mandatory;
    $row->field_mandatory = 0;

    if ($mandatory == 'Yes') {
      $row->field_mandatory = 1;
    }

  }

}
