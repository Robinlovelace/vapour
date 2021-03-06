# vapour 0.0.1


* More C++ functions now have explicit R wrappers instead of Rcpp exports. New function `vapour_read_geometry_cpp` deprecates `vapour_read_geometry_what` - this is still exported to R but the more specialized forms still should be used in preference. 

* New naming convention uses `vapour_` for vector sources, `raster_` for raster sources 
 to make function names a little more consistent. 

* New wrapper `raster_sds_info` to replace `sds_info` which is now deprecated. 

* New wrapper `vapour_read_geometry_what` to replace `vapour_read_feature_what` which i  is now deprecated. 

* New function  `vapour_read_names` to return the vector of FID values. 

* The read for raster data now returns numeric or integer appropriately. 

* `raster_info` now includes `bands` as the count of available bands. 

* The IO read now allows a 4-element `window` to return data at native resolution, by
 copying the third and fourth values (source dimension) to the fifth and sixth values
 (output dimension) respectively. 
 
* Subdatasets are now supported. 

* Added sanity check behaviour to `raster_io` to avoid out of bounds read attempts. 

* Resampling options added to raster data read. 

* Upgraded to rwinlib gdal 2.2.3. 

* added function `vapour_layer_names` to return character layer names, and
 implicitly provide a layer count

* feature iteration now avoids "GetFeatureCount" and collects each element
 in a growing list, thanks to Jim Hester

* renamed `format` argument to `textformat`, this is ignored unless `what = "text"`

* Created a single C++ feature read to remove repeated logic, `vapour_read_geometry`, `vapour_read_geometry_text`, 
 and `vapour_read_extent` all call `vapour_read_geometry_what`. 
