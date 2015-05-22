<?php

class ecLedsMigrateEcledsImplementingMechanism extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();

    $query = Database::getConnection('normi', 'default')
      ->select('node_ecleds_implementing_mechanism', 'a')
      ->fields('a');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('ecleds_implementing_mechanism');
    $this->description = t('Import ecleds_implementing_mechanism.');

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
    $this->addFieldMapping('field_activity_operating_unit', 'field_activity_operating_unit')->sourceMigration('ecLedsMigrateOperatingUnit');
    $this->addFieldMapping('field_description', 'field_description');
    // $this->addFieldMapping('field_im_funding_pillar', 'field_im_funding_pillar')->separator(',');
    $this->addFieldMapping('field_im_number', 'field_im_number');
    $this->addFieldMapping('field_impl_mech_alt_name', 'field_impl_mech_alt_name');
    $this->addFieldMapping('field_impl_mech_perf_end_date', 'field_impl_mech_perf_end_date');
    $this->addFieldMapping('field_impl_mech_perf_start_date', 'field_impl_mech_perf_start_date');
    // $this->addFieldMapping('field_impl_mech_project', 'field_impl_mech_project')->sourceMigration('ecLedsMigrateProject')->separator(',');
    $this->addFieldMapping('field_impl_mech_usaid_db_number', 'field_impl_mech_usaid_db_number');
    $this->addFieldMapping('field_impl_mech_website_link', 'field_impl_mech_website_link');
    $this->addFieldMapping('field_implementer', 'field_implementer');

  }

  /**
   * Implements Migration::prepareRow().
   *
   * Fix issue with empty field_im_numbers.
   */
  public function prepareRow($row) {
    if(empty($row->field_im_number)) {
      unset($row->field_im_number);
    }
    /**
     * Started an attempt to parse the ends 2014 and starts 2014
     *
     * $letters = '/[a-z]/ig';
     * if(preg_match($letters, $row->field_impl_mech_perf_end_date)) {
     *   preg_replace();
     * }
     * if($row->field_impl_mech_perf_start_date) {
     *   preg_replace();
     * }
     * return TRUE;
     */
  }

}
