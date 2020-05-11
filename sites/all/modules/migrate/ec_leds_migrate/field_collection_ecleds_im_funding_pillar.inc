<?php

class ecLedsMigrateEcledsFieldCollectionFundingPillar extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();


    $columns = array(
      array('id', 'id'),
      array('title', 'Title'),
      array('field_funding_pillar', 'Funding Pillar'),
      array('field_impl_mech_direct_indirect', 'Direct/Indirect'),
      array('field_fiscal_year', 'Fiscal Year'),
    );
    $this->source = new MigrateSourceCSV(
      drupal_get_path('module', 'ec_leds_migrate') . '/data/implementing_mechanisms_field_collection.csv',
      $columns
    );
    $this->destination = new MigrateDestinationFieldCollection(
      'field_im_funding_pillar', array('host_entity_type' => 'node'));

    $this->description = t('Import field collection field_im_funding_pillar to ecleds_implementing_mechanism nodes.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'row number from source csv',
        ),
/*
        'delta' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'nid delta',
          'alias' => 'dd',
        ),
*/
      ),
        MigrateDestinationFieldCollection::getKeySchema()
    );

    //nid comes from $row->nid generated in prepareRow()
    $this->addFieldMapping('host_entity_id', 'nid');

    //placeholder, these are not correct mappings
    $this->addFieldMapping('field_fiscal_year', 'field_fiscal_year');
    $this->addFieldMapping('field_funding_pillar', 'field_funding_pillar');
    $this->addFieldMapping('field_impl_mech_direct_indirect', 'field_impl_mech_direct_indirect');
  }

  public function prepareRow($row) {
    $query = db_select('node', 'n');
    $query->condition('n.title', $row->title);
    $query->fields('n', array('nid'));
    $result = $query->execute();
    $nid = $result->fetchAssoc();
    if ($nid['nid'] > 0) {
      $row->nid = $nid['nid'];
    }
    else {
      dd($row);
      return FALSE;
    }
  }

}
