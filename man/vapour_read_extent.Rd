% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/000_vapour_input.R
\name{vapour_read_extent}
\alias{vapour_read_extent}
\title{GDAL geometry extent}
\usage{
vapour_read_extent(dsource, layer = 0L, sql = "")
}
\arguments{
\item{dsource}{data source name (path to file, connection string, URL)}

\item{layer}{integer of layer to work with, defaults to the first (0)}

\item{sql}{if not empty this is executed against the data source (layer will be ignored)}
}
\description{
Read a GDAL geometry summary as just the native bounding box, the four
numbers xmin, xmax, ymin, ymax in the usual simple convention.
}
\examples{
file <- "list_locality_postcode_meander_valley.tab"
mvfile <- system.file(file.path("extdata/tab", file), package="vapour")
vapour_read_extent(mvfile)
}
