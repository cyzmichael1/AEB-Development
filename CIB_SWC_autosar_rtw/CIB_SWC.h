/*
 * File: CIB_SWC.h
 *
 * Code generated for Simulink model 'CIB_SWC'.
 *
 * Model version                  : 1.148
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed May 12 17:52:40 2021
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CIB_SWC_h_
#define RTW_HEADER_CIB_SWC_h_
#ifndef CIB_SWC_COMMON_INCLUDES_
# define CIB_SWC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CIB_SWC.h"
#endif                                 /* CIB_SWC_COMMON_INCLUDES_ */

#include "CIB_SWC_types.h"

/* Child system includes */
#include "AEB_Lib.h"

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_CIB_SWC_T
{
    AEB_Out AEB_SWC;                   /* '<Root>/AEB_SWC' */
}
B_CIB_SWC_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CIB_SWC_T
{
    MdlrefDW_AEB_Lib_T AEB_SWC_InstanceData;/* '<Root>/AEB_SWC' */
}
DW_CIB_SWC_T;

/* Block signals (default storage) */
extern B_CIB_SWC_T CIB_SWC_B;

/* Block states (default storage) */
extern DW_CIB_SWC_T CIB_SWC_DW;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CIB_SWC'
 */
#endif                                 /* RTW_HEADER_CIB_SWC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
