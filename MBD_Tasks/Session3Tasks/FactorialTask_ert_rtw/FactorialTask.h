/*
 * File: FactorialTask.h
 *
 * Code generated for Simulink model 'FactorialTask'.
 *
 * Model version                  : 1.35
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 13:54:13 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FactorialTask_h_
#define RTW_HEADER_FactorialTask_h_
#ifndef FactorialTask_COMMON_INCLUDES_
#define FactorialTask_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* FactorialTask_COMMON_INCLUDES_ */

#include "FactorialTask_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
  boolean_T InitialCondition;          /* '<Root>/Initial Condition' */
} ExtU_FactorialTask_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
  uint8_T y;                           /* '<Root>/y' */
  int32_T Out2;                        /* '<Root>/Out2' */
} ExtY_FactorialTask_T;

/* Real-time Model Data Structure */
struct tag_RTM_FactorialTask_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_FactorialTask_T FactorialTask_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FactorialTask_T FactorialTask_Y;

/* Model entry point functions */
extern void FactorialTask_initialize(void);
extern void FactorialTask_step(void);
extern void FactorialTask_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FactorialTask_T *const FactorialTask_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Display' : Unused code path elimination
 * Block '<S4>/Display' : Unused code path elimination
 * Block '<S4>/Display1' : Unused code path elimination
 * Block '<S6>/Display' : Unused code path elimination
 * Block '<S6>/Display1' : Unused code path elimination
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
 * '<Root>' : 'FactorialTask'
 * '<S1>'   : 'FactorialTask/Facotrial_forloop'
 * '<S2>'   : 'FactorialTask/Factorial_Matlabfunc'
 * '<S3>'   : 'FactorialTask/Factorial_Whilelloop'
 * '<S4>'   : 'FactorialTask/Facotrial_forloop/For Iterator Subsystem'
 * '<S5>'   : 'FactorialTask/Factorial_Matlabfunc/MATLAB Function'
 * '<S6>'   : 'FactorialTask/Factorial_Whilelloop/While Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_FactorialTask_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
