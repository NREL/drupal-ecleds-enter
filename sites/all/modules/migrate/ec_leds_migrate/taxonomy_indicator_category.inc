<?php

class ecLedsMigrateIndicatorCategory extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();

    $query = Database::getConnection('normi', 'default')
      ->select('taxonomy_indicator_category', 'a')
      ->fields('a');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationTerm('indicator_category');
    $this->description = t('Import indicator_category.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'description' => t('Unique ID'),
          'alias' => 'a',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('description', 'description');

  }

}
