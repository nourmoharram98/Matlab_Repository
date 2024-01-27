/*
 * File: BitwiseOperations.h
 *
 * Code generated for Simulink model 'BitwiseOperations'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 00:41:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BitwiseOperations_h_
#define RTW_HEADER_BitwiseOperations_h_
#ifndef BitwiseOperations_COMMON_INCLUDES_
#define BitwiseOperations_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* BitwiseOperations_COMMON_INCLUDES_ */

#include "BitwiseOperations_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Operand1;                    /* '<Root>/Operand1' */
  uint8_T Operand2;                    /* '<Root>/Operand2' */
} ExtU_BitwiseOperations_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T BitwiseOrResult;             /* '<Root>/BitwiseOrResult' */
  uint8_T BitwiseAndResult;            /* '<Root>/BitwiseAndResult' */
  uint8_T BitwiseXORResult;            /* '<Root>/BitwiseXORResult' */
  uint8_T BitwiseNORResult;            /* '<Root>/BitwiseNORResult' */
  boolean_T NOTforOp1;                 /* '<Root>/NOTforOp1' */
  boolean_T NOTforOp2;                 /* '<Root>/NOTforOp2' */
} ExtY_BitwiseOperations_T;

/* Real-time Model Data Structure */
struct tag_RTM_BitwiseOperations_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_BitwiseOperations_T BitwiseOperations_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_BitwiseOperations_T BitwiseOperations_Y;

/* Model entry point functions */
extern void BitwiseOperations_initialize(void);
extern void BitwiseOperations_step(void);
extern void BitwiseOperations_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BitwiseOperations_T *const BitwiseOperations_M;

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
 * '<Root>' : 'BitwiseOperations'
 * '<S1>'   : 'BitwiseOperations/Subsystem'
 */
#endif                                 /* RTW_HEADER_BitwiseOperations_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
