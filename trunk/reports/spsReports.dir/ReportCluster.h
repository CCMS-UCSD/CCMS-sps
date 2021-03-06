///////////////////////////////////////////////////////////////////////////////
#ifndef __REPORT_CLUSTER_H__
#define __REPORT_CLUSTER_H__
///////////////////////////////////////////////////////////////////////////////
#include "ReportBase.h"

///////////////////////////////////////////////////////////////////////////////
namespace spsReports {
///////////////////////////////////////////////////////////////////////////////
// ReportCluster
//
// The following tables are defined:
// 1 Table of type ReportTableSpecplot
// 1 Table of type ReportTableInputSpectra, filtered by consensus spectra index
//
//
//
////////////////////////////////////////////////////////////////////////////////
  /*! \brief Generate report pages for clusters
   */
class ReportCluster : public ReportBase {

 protected:


 public:

  // Defines cluster, with input spectra list
  ReportCluster(const string &consensusFilename, const string & clusterTableFilename, const string &inputSpectraTableFilename);
  // Destructor
  virtual ~ReportCluster() {};

};
///////////////////////////////////////////////////////////////////////////////
}; // namespace spsReports
///////////////////////////////////////////////////////////////////////////////
#endif
///////////////////////////////////////////////////////////////////////////////
