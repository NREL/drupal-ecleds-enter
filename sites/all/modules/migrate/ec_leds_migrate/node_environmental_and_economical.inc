<?php

class ecLedsMigrateEnvironmentalAndEconomical extends Migration {

  /**
   * Constructor
   */
  public function __construct() {

    parent::__construct();

    $query = Database::getConnection('normi', 'default')
      ->select('node_environmental_and_economical', 'a')
      ->fields('a');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('environmental_and_economical');
    $this->description = t('Import environmental_and_economical.');

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
    $this->addFieldMapping('field_env_eco_business_ease', 'field_env_eco_business_ease');
    $this->addFieldMapping('field_env_eco_carbon_intensity', 'field_env_eco_carbon_intensity');
    $this->addFieldMapping('field_env_eco_climatescope', 'field_env_eco_climatescope');
    $this->addFieldMapping('field_env_eco_eco_growth_1990', 'field_env_eco_eco_growth_1990');
    $this->addFieldMapping('field_env_eco_eco_growth_1991', 'field_env_eco_eco_growth_1991');
    $this->addFieldMapping('field_env_eco_eco_growth_1992', 'field_env_eco_eco_growth_1992');
    $this->addFieldMapping('field_env_eco_eco_growth_1993', 'field_env_eco_eco_growth_1993');
    $this->addFieldMapping('field_env_eco_eco_growth_1994', 'field_env_eco_eco_growth_1994');
    $this->addFieldMapping('field_env_eco_eco_growth_1995', 'field_env_eco_eco_growth_1995');
    $this->addFieldMapping('field_env_eco_eco_growth_1996', 'field_env_eco_eco_growth_1996');
    $this->addFieldMapping('field_env_eco_eco_growth_1997', 'field_env_eco_eco_growth_1997');
    $this->addFieldMapping('field_env_eco_eco_growth_1998', 'field_env_eco_eco_growth_1998');
    $this->addFieldMapping('field_env_eco_eco_growth_1999', 'field_env_eco_eco_growth_1999');
    $this->addFieldMapping('field_env_eco_eco_growth_2000', 'field_env_eco_eco_growth_2000');
    $this->addFieldMapping('field_env_eco_eco_growth_2001', 'field_env_eco_eco_growth_2001');
    $this->addFieldMapping('field_env_eco_eco_growth_2002', 'field_env_eco_eco_growth_2002');
    $this->addFieldMapping('field_env_eco_eco_growth_2003', 'field_env_eco_eco_growth_2003');
    $this->addFieldMapping('field_env_eco_eco_growth_2004', 'field_env_eco_eco_growth_2004');
    $this->addFieldMapping('field_env_eco_eco_growth_2005', 'field_env_eco_eco_growth_2005');
    $this->addFieldMapping('field_env_eco_eco_growth_2006', 'field_env_eco_eco_growth_2006');
    $this->addFieldMapping('field_env_eco_eco_growth_2007', 'field_env_eco_eco_growth_2007');
    $this->addFieldMapping('field_env_eco_eco_growth_2008', 'field_env_eco_eco_growth_2008');
    $this->addFieldMapping('field_env_eco_eco_growth_2009', 'field_env_eco_eco_growth_2009');
    $this->addFieldMapping('field_env_eco_eco_growth_2010', 'field_env_eco_eco_growth_2010');
    $this->addFieldMapping('field_env_eco_eco_growth_2011', 'field_env_eco_eco_growth_2011');
    $this->addFieldMapping('field_env_eco_eco_growth_2012', 'field_env_eco_eco_growth_2012');
    $this->addFieldMapping('field_env_eco_eco_growth_2013', 'field_env_eco_eco_growth_2013');
    $this->addFieldMapping('field_env_eco_eco_growth_2014', 'field_env_eco_eco_growth_2014');
    $this->addFieldMapping('field_env_eco_eco_growth_2015', 'field_env_eco_eco_growth_2015');
    $this->addFieldMapping('field_env_eco_eco_growth_2016', 'field_env_eco_eco_growth_2016');
    $this->addFieldMapping('field_env_eco_eco_growth_2017', 'field_env_eco_eco_growth_2017');
    $this->addFieldMapping('field_env_eco_eco_growth_2018', 'field_env_eco_eco_growth_2018');
    $this->addFieldMapping('field_env_eco_eco_growth_2019', 'field_env_eco_eco_growth_2019');
    $this->addFieldMapping('field_env_eco_eco_growth_2020', 'field_env_eco_eco_growth_2020');
    $this->addFieldMapping('field_env_eco_eco_growth_2021', 'field_env_eco_eco_growth_2021');
    $this->addFieldMapping('field_env_eco_eco_growth_2022', 'field_env_eco_eco_growth_2022');
    $this->addFieldMapping('field_env_eco_eco_growth_2023', 'field_env_eco_eco_growth_2023');
    $this->addFieldMapping('field_env_eco_eco_growth_2024', 'field_env_eco_eco_growth_2024');
    $this->addFieldMapping('field_env_eco_eco_growth_2025', 'field_env_eco_eco_growth_2025');
    $this->addFieldMapping('field_env_eco_eco_growth_2026', 'field_env_eco_eco_growth_2026');
    $this->addFieldMapping('field_env_eco_eco_growth_2027', 'field_env_eco_eco_growth_2027');
    $this->addFieldMapping('field_env_eco_eco_growth_2028', 'field_env_eco_eco_growth_2028');
    $this->addFieldMapping('field_env_eco_eco_growth_2029', 'field_env_eco_eco_growth_2029');
    $this->addFieldMapping('field_env_eco_eco_growth_2030', 'field_env_eco_eco_growth_2030');
    $this->addFieldMapping('field_env_eco_energy_intensity', 'field_env_eco_energy_intensity');
    $this->addFieldMapping('field_env_eco_forested', 'field_env_eco_forested');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1990', 'field_env_eco_ghg_emissions_1990');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1991', 'field_env_eco_ghg_emissions_1991');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1992', 'field_env_eco_ghg_emissions_1992');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1993', 'field_env_eco_ghg_emissions_1993');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1994', 'field_env_eco_ghg_emissions_1994');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1995', 'field_env_eco_ghg_emissions_1995');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1996', 'field_env_eco_ghg_emissions_1996');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1997', 'field_env_eco_ghg_emissions_1997');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1998', 'field_env_eco_ghg_emissions_1998');
    $this->addFieldMapping('field_env_eco_ghg_emissions_1999', 'field_env_eco_ghg_emissions_1999');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2000', 'field_env_eco_ghg_emissions_2000');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2001', 'field_env_eco_ghg_emissions_2001');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2002', 'field_env_eco_ghg_emissions_2002');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2003', 'field_env_eco_ghg_emissions_2003');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2004', 'field_env_eco_ghg_emissions_2004');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2005', 'field_env_eco_ghg_emissions_2005');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2006', 'field_env_eco_ghg_emissions_2006');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2007', 'field_env_eco_ghg_emissions_2007');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2008', 'field_env_eco_ghg_emissions_2008');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2009', 'field_env_eco_ghg_emissions_2009');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2010', 'field_env_eco_ghg_emissions_2010');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2011', 'field_env_eco_ghg_emissions_2011');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2012', 'field_env_eco_ghg_emissions_2012');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2013', 'field_env_eco_ghg_emissions_2013');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2014', 'field_env_eco_ghg_emissions_2014');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2015', 'field_env_eco_ghg_emissions_2015');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2016', 'field_env_eco_ghg_emissions_2016');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2017', 'field_env_eco_ghg_emissions_2017');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2018', 'field_env_eco_ghg_emissions_2018');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2019', 'field_env_eco_ghg_emissions_2019');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2020', 'field_env_eco_ghg_emissions_2020');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2021', 'field_env_eco_ghg_emissions_2021');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2022', 'field_env_eco_ghg_emissions_2022');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2023', 'field_env_eco_ghg_emissions_2023');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2024', 'field_env_eco_ghg_emissions_2024');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2025', 'field_env_eco_ghg_emissions_2025');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2026', 'field_env_eco_ghg_emissions_2026');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2027', 'field_env_eco_ghg_emissions_2027');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2028', 'field_env_eco_ghg_emissions_2028');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2029', 'field_env_eco_ghg_emissions_2029');
    $this->addFieldMapping('field_env_eco_ghg_emissions_2030', 'field_env_eco_ghg_emissions_2030');
    $this->addFieldMapping('field_env_eco_ghg_rank', 'field_env_eco_ghg_rank');
    $this->addFieldMapping('field_env_eco_growth_rate', 'field_env_eco_growth_rate');
    $this->addFieldMapping('field_env_eco_ipcc_ag', 'field_env_eco_ipcc_ag');
    $this->addFieldMapping('field_env_eco_ipcc_bunker', 'field_env_eco_ipcc_bunker');
    $this->addFieldMapping('field_env_eco_ipcc_energy', 'field_env_eco_ipcc_energy');
    $this->addFieldMapping('field_env_eco_ipcc_ind', 'field_env_eco_ipcc_ind');
    $this->addFieldMapping('field_env_eco_ipcc_land', 'field_env_eco_ipcc_land');
    $this->addFieldMapping('field_env_eco_ipcc_waste', 'field_env_eco_ipcc_waste');
    $this->addFieldMapping('field_env_eco_sectors', 'field_env_eco_sectors');

  }

}
