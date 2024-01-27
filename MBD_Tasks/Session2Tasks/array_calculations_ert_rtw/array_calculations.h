/*
 * File: array_calculations.h
 *
 * Code generated for Simulink model 'array_calculations'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 00:24:49 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_array_calculations_h_
#define RTW_HEADER_array_calculations_h_
#include <math.h>
#ifndef array_calculations_COMMON_INCLUDES_
#define array_calculations_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* array_calculations_COMMON_INCLUDES_ */

#include "array_calculations_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T ArrayOfElements[10];          /* '<Root>/ArrayOfElements' */
} ExtU_array_calculations_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T MaxElement;                   /* '<Root>/MaxElement' */
  real_T MinElement;                   /* '<Root>/MinElement' */
  real_T Average;                      /* '<Root>/Average' */
  real_T Sumofarray;                   /* '<Root>/Sumofarray' */
  real_T NumberOfelements;             /* '<Root>/NumberOfelements' */
} ExtY_array_calculations_T;

/* Real-time Model Data Structure */
struct tag_RTM_array_calculations_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_array_calculations_T array_calculations_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_array_calculations_T array_calculations_Y;

/* Model entry point functions */
extern void array_calculations_initialize(void);
extern void array_calculations_step(void);
extern void array_calculations_terminate(void);

/* Real-time Model object */
extern RT_MODEL_array_calculations_T *const array_calculations_M;

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
 * '<Root>' : 'array_calculations'
 * '<S1>'   : 'array_calculations/ArrayOperations'
 * '<S2>'   : 'array_calculations/AverageofArrayCalculation'
 * '<S3>'   : 'array_calculations/ArrayOperations/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_array_calculations_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
