/******************************************************************************
* This material contains trade secrets or otherwise confidential
* information owned by Siemens Industry Software Inc. or its
* affiliates (collectively, "Siemens"), or its licensors. Access to
* and use of this information is strictly limited as set forth in the
* Customer's applicable agreements with Siemens.
*
* Unpublished work. Copyright 2025 Siemens
******************************************************************************/

#include "itf_amesubintf_public.h"

/* Definition of common accessors */
#if defined(DEF_COMMON_ACCESSORS_SIMP00_MINE)
#   undef DEF_COMMON_ACCESSORS_SIMP00_MINE

   /* To get submodel instance number */
#   ifdef GET_submodel_instance
#      error unexpected definition of GET_submodel_instance
#   endif
#   define GET_submodel_instance()  ((void)0, submodel_interface->structuralInfo->n)

   /* To get system instance */
#   ifdef GET_Amesim_system
#      error unexpected definition of GET_Amesim_system
#   endif
#   define GET_Amesim_system()  ((void)0, submodel_interface->amesys)

   /* To know if parameter 'maxstep' is visible */
#   ifdef IS_maxstep_visible
#      error unexpected definition of IS_maxstep_visible
#   endif
#   define IS_maxstep_visible()  ((GET_setmaxstep() == 2))

   /* To get the value of parameter 'maxstep' */
#   ifdef GET_maxstep
#      error unexpected definition of GET_maxstep
#   endif
#   define GET_maxstep()  ((void) 0, submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[0][0]])

   /* To get the address of parameter 'maxstep' */
#   ifdef GET_maxstep_readonly_address
#      error unexpected definition of GET_maxstep_readonly_address
#   endif
#   define GET_maxstep_readonly_address()  ((const double *)(&submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[0][0]]))

   /* To get the default title of parameter 'maxstep' */
#   ifdef GET_maxstep_default_title
#      error unexpected definition of GET_maxstep_default_title
#   endif
#   define GET_maxstep_default_title()  ((const char *)"maximum time step")

   /* To know if parameter 'toler' is visible */
#   ifdef IS_toler_visible
#      error unexpected definition of IS_toler_visible
#   endif
#   define IS_toler_visible()  ((GET_tolermode() == 2))

   /* To get the value of parameter 'toler' */
#   ifdef GET_toler
#      error unexpected definition of GET_toler
#   endif
#   define GET_toler()  ((void) 0, submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[1][0]])

   /* To get the address of parameter 'toler' */
#   ifdef GET_toler_readonly_address
#      error unexpected definition of GET_toler_readonly_address
#   endif
#   define GET_toler_readonly_address()  ((const double *)(&submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[1][0]]))

   /* To get the default title of parameter 'toler' */
#   ifdef GET_toler_default_title
#      error unexpected definition of GET_toler_default_title
#   endif
#   define GET_toler_default_title()  ((const char *)"integrator tolerance")

   /* To know if parameter 'maxcpu' is visible */
#   ifdef IS_maxcpu_visible
#      error unexpected definition of IS_maxcpu_visible
#   endif
#   define IS_maxcpu_visible()  ((GET_setmaxcpu() >= 2))

   /* To get the value of parameter 'maxcpu' */
#   ifdef GET_maxcpu
#      error unexpected definition of GET_maxcpu
#   endif
#   define GET_maxcpu()  ((void) 0, submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[2][0]])

   /* To get the address of parameter 'maxcpu' */
#   ifdef GET_maxcpu_readonly_address
#      error unexpected definition of GET_maxcpu_readonly_address
#   endif
#   define GET_maxcpu_readonly_address()  ((const double *)(&submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[2][0]]))

   /* To get the default title of parameter 'maxcpu' */
#   ifdef GET_maxcpu_default_title
#      error unexpected definition of GET_maxcpu_default_title
#   endif
#   define GET_maxcpu_default_title()  ((const char *)"maximum time")

   /* To know if parameter 'inith' is visible */
#   ifdef IS_inith_visible
#      error unexpected definition of IS_inith_visible
#   endif
#   define IS_inith_visible()  (GET_inithmode() == 2)

   /* To get the value of parameter 'inith' */
#   ifdef GET_inith
#      error unexpected definition of GET_inith
#   endif
#   define GET_inith()  ((void) 0, submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[3][0]])

   /* To get the address of parameter 'inith' */
