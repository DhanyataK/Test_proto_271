/* Submodel SIMP00_MINE skeleton created by AME Submodel editing utility
   Thu Jan 9 14:53:27 2025 */



#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "ameutils.h"
/* *******************************************************************************
TITLE : SIMP00
 
------------------------------------------------------------------------------
DESCRIPTION :
 
   This submodel is designed to allow changes to integrator
   tolerances and maximum time step in a batch run. It can also
   be used in standard runs in order to stop the simulation if the
   CPU time is getting bigger than a given limit. Note that the
   values set in this submodel take priorty over the values in the
   Run Parameters dialog box.
 
------------------------------------------------------------------------------
USAGE :
 
   This submodel is convenient to control some simulation parameters within a
   batch or optimization run. Use only one instance of SIMP00 on the sketch.
 
------------------------------------------------------------------------------
PARAMETER SETTINGS :
 
   Enumerations allow the user to control various settings of the simulation
   among which the integrator tolerance, the maximum time step and the maximum
   CPU time.
   Normally values of 1.0e-12 up to 1.0e-3 are satisfactory for
   the tolerance. The default value for the maximum time step is
   set to 1.0e+30 seconds.
 
------------------------------------------------------------------------------
REVISIONS :
--------------------------------------------------------------------------------
SOURCE :

   This material contains trade secrets or otherwise confidential
   information owned by Siemens Industry Software Inc. or its
   affiliates (collectively, "Siemens"), or its licensors. Access to
   and use of this information is strictly limited as set forth in the
   Customer's applicable agreements with Siemens.
   
   Unpublished work. Copyright 2024 Siemens

******************************************************************************* */

#define _SUBMODELNAME_ "SIMP00_MINE"

/* >>>>>>>>>>>>Insert Private Code Here. */
#define CALL_PERIOD 1000

/* <<<<<<<<<<<<End of Private Code. */

