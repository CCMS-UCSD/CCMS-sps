////////////////////////////////////////////////////////////////////////////////
#ifndef __REPORT_MODULE_SPECPLOT_H__
#define __REPORT_MODULE_SPECPLOT_H__
////////////////////////////////////////////////////////////////////////////////
// External Includes
#include "ReportModuleBase.h"
#include "SpecplotInterface.h"


// System Includes
#include <string>
#include <vector>

////////////////////////////////////////////////////////////////////////////////
namespace spsReports {
////////////////////////////////////////////////////////////////////////////////


/*! \brief ReportModuleSpecplot invoke class.

Contains methods for preparing data for Specplot and invokes it.

 */
class ReportModuleSpecplot : public ReportModuleBase {

 public:
  //! \name CONSTRUCTORS
  //@{
  /*! \brief The exemplar constructor.

   Generally this constructor should not be used. It is only used by the
   module execution factory in order to create an exemplar object (without
   valid parameters) which is then used to create a real (valid) object
   using the clone() method.
   @sa clone()
   */
  ReportModuleSpecplot(void);

  /*! \brief The default constructor

   This is the default constructor. A valid set of parameters must be
   supplied in the input parameter. The parameters can then be verified
   using the validateParams() method.
   @sa validateParams()
   @param inputParams structure containing all input parameters necessary for execution
   */
  ReportModuleSpecplot(const ParameterList & inputParams);

  //@}

  //! \name DESTRUCTOR
  //@{
  virtual ~ReportModuleSpecplot(void);
  //@}

  //! \name ACCESSORS
  //@{
  /*! \brief Creates a new module of the virtual class with the given params.

   The parameters should be sufficient for the derived class to be invoked properly.

   @return A pointer to the newly created object
   */
  virtual ReportModuleBase * clone(const ParameterList & input_params) const;

  virtual ReportModuleBase * clone(void) const;

  //@}

  //! \name MODIFIERS
  //@{
  /*! \brief Executes the module.

   In order to call this method succesfully all the necessary data for
   execution must already be loaded into memory (data members). This can
   be accomplished using the loadInputData() method.

   @return True if execution finished successfully, false otherwise.
   @sa loadInputData()
   */
  virtual bool invoke(void);

  virtual bool invoke(int argc, char ** argv);


  virtual bool getData(string &data) {specplot.getData(data);};


  virtual bool setData(int type, void *data) {specplot.setData(type, data);};

  /*! \brief Loads the input data from the files specified in the params.

   Loads all the data from files into the data members. This method is
   primarily used by the execution module to load necessary data when
   executing in a separate process..

   @return True if data was loaded successfully, false otherwise.
   @sa ExecBase(const ParameterList & input_params), saveOutputData()
   */
  virtual bool loadInputData(void);

  /*! \brief Saves all the result data to files specified in the params.

   Saves all the result data generated by the module to files specified
   by values in the params. This is used to either save the data permanantly,
   or to be loaded back in after remote execution is finished and results
   need to be merged by the merge() method.

   @param filenames A list of file names that contain the data necessary to run the module
   @return True if data was saved successfully, false otherwise.
   @sa ExecBase(const ParameterList & input_params), loadInputData(), merge()
   */
  virtual bool saveOutputData(void);


  /*! \brief Performs validation of the input parameters.

   Checks the parameters structure provided in the constructor to see if they
   are sufficient and correct to invoke the module. Also sets the internal
   validity flag so that isValid() will return the correct result.

   @param error A description of the error (if any occurs)
   @return True if the parameters for the module are valid, false otherwise.
   @sa isValid()
   */
  virtual bool validateParams(std::string & error);
  //@}

protected:


  SpecplotInterface specplot;


private:



  //! \name NOT IMPLEMENTED
  //@{
  ReportModuleSpecplot(const ReportModuleBase & that);
  //@}
};

////////////////////////////////////////////////////////////////////////////////
} // namespace specnets
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
