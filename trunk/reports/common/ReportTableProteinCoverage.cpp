////////////////////////////////////////////////////////////////////////////////
#include "ReportTableProteinCoverage.h"

////////////////////////////////////////////////////////////////////////////////
namespace spsReports {
////////////////////////////////////////////////////////////////////////////////
ReportTableProteinCoverage::ReportTableProteinCoverage(const string &projectPath, const string &tableFilename, int columnFilter)
: ReportTableBase(projectPath, tableFilename)
{
  // set the filter column
  setFilterColumn(columnFilter);
  // set sort column
  setIdColumn(0);
}
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
}; // namespace
////////////////////////////////////////////////////////////////////////////////