/*
   Definition of accessors:
    - GET_submodel_instance(): To get submodel instance number
    - GET_Amesim_system(): To get system instance
    - IS_maxstep_visible(): To know if parameter 'maxstep' is visible
    - GET_maxstep(): To get the value of parameter 'maxstep'
    - GET_maxstep_readonly_address(): To get the address of parameter 'maxstep'
    - GET_maxstep_default_title(): To get the default title of parameter 'maxstep'
    - IS_toler_visible(): To know if parameter 'toler' is visible
    - GET_toler(): To get the value of parameter 'toler'
    - GET_toler_readonly_address(): To get the address of parameter 'toler'
    - GET_toler_default_title(): To get the default title of parameter 'toler'
    - IS_maxcpu_visible(): To know if parameter 'maxcpu' is visible
    - GET_maxcpu(): To get the value of parameter 'maxcpu'
    - GET_maxcpu_readonly_address(): To get the address of parameter 'maxcpu'
    - GET_maxcpu_default_title(): To get the default title of parameter 'maxcpu'
    - IS_inith_visible(): To know if parameter 'inith' is visible
    - GET_inith(): To get the value of parameter 'inith'
    - GET_inith_readonly_address(): To get the address of parameter 'inith'
    - GET_inith_default_title(): To get the default title of parameter 'inith'
    - GET_fixedh(): To get the value of parameter 'fixedh'
    - GET_fixedh_readonly_address(): To get the address of parameter 'fixedh'
    - GET_fixedh_default_title(): To get the default title of parameter 'fixedh'
    - IS_pertvalue_visible(): To know if parameter 'pertvalue' is visible
    - GET_pertvalue(): To get the value of parameter 'pertvalue'
    - GET_pertvalue_readonly_address(): To get the address of parameter 'pertvalue'
    - GET_pertvalue_default_title(): To get the default title of parameter 'pertvalue'
    - GET_setmaxstep(): To get the value of parameter 'setmaxstep'
    - GET_setmaxstep_readonly_address(): To get the address of parameter 'setmaxstep'
    - GET_setmaxstep_default_title(): To get the default title of parameter 'setmaxstep'
    - GET_tolermode(): To get the value of parameter 'tolermode'
    - GET_tolermode_readonly_address(): To get the address of parameter 'tolermode'
    - GET_tolermode_default_title(): To get the default title of parameter 'tolermode'
    - GET_setmaxcpu(): To get the value of parameter 'setmaxcpu'
    - GET_setmaxcpu_readonly_address(): To get the address of parameter 'setmaxcpu'
    - GET_setmaxcpu_default_title(): To get the default title of parameter 'setmaxcpu'
    - GET_errortype(): To get the value of parameter 'errortype'
    - GET_errortype_readonly_address(): To get the address of parameter 'errortype'
    - GET_errortype_default_title(): To get the default title of parameter 'errortype'
    - IS_intol_visible(): To know if parameter 'intol' is visible
    - GET_intol(): To get the value of parameter 'intol'
    - GET_intol_readonly_address(): To get the address of parameter 'intol'
    - GET_intol_default_title(): To get the default title of parameter 'intol'
    - GET_expevalerror(): To get the value of parameter 'expevalerror'
    - GET_expevalerror_readonly_address(): To get the address of parameter 'expevalerror'
    - GET_expevalerror_default_title(): To get the default title of parameter 'expevalerror'
    - GET_impsolv(): To get the value of parameter 'impsolv'
    - GET_impsolv_readonly_address(): To get the address of parameter 'impsolv'
    - GET_impsolv_default_title(): To get the default title of parameter 'impsolv'
    - GET_jacstore(): To get the value of parameter 'jacstore'
    - GET_jacstore_readonly_address(): To get the address of parameter 'jacstore'
    - GET_jacstore_default_title(): To get the default title of parameter 'jacstore'
    - GET_inithmode(): To get the value of parameter 'inithmode'
    - GET_inithmode_readonly_address(): To get the address of parameter 'inithmode'
    - GET_inithmode_default_title(): To get the default title of parameter 'inithmode'
    - GET_matequilib(): To get the value of parameter 'matequilib'
    - GET_matequilib_readonly_address(): To get the address of parameter 'matequilib'
    - GET_matequilib_default_title(): To get the default title of parameter 'matequilib'
    - GET_jacmethod(): To get the value of parameter 'jacmethod'
    - GET_jacmethod_readonly_address(): To get the address of parameter 'jacmethod'
    - GET_jacmethod_default_title(): To get the default title of parameter 'jacmethod'
    - GET_jacheur(): To get the value of parameter 'jacheur'
    - GET_jacheur_readonly_address(): To get the address of parameter 'jacheur'
    - GET_jacheur_default_title(): To get the default title of parameter 'jacheur'
    - GET_maxallowedconsrestart(): To get the value of parameter 'maxallowedconsrestart'
    - GET_maxallowedconsrestart_readonly_address(): To get the address of parameter 'maxallowedconsrestart'
    - GET_maxallowedconsrestart_default_title(): To get the default title of parameter 'maxallowedconsrestart'
    - IS_klubtf_visible(): To know if parameter 'klubtf' is visible
    - GET_klubtf(): To get the value of parameter 'klubtf'
    - GET_klubtf_readonly_address(): To get the address of parameter 'klubtf'
    - GET_klubtf_default_title(): To get the default title of parameter 'klubtf'
    - IS_kluordering_visible(): To know if parameter 'kluordering' is visible
    - GET_kluordering(): To get the value of parameter 'kluordering'
    - GET_kluordering_readonly_address(): To get the address of parameter 'kluordering'
    - GET_kluordering_default_title(): To get the default title of parameter 'kluordering'
    - IS_kluscaling_visible(): To know if parameter 'kluscaling' is visible
    - GET_kluscaling(): To get the value of parameter 'kluscaling'
    - GET_kluscaling_readonly_address(): To get the address of parameter 'kluscaling'
    - GET_kluscaling_default_title(): To get the default title of parameter 'kluscaling'
    - GET_integer_store_size(): To get the number of defined integer stores
    - SET_integer_store(idx, value): To set a stored integer
    - GET_integer_store(idx): To get a stored integer
    - GET_integer_store_address(): To get the address of stored integer array
*/
#define DEF_COMMON_ACCESSORS_SIMP00_MINE
#include "SIMP00_MINE.impl.h"