#   ifdef GET_inith_readonly_address
#      error unexpected definition of GET_inith_readonly_address
#   endif
#   define GET_inith_readonly_address()  ((const double *)(&submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[3][0]]))

   /* To get the default title of parameter 'inith' */
#   ifdef GET_inith_default_title
#      error unexpected definition of GET_inith_default_title
#   endif
#   define GET_inith_default_title()  ((const char *)"initial time step value")

   /* To get the value of parameter 'fixedh' */
#   ifdef GET_fixedh
#      error unexpected definition of GET_fixedh
#   endif
#   define GET_fixedh()  ((void) 0, submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[4][0]])

   /* To get the address of parameter 'fixedh' */
#   ifdef GET_fixedh_readonly_address
#      error unexpected definition of GET_fixedh_readonly_address
#   endif
#   define GET_fixedh_readonly_address()  ((const double *)(&submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[4][0]]))

   /* To get the default title of parameter 'fixedh' */
#   ifdef GET_fixedh_default_title
#      error unexpected definition of GET_fixedh_default_title
#   endif
#   define GET_fixedh_default_title()  ((const char *)"fixed time step")

   /* To know if parameter 'pertvalue' is visible */
#   ifdef IS_pertvalue_visible
#      error unexpected definition of IS_pertvalue_visible
#   endif
#   define IS_pertvalue_visible()  (GET_jacmethod()==4)

   /* To get the value of parameter 'pertvalue' */
#   ifdef GET_pertvalue
#      error unexpected definition of GET_pertvalue
#   endif
#   define GET_pertvalue()  ((void) 0, submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[5][0]])

   /* To get the address of parameter 'pertvalue' */
#   ifdef GET_pertvalue_readonly_address
#      error unexpected definition of GET_pertvalue_readonly_address
#   endif
#   define GET_pertvalue_readonly_address()  ((const double *)(&submodel_interface->simulationInfo->rp[submodel_interface->structuralInfo->pia[5][0]]))

   /* To get the default title of parameter 'pertvalue' */
#   ifdef GET_pertvalue_default_title
#      error unexpected definition of GET_pertvalue_default_title
#   endif
#   define GET_pertvalue_default_title()  ((const char *)"user-defined perturbation value for numerical Jacobian")

   /* To get the value of parameter 'setmaxstep' */
#   ifdef GET_setmaxstep
#      error unexpected definition of GET_setmaxstep
#   endif
#   define GET_setmaxstep()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[6][0]])

   /* To get the address of parameter 'setmaxstep' */
#   ifdef GET_setmaxstep_readonly_address
#      error unexpected definition of GET_setmaxstep_readonly_address
#   endif
#   define GET_setmaxstep_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[6][0]]))

   /* To get the default title of parameter 'setmaxstep' */
#   ifdef GET_setmaxstep_default_title
#      error unexpected definition of GET_setmaxstep_default_title
#   endif
#   define GET_setmaxstep_default_title()  ((const char *)"set a maximum time step")

   /* To get the value of parameter 'tolermode' */
#   ifdef GET_tolermode
#      error unexpected definition of GET_tolermode
#   endif
#   define GET_tolermode()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[7][0]])

   /* To get the address of parameter 'tolermode' */
#   ifdef GET_tolermode_readonly_address
#      error unexpected definition of GET_tolermode_readonly_address
#   endif
#   define GET_tolermode_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[7][0]]))

   /* To get the default title of parameter 'tolermode' */
#   ifdef GET_tolermode_default_title
#      error unexpected definition of GET_tolermode_default_title
#   endif
#   define GET_tolermode_default_title()  ((const char *)"set integrator tolerance")

   /* To get the value of parameter 'setmaxcpu' */
#   ifdef GET_setmaxcpu
#      error unexpected definition of GET_setmaxcpu
#   endif
#   define GET_setmaxcpu()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[8][0]])

   /* To get the address of parameter 'setmaxcpu' */
#   ifdef GET_setmaxcpu_readonly_address
#      error unexpected definition of GET_setmaxcpu_readonly_address
#   endif
#   define GET_setmaxcpu_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[8][0]]))

   /* To get the default title of parameter 'setmaxcpu' */
#   ifdef GET_setmaxcpu_default_title
#      error unexpected definition of GET_setmaxcpu_default_title
#   endif
#   define GET_setmaxcpu_default_title()  ((const char *)"set a maximum time")

   /* To get the value of parameter 'errortype' */
