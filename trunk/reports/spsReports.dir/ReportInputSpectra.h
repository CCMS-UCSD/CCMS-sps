////////////////////////////////////////////////////////////////////////////////
#ifndef __REPORT_INPUT_SPECTRA_H__
#define __REPORT_INPUT_SPECTRA_H__
////////////////////////////////////////////////////////////////////////////////
#include "ReportBase.h"

////////////////////////////////////////////////////////////////////////////////
namespace spsReports {
////////////////////////////////////////////////////////////////////////////////
// ReportInputSpectra
//
// The following tables are defined:
// 1 Table of type ReportTableInputSpectra
//
////////////////////////////////////////////////////////////////////////////////
  /*! \brief Generate report pages for input spectra
   */
class ReportInputSpectra : public ReportBase {

 protected:


 public:

  // Constructors
  ReportInputSpectra(const string &projectPath, const string &inputSpectraTableFilename, bool noClusters = false);
  // destructor
  virtual ~ReportInputSpectra() {};

};
///////////////////////////////////////////////////////////////////////////////
}; // namespace
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