/* There are 6 real parameters:

   maxstep   maximum time step                                      [s]
   toler     integrator tolerance                                   [null]
   maxcpu    maximum time                                           [s]
   inith     initial time step value                                [s]
   fixedh    fixed time step                                        [s]
   pertvalue user-defined perturbation value for numerical Jacobian [null]
*/


/* There are 16 integer parameters:

   setmaxstep            set a maximum time step                 
   tolermode             set integrator tolerance                
   setmaxcpu             set a maximum time                      
   errortype             error test                              
   intol                 integrator tolerance (log to base 10)   
   expevalerror          expression evaluation error handling    
   impsolv               linear systems solving method for DAEs  
   jacstore              Jacobian storage method                 
   inithmode             initial time step computation           
   matequilib            matrix equilibration                    
   jacmethod             perturbation for numerical Jacobian     
   jacheur               heuristic for Jacobian computation      
   maxallowedconsrestart maximum consecutive solver step restarts
   klubtf                btf pre ordering                        
   kluordering           ordering                                
   kluscaling            scaling                                 
*/

AMEModelStatus simp00_mine_in(
   const S_AMESubIntf* submodel_interface
)
{
   int loop, error;
   
   const int submodel_instance = GET_submodel_instance();
   AMEModelStatus ret_status = AME_MODEL_OK;
/* >>>>>>>>>>>>Extra Initialization Function Declarations Here. */
   AmeNumericJacobianMethod amejacmethod;
   AmeNumericJacobianHeuristic amejacheur;

/* <<<<<<<<<<<<End of Extra Initialization declarations. */
   int setmaxstep, tolermode, setmaxcpu, errortype, intol, 
      expevalerror, impsolv, jacstore, inithmode, matequilib, 
      jacmethod, jacheur, maxallowedconsrestart, klubtf, kluordering, 
      kluscaling;
   double maxstep, toler, maxcpu, inith, fixedh, pertvalue;

   /* integer parameters assignation */
   setmaxstep = GET_setmaxstep();
   tolermode = GET_tolermode();
   setmaxcpu = GET_setmaxcpu();
   errortype = GET_errortype();
   intol = GET_intol();
   expevalerror = GET_expevalerror();
   impsolv = GET_impsolv();
   jacstore = GET_jacstore();
   inithmode = GET_inithmode();
   matequilib = GET_matequilib();
   jacmethod = GET_jacmethod();
   jacheur = GET_jacheur();
   maxallowedconsrestart = GET_maxallowedconsrestart();
   klubtf = GET_klubtf();
   kluordering = GET_kluordering();
   kluscaling = GET_kluscaling();

   /* real parameters assignation */
   maxstep = GET_maxstep();
   toler = GET_toler();
   maxcpu = GET_maxcpu();
   inith = GET_inith();
   fixedh = GET_fixedh();
   pertvalue = GET_pertvalue();
   loop = 0;
   error = 0;

/*
   If necessary, check values of the following:

   rp[0..5]
*/


/* >>>>>>>>>>>>Initialization Function Check Statements. */

   if ( submodel_instance> 1)
   {
      amefprintf(stderr, "\nOnly one instance is allowed on sketch.\n");
      error = 2;
   }


/* <<<<<<<<<<<<End of Initialization Check Statements. */

/*   Integer parameter checking:   */

   if (setmaxstep < 1 || setmaxstep > 2)
   {
      amefprintf(stderr, "\nset a maximum time step must be in range [1..2].\n");
      error = 2;
   }
   if (tolermode < 1 || tolermode > 3)
   {
      amefprintf(stderr, "\nset integrator tolerance must be in range [1..3].\n");
      error = 2;
   }
   if (setmaxcpu < 1 || setmaxcpu > 3)
   {
      amefprintf(stderr, "\nset a maximum time must be in range [1..3].\n");
      error = 2;
   }
   if (errortype < 1 || errortype > 3)
   {
      amefprintf(stderr, "\nerror test must be in range [1..3].\n");
      error = 2;
   }
   if (IS_intol_visible())
   {
      if (intol < -14 || intol > -2)
      {
         amefprintf(stderr, "\nintegrator tolerance (log to base 10) must be in range [-14..-2].\n");
         error = 2;
      }
   }
   if (expevalerror < 1 || expevalerror > 3)
   {
      amefprintf(stderr, "\nexpression evaluation error handling must be in range [1..3].\n");
      error = 2;
   }
   if (impsolv < 1 || impsolv > 2)
   {
      amefprintf(stderr, "\nlinear systems solving method for DAEs must be in range [1..2].\n");
      error = 2;
   }
   if (jacstore < 1 || jacstore > 4)
   {
      amefprintf(stderr, "\nJacobian storage method must be in range [1..4].\n");
      error = 2;
   }
   if (inithmode < 1 || inithmode > 2)
   {
      amefprintf(stderr, "\ninitial time step computation must be in range [1..2].\n");
      error = 2;
   }
   if (matequilib < 1 || matequilib > 2)
   {
      amefprintf(stderr, "\nmatrix equilibration must be in range [1..2].\n");
      error = 2;
   }
   if (jacmethod < 1 || jacmethod > 4)
   {
      amefprintf(stderr, "\nperturbation for numerical Jacobian must be in range [1..4].\n");
      error = 2;
   }
   if (jacheur < 1 || jacheur > 2)
   {
      amefprintf(stderr, "\nheuristic for Jacobian computation must be in range [1..2].\n");
      error = 2;
   }
   if (maxallowedconsrestart < 0 || maxallowedconsrestart > 100000)
   {
      amefprintf(stderr, "\nmaximum consecutive solver step restarts must be in range [0..100000].\n");
      error = 2;
   }
   if (IS_klubtf_visible())
   {
      if (klubtf < 1 || klubtf > 2)
      {
         amefprintf(stderr, "\nbtf pre ordering must be in range [1..2].\n");
         error = 2;
      }
   }
   if (IS_kluordering_visible())
   {
      if (kluordering < 1 || kluordering > 2)
      {
         amefprintf(stderr, "\nordering must be in range [1..2].\n");
         error = 2;
      }
   }
   if (IS_kluscaling_visible())
   {
      if (kluscaling < 1 || kluscaling > 3)
      {
         amefprintf(stderr, "\nscaling must be in range [1..3].\n");
         error = 2;
      }
   }

   if (ameHandleSubmodelError2(_SUBMODELNAME_, submodel_instance, error))
   {
      return AME_MODEL_FATAL;
   }

/* Common -> SI units conversions. */
#define CONVERT_PARAM_UNIT_TO_SI_simp00_mine_in
#include "SIMP00_MINE.impl.h"


/* >>>>>>>>>>>>Initialization Function Executable Statements. */

   errortype--;    /* Convert range from [1,3] to [0,2]. */
   expevalerror--; /* Convert range from [1,3] to [0,2]. */

   SET_integer_store(0, 0);

   expsetquieteval_(&expevalerror);


   if(!isfixedstepsolver_())
   {
      /* Set tolerance. Note that the error type is not
      set when tolerance is not set. */
      if (tolermode == 2) /* Set tolerance in "normal" mode. */
      {
         setintol_(&toler, &errortype);
      }
      else if (tolermode == 3) /* Set tolerance in "log to base 10" mode. */
      {
         double dtoler = pow(10.0, (double)intol);
         setintol_(&dtoler, &errortype);
      }

      if (setmaxstep == 2)
      {
         setmaxstep_(&maxstep);
      }

      setDAEsolver_(impsolv-1);
      if (inithmode >1)
      {
         EnforceAMEInitStep(inith);
      }
#ifndef AMERT
      /* This option (sparse/not sparse) has very little to do for
      real-time simulation and as we don't compile all files for
      real-time platforms it is better to exclude this code (the call
      to setusesparse) from the compiled code */

      if (jacstore == 1)
      {
         /* legacy "automatic" mode */
         setKLU(GET_Amesim_system(), AME_LEGACY_SPARSE_STORAGE);
         setJacobianStorage(GET_Amesim_system(), (GET_Amesim_system()->neq < SPARSE_LIMIT) ? 0 : 1);
      }
      else if (jacstore > 1) /* Not in "auto" mode. */
      {
         if(IS_klubtf_visible())
         {
            int btf = (GET_klubtf() == 1) ? 1 : 0;
            setKLUOptions(GET_Amesim_system(), btf, GET_kluordering()-1, GET_kluscaling()-1);
            jacstore = 3;
         }
         else
         {
            setKLU(GET_Amesim_system(), AME_LEGACY_SPARSE_STORAGE);
         }
         jacstore -= 2; /* Convert from [2,3] to [0,1]. */
         setJacobianStorage(GET_Amesim_system(), jacstore);
      }

      if (matequilib == 2)
      {
         matequilib -= 1; /* Convert from [1,2] to [0,1]. */
         SetMatrixEquilibration(matequilib);
      }

#endif

    }
   else
   {
      if (fixedh >0.0)
      {
         SetFixedTimeStep(fixedh);
      }
   }

   amejacmethod = jacmethod - 1;
   setNumericalJacobianMethod(amejacmethod);

   if (amejacmethod == AME_USER_DEFINED_JAC)
   {
      setNumericalJacobianPerturbation(pertvalue);
   }

   amejacheur = jacheur - 1;
   setNumericalJacobianHeuristic(GET_Amesim_system(), amejacheur);

   setMaxAllowedConsRestart(maxallowedconsrestart);


/* <<<<<<<<<<<<End of Initialization Executable Statements. */
#define END_simp00_mine_in
#include "SIMP00_MINE.impl.h"
   return ret_status;
}