#   ifdef GET_errortype
#      error unexpected definition of GET_errortype
#   endif
#   define GET_errortype()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[9][0]])

   /* To get the address of parameter 'errortype' */
#   ifdef GET_errortype_readonly_address
#      error unexpected definition of GET_errortype_readonly_address
#   endif
#   define GET_errortype_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[9][0]]))

   /* To get the default title of parameter 'errortype' */
#   ifdef GET_errortype_default_title
#      error unexpected definition of GET_errortype_default_title
#   endif
#   define GET_errortype_default_title()  ((const char *)"error test")

   /* To know if parameter 'intol' is visible */
#   ifdef IS_intol_visible
#      error unexpected definition of IS_intol_visible
#   endif
#   define IS_intol_visible()  ((GET_tolermode() == 3))

   /* To get the value of parameter 'intol' */
#   ifdef GET_intol
#      error unexpected definition of GET_intol
#   endif
#   define GET_intol()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[10][0]])

   /* To get the address of parameter 'intol' */
#   ifdef GET_intol_readonly_address
#      error unexpected definition of GET_intol_readonly_address
#   endif
#   define GET_intol_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[10][0]]))

   /* To get the default title of parameter 'intol' */
#   ifdef GET_intol_default_title
#      error unexpected definition of GET_intol_default_title
#   endif
#   define GET_intol_default_title()  ((const char *)"integrator tolerance (log to base 10)")

   /* To get the value of parameter 'expevalerror' */
#   ifdef GET_expevalerror
#      error unexpected definition of GET_expevalerror
#   endif
#   define GET_expevalerror()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[11][0]])

   /* To get the address of parameter 'expevalerror' */
#   ifdef GET_expevalerror_readonly_address
#      error unexpected definition of GET_expevalerror_readonly_address
#   endif
#   define GET_expevalerror_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[11][0]]))

   /* To get the default title of parameter 'expevalerror' */
#   ifdef GET_expevalerror_default_title
#      error unexpected definition of GET_expevalerror_default_title
#   endif
#   define GET_expevalerror_default_title()  ((const char *)"expression evaluation error handling")

   /* To get the value of parameter 'impsolv' */
#   ifdef GET_impsolv
#      error unexpected definition of GET_impsolv
#   endif
#   define GET_impsolv()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[12][0]])

   /* To get the address of parameter 'impsolv' */
#   ifdef GET_impsolv_readonly_address
#      error unexpected definition of GET_impsolv_readonly_address
#   endif
#   define GET_impsolv_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[12][0]]))

   /* To get the default title of parameter 'impsolv' */
#   ifdef GET_impsolv_default_title
#      error unexpected definition of GET_impsolv_default_title
#   endif
#   define GET_impsolv_default_title()  ((const char *)"linear systems solving method for DAEs")

   /* To get the value of parameter 'jacstore' */
#   ifdef GET_jacstore
#      error unexpected definition of GET_jacstore
#   endif
#   define GET_jacstore()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[13][0]])

   /* To get the address of parameter 'jacstore' */
#   ifdef GET_jacstore_readonly_address
#      error unexpected definition of GET_jacstore_readonly_address
#   endif
#   define GET_jacstore_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[13][0]]))

   /* To get the default title of parameter 'jacstore' */
#   ifdef GET_jacstore_default_title
#      error unexpected definition of GET_jacstore_default_title
#   endif
#   define GET_jacstore_default_title()  ((const char *)"Jacobian storage method")

   /* To get the value of parameter 'inithmode' */
#   ifdef GET_inithmode
#      error unexpected definition of GET_inithmode
#   endif
#   define GET_inithmode()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[14][0]])

   /* To get the address of parameter 'inithmode' */
#   ifdef GET_inithmode_readonly_address
#      error unexpected definition of GET_inithmode_readonly_address
#   endif
#   define GET_inithmode_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[14][0]]))

   /* To get the default title of parameter 'inithmode' */
#   ifdef GET_inithmode_default_title
#      error unexpected definition of GET_inithmode_default_title
#   endif
#   define GET_inithmode_default_title()  ((const char *)"initial time step computation")

   /* To get the value of parameter 'matequilib' */
#   ifdef GET_matequilib
#      error unexpected definition of GET_matequilib
#   endif
#   define GET_matequilib()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[15][0]])

   /* To get the address of parameter 'matequilib' */
