resourcestring                                     {english}
  manual='ShowAnafiLog.pdf';
  {$IFDEF LINUX}
      DownURL='/downloads/ShowAnafiLog.tar.gz';
  {$ELSE}
    {$IFDEF DARWIN}                                {MAC OS X}
      DownURL='/downloads/ShowAnafiLog.dmg';
    {$ELSE}
      DownURL='/downloads/ShowAnafiLog.zip';
    {$ENDIF}
  {$ENDIF}

{Alternative column header data}
  ahdr0 ='Time since boot';
  ahdr1 ='Battery Charge Level';
  ahdr2 ='Controller Latitude';
  ahdr3 ='Controller Longitude';
  ahdr4 ='Flying Mode';
  ahdr5 ='Alert state';
  ahdr6 ='WiFi Signal Strength';
  ahdr7 ='Anafi GPS Lock';
  ahdr8 ='Anafi Longitude';
  ahdr9 ='Anafi Latitude';
  ahdr10='Anafi GPS Error';
  ahdr11='Number of Sats';
  ahdr12='Forward Speed';
  ahdr13='Sideways Speed';
  ahdr14='Vertical Speed';
  ahdr15='Roll Angle';
  ahdr16='Pitch Angle';
  ahdr17='Compass Heading';
  ahdr18='Altitude above take off';
  ahdr19='Flip Type';
  ahdr20='True Air Speed';
  ahdr21='Distance Anafi to RC';

{Other column header}
  ovDate='Date';
  ovFrom='From';
  ovTo='To';
  ovDuration='Duration';
  ovAltMax='Ceiling';
  ovTasMax='Top speed';
  ovDistMax='Distance';
  ovRoute='Route';
  ovBattMax='Max battery level';
  ovBattMin='Min battery level';

  rsDateTime='Date/Time';
  csvDist='Dist to RC';

  staHd1='Min/max values';
  staHd2='Occurred first time';

  dtlCol0='Details';
  dtlCol1='Value';

  altCount='Number of values';
  altDescription='Description';

{Tab page header}
  thdOverview='Overview';
  thdData='Log data';
  thdDia='Chart altitude';
  thdAtti='Charts attitude';
  thdDetails='Meta data';
  thdSettings='Settings';

{Captions and hints}
  hntLogDir='Select directory with Anafi JSON log files';
  capLogDir='Select log dir';
  hntChart1='Zooming with mouse wheel, panning with left mouse button hold';
  dtSpeed='XYZ speed';
  dtAngle='XYZ angle [rad]';
  clnLeft='Zero line left';
  clnRight='Zero line right';
  hntChartListBox='Select/deselect charts for XYZ speed or angle';
  hntChart2='Attitude of the aircraft: Charts for XYZ speed and angle';

{Buttons}
  capClose='Close';
  hntClose='Close application without saving';
  capScrShot='Screenshot';
  hntScrShot='Save screenshot of the application';
  capBtnConv='Convert';
  hntBtnConf='Convert JSON file to selected output format and save to the same directory';
  capColor='KML track';
  hntColor='Select color of KML flight track. RC track remains black.';

{Other strings}
  rsFiles='Files';
  rsScreen='Screen';
  rsUnKnown='Unknown';
  rsSaved='successful created and saved';
  rsMetaData='Meta data';
  rsStatistics='Statistics';
  errWrongData='Not an Anafi flight log or wrong data format in file ';
  errMissingFiles='No JSON files in directory';
  errLessData='Not enough datasets in file ';
  errWrongValue='Missing or invalid value';
  rsChart='Chart for ';
  rsList='Value counter for ';
  rsStatCopy='Copy of statistics';
  rsGPSavailable='Anafi GPS available';
  rsGPSnotAvailable='Anafi GPS not available';
  rsContact='Contact';
  rsLatest='Latest SW version';
  rsManual='User manual';
  rsManufacture='Date of manufacture';
  rsLogBook='Pilot log book';
  rsYes='Yes';
  rsNo='No';
  rsLocation='Location';
  rsGPSfix='GPS fix at start';
  rsFrom=' from ';

{Menu items}
  mniFile='&File';
  mniOpen='Select &JSON log dir';
  mniJump='&Open file manager with log dir';
  mniCSVex='Export to CS&V file';
  mniKMLex='Export to &KML file';
  mniGPXex='Export to &GPX file';
  mniClose='&Close';

  mniTools='&Tools';
  mniSettings='S&ettings';
  mniScrShot='&Screenshot';
  mniTas='Recompute air speed';
  mniLogBook='Create Pilot log book';

  mniHelp='&Help';
  mniHomepage='Homepage';
  mniInfo='&About';

  mniCopy='Copy to clipboard';
  mniFileSave='Save as...';
  mniShowGM='Show in Google Maps';
  mniShowOSM='Show in Open Street Map';

{Settings}
  capUnit='Scale unit';
  hntUnit='Select scale unit as set on your device just to show the correct unit';
  capConv='Conversion';
  hntBoxConv='Settings for converted files';
  hntConv='Select output format for data conversion';
  capConvSel='Output format';
  capExtrude='Extrude';
  hntExtrude='Shows verticale lines from flight path to ground in GoogleEarth';
  capHeader='Use alternative header';
  hntHeader='Use alternative header instead of original column header';
  capDia='Second chart';
  hntDia='Select column for second chart (red line chart)';
  capCSVsep='Use semicolon for CSV';
  hntCSVsep='Use semicolon as CSV data seperator instead of comma';
  capLogBook='Output format';
  hntLogBook='Output format for Pilot log book';
  capCrLogBook='Create';
  hntCrLogBook='Create Pilot log book from all JSON files in selected directory';
  capTable='Table settings';
  hntTable='Some extra behaviour of the data table';
  capDegree='Angle as degree';
  hntDegree='Overwrite original angle values with values in degree';