AMEModelStatus simp00_mine_end(
   const S_AMESubIntf* submodel_interface
)
{
   int loop, error;
   
   const int submodel_instance = GET_submodel_instance();
   AMEModelStatus ret_status = AME_MODEL_OK;
/* >>>>>>>>>>>>Extra Terminate Function Declarations Here. */
/* <<<<<<<<<<<<End of Extra Terminate declarations. */
   int setmaxstep, tolermode, setmaxcpu, errortype, intol, 
      expevalerror, impsolv, jacstore, inithmode, matequilib, 
      jacmethod, jacheur, maxallowedconsrestart, klubtf, kluordering, 
      kluscaling;
   double maxstep, toler, maxcpu, inith, fixedh, pertvalue;

   /* integer parameters assignation */
   setmaxstep = GET_setmaxstep();
   tolermode = GET_tolermode();
   setmaxcpu = GET_setmaxcpu();
   errortype = GET_errortype();
   intol = GET_intol();
   expevalerror = GET_expevalerror();
   impsolv = GET_impsolv();
   jacstore = GET_jacstore();
   inithmode = GET_inithmode();
   matequilib = GET_matequilib();
   jacmethod = GET_jacmethod();
   jacheur = GET_jacheur();
   maxallowedconsrestart = GET_maxallowedconsrestart();
   klubtf = GET_klubtf();
   kluordering = GET_kluordering();
   kluscaling = GET_kluscaling();

   /* real parameters assignation */
   maxstep = GET_maxstep();
   toler = GET_toler();
   maxcpu = GET_maxcpu();
   inith = GET_inith();
   fixedh = GET_fixedh();
   pertvalue = GET_pertvalue();
   loop = 0;
   error = 0;


/* >>>>>>>>>>>>Terminate Function Executable Statements. */
/* <<<<<<<<<<<<End of Terminate Executable Statements. */
   return ret_status;
}