#   ifdef GET_matequilib_readonly_address
#      error unexpected definition of GET_matequilib_readonly_address
#   endif
#   define GET_matequilib_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[15][0]]))

   /* To get the default title of parameter 'matequilib' */
#   ifdef GET_matequilib_default_title
#      error unexpected definition of GET_matequilib_default_title
#   endif
#   define GET_matequilib_default_title()  ((const char *)"matrix equilibration")

   /* To get the value of parameter 'jacmethod' */
#   ifdef GET_jacmethod
#      error unexpected definition of GET_jacmethod
#   endif
#   define GET_jacmethod()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[16][0]])

   /* To get the address of parameter 'jacmethod' */
#   ifdef GET_jacmethod_readonly_address
#      error unexpected definition of GET_jacmethod_readonly_address
#   endif
#   define GET_jacmethod_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[16][0]]))

   /* To get the default title of parameter 'jacmethod' */
#   ifdef GET_jacmethod_default_title
#      error unexpected definition of GET_jacmethod_default_title
#   endif
#   define GET_jacmethod_default_title()  ((const char *)"perturbation for numerical Jacobian")

   /* To get the value of parameter 'jacheur' */
#   ifdef GET_jacheur
#      error unexpected definition of GET_jacheur
#   endif
#   define GET_jacheur()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[17][0]])

   /* To get the address of parameter 'jacheur' */
#   ifdef GET_jacheur_readonly_address
#      error unexpected definition of GET_jacheur_readonly_address
#   endif
#   define GET_jacheur_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[17][0]]))

   /* To get the default title of parameter 'jacheur' */
#   ifdef GET_jacheur_default_title
#      error unexpected definition of GET_jacheur_default_title
#   endif
#   define GET_jacheur_default_title()  ((const char *)"heuristic for Jacobian computation")

   /* To get the value of parameter 'maxallowedconsrestart' */
#   ifdef GET_maxallowedconsrestart
#      error unexpected definition of GET_maxallowedconsrestart
#   endif
#   define GET_maxallowedconsrestart()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[18][0]])

   /* To get the address of parameter 'maxallowedconsrestart' */
#   ifdef GET_maxallowedconsrestart_readonly_address
#      error unexpected definition of GET_maxallowedconsrestart_readonly_address
#   endif
#   define GET_maxallowedconsrestart_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[18][0]]))

   /* To get the default title of parameter 'maxallowedconsrestart' */
#   ifdef GET_maxallowedconsrestart_default_title
#      error unexpected definition of GET_maxallowedconsrestart_default_title
#   endif
#   define GET_maxallowedconsrestart_default_title()  ((const char *)"maximum consecutive solver step restarts")

   /* To know if parameter 'klubtf' is visible */
#   ifdef IS_klubtf_visible
#      error unexpected definition of IS_klubtf_visible
#   endif
#   define IS_klubtf_visible()  (GET_jacstore() == 4)

   /* To get the value of parameter 'klubtf' */
#   ifdef GET_klubtf
#      error unexpected definition of GET_klubtf
#   endif
#   define GET_klubtf()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[19][0]])

   /* To get the address of parameter 'klubtf' */
#   ifdef GET_klubtf_readonly_address
#      error unexpected definition of GET_klubtf_readonly_address
#   endif
#   define GET_klubtf_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[19][0]]))

   /* To get the default title of parameter 'klubtf' */
#   ifdef GET_klubtf_default_title
#      error unexpected definition of GET_klubtf_default_title
#   endif
#   define GET_klubtf_default_title()  ((const char *)"btf pre ordering")

   /* To know if parameter 'kluordering' is visible */
#   ifdef IS_kluordering_visible
#      error unexpected definition of IS_kluordering_visible
#   endif
#   define IS_kluordering_visible()  (GET_jacstore() == 4)

   /* To get the value of parameter 'kluordering' */
#   ifdef GET_kluordering
#      error unexpected definition of GET_kluordering
#   endif
#   define GET_kluordering()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[20][0]])

   /* To get the address of parameter 'kluordering' */
#   ifdef GET_kluordering_readonly_address
#      error unexpected definition of GET_kluordering_readonly_address
#   endif
#   define GET_kluordering_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[20][0]]))

   /* To get the default title of parameter 'kluordering' */
