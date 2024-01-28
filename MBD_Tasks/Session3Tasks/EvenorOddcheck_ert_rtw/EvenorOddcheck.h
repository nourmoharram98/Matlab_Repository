/*
 * File: EvenorOddcheck.h
 *
 * Code generated for Simulink model 'EvenorOddcheck'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 16:59:35 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EvenorOddcheck_h_
#define RTW_HEADER_EvenorOddcheck_h_
#include <string.h>
#ifndef EvenorOddcheck_COMMON_INCLUDES_
#define EvenorOddcheck_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EvenorOddcheck_COMMON_INCLUDES_ */

#include "EvenorOddcheck_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<S4>/String Constant' */
  const char_T StringConstant_g[256];  /* '<S3>/String Constant' */
} ConstB_EvenorOddcheck_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
} ExtU_EvenorOddcheck_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
  char_T out2[256];                    /* '<Root>/out2' */
} ExtY_EvenorOddcheck_T;

/* Real-time Model Data Structure */
struct tag_RTM_EvenorOddcheck_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_EvenorOddcheck_T EvenorOddcheck_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_EvenorOddcheck_T EvenorOddcheck_Y;
extern const ConstB_EvenorOddcheck_T EvenorOddcheck_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void EvenorOddcheck_initialize(void);
extern void EvenorOddcheck_step(void);
extern void EvenorOddcheck_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EvenorOddcheck_T *const EvenorOddcheck_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<S1>/Display' : Unused code path elimination
 */

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
 * '<Root>' : 'EvenorOddcheck'
 * '<S1>'   : 'EvenorOddcheck/EvenOddCheck'
 * '<S2>'   : 'EvenorOddcheck/EvenOddCheck_Matlabfunc'
 * '<S3>'   : 'EvenorOddcheck/EvenOddCheck/If Action Subsystem'
 * '<S4>'   : 'EvenorOddcheck/EvenOddCheck/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_EvenorOddcheck_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