/*  There are 0 ports.
*/

/*  There are 0 internal variables.

*/

AMEModelStatus simp00_mine_calc(
   const S_AMESubIntf* submodel_interface
)
{
   int loop;
   
   const int submodel_instance = GET_submodel_instance();
   AMEModelStatus ret_status = AME_MODEL_OK;
/* >>>>>>>>>>>>Extra Calculation Function Declarations Here. */
   double currtime;

/* <<<<<<<<<<<<End of Extra Calculation declarations. */
   int setmaxstep, tolermode, setmaxcpu, errortype, intol, 
      expevalerror, impsolv, jacstore, inithmode, matequilib, 
      jacmethod, jacheur, maxallowedconsrestart, klubtf, kluordering, 
      kluscaling;
   double maxstep, toler, maxcpu, inith, fixedh, pertvalue;

   /* integer parameters assignation */
   setmaxstep = GET_setmaxstep();
   tolermode = GET_tolermode();
   setmaxcpu = GET_setmaxcpu();
   errortype = GET_errortype();
   intol = GET_intol();
   expevalerror = GET_expevalerror();
   impsolv = GET_impsolv();
   jacstore = GET_jacstore();
   inithmode = GET_inithmode();
   matequilib = GET_matequilib();
   jacmethod = GET_jacmethod();
   jacheur = GET_jacheur();
   maxallowedconsrestart = GET_maxallowedconsrestart();
   klubtf = GET_klubtf();
   kluordering = GET_kluordering();
   kluscaling = GET_kluscaling();

   /* real parameters assignation */
   maxstep = GET_maxstep();
   toler = GET_toler();
   maxcpu = GET_maxcpu();
   inith = GET_inith();
   fixedh = GET_fixedh();
   pertvalue = GET_pertvalue();
   loop = 0;

/* Common -> SI units conversions. */

#define CONVERT_VAR_UNIT_TO_SI_simp00_mine_calc
#include "SIMP00_MINE.impl.h"


/* >>>>>>>>>>>>Calculation Function Executable Statements. */

   if (setmaxcpu >= 2)
   {
      SET_integer_store(0, 1); /* Internal counter for reducing the calls to GetCPUTime. */

      if (GET_integer_store(0) >= CALL_PERIOD)
      {
         SET_integer_store(0, 0);
		 /* INTFSLV-9566 - Compute the CPU time and the Wall time before querying it */
         ProcessTime(1);
         if (setmaxcpu == 2)
         {
            currtime = GetCPUTime();
         }
         else
         {
            currtime = GetWallTime();
         }
         if (currtime >= maxcpu)
         {
            if (setmaxcpu == 2)
               amefprintf(stderr, "\nMaximum CPU time (%g seconds) is reached.\n", maxcpu);
            else
               amefprintf(stderr, "\nMaximum elapsed time (%g seconds) is reached.\n", maxcpu);

            amefprintf(stderr, "Simulation aborted by %s instance %d.\n", _SUBMODELNAME_, submodel_instance);
            AmeExit(1);
         }
      }
   }


/* <<<<<<<<<<<<End of Calculation Executable Statements. */

/* SI -> Common units conversions. */

#define CONVERT_VAR_UNIT_TO_COMMON_simp00_mine_calc
#include "SIMP00_MINE.impl.h"
   return ret_status;
}