#   ifdef GET_kluordering_default_title
#      error unexpected definition of GET_kluordering_default_title
#   endif
#   define GET_kluordering_default_title()  ((const char *)"ordering")

   /* To know if parameter 'kluscaling' is visible */
#   ifdef IS_kluscaling_visible
#      error unexpected definition of IS_kluscaling_visible
#   endif
#   define IS_kluscaling_visible()  (GET_jacstore() == 4)

   /* To get the value of parameter 'kluscaling' */
#   ifdef GET_kluscaling
#      error unexpected definition of GET_kluscaling
#   endif
#   define GET_kluscaling()  ((void) 0, submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[21][0]])

   /* To get the address of parameter 'kluscaling' */
#   ifdef GET_kluscaling_readonly_address
#      error unexpected definition of GET_kluscaling_readonly_address
#   endif
#   define GET_kluscaling_readonly_address()  ((const int *)(&submodel_interface->simulationInfo->ip[submodel_interface->structuralInfo->pia[21][0]]))

   /* To get the default title of parameter 'kluscaling' */
#   ifdef GET_kluscaling_default_title
#      error unexpected definition of GET_kluscaling_default_title
#   endif
#   define GET_kluscaling_default_title()  ((const char *)"scaling")

   /* To get the number of defined integer stores */
#   ifdef GET_integer_store_size
#      error unexpected definition of GET_integer_store_size
#   endif
#   define GET_integer_store_size()  1

   /* To set a stored integer */
#   ifdef SET_integer_store
#      error unexpected definition of SET_integer_store
#   endif
#   define SET_integer_store(idx, value)  (*(assert((idx) >= 0 && (idx) < GET_integer_store_size()), &submodel_interface->simulationInfo->ic[idx]) = (value))

   /* To get a stored integer */
#   ifdef GET_integer_store
#      error unexpected definition of GET_integer_store
#   endif
#   define GET_integer_store(idx)  (assert((idx) >= 0 && (idx) < GET_integer_store_size()), submodel_interface->simulationInfo->ic[idx])

   /* To get the address of stored integer array */
#   ifdef GET_integer_store_address
#      error unexpected definition of GET_integer_store_address
#   endif
#   define GET_integer_store_address()  (submodel_interface->simulationInfo->ic)

/* Definition of accessors for 'simp00_mine_in' function */
#elif defined(DEF_ACCESSORS_simp00_mine_in)
#   undef DEF_ACCESSORS_simp00_mine_in

/* Remove accessors of 'simp00_mine_in' function */
#elif defined(UNDEF_ACCESSORS_simp00_mine_in)
#   undef UNDEF_ACCESSORS_simp00_mine_in

/* Common -> SI units for real parameters in 'simp00_mine_in' function */
#elif defined(CONVERT_PARAM_UNIT_TO_SI_simp00_mine_in)
#   undef CONVERT_PARAM_UNIT_TO_SI_simp00_mine_in

/* To end submodel initialization */
#elif defined(END_simp00_mine_in)
#   undef END_simp00_mine_in

/* Definition of accessors for 'simp00_mine_end' function */
#elif defined(DEF_ACCESSORS_simp00_mine_end)
#   undef DEF_ACCESSORS_simp00_mine_end

/* Remove accessors of 'simp00_mine_end' function */
#elif defined(UNDEF_ACCESSORS_simp00_mine_end)
#   undef UNDEF_ACCESSORS_simp00_mine_end

/* Definition of accessors for 'simp00_mine_calc' function */
#elif defined(DEF_ACCESSORS_simp00_mine_calc)
#   undef DEF_ACCESSORS_simp00_mine_calc

/* Remove accessors of 'simp00_mine_calc' function */
#elif defined(UNDEF_ACCESSORS_simp00_mine_calc)
#   undef UNDEF_ACCESSORS_simp00_mine_calc

/* Common -> SI units for variables in 'simp00_mine_calc' function */
#elif defined(CONVERT_VAR_UNIT_TO_SI_simp00_mine_calc)
#   undef CONVERT_VAR_UNIT_TO_SI_simp00_mine_calc

/* SI -> Common units for variables in 'simp00_mine_calc' function */
#elif defined(CONVERT_VAR_UNIT_TO_COMMON_simp00_mine_calc)
#   undef CONVERT_VAR_UNIT_TO_COMMON_simp00_mine_calc

#else
#  error unknown or undefined macro command
#endif
