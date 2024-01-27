/*
 * File: practise1.h
 *
 * Code generated for Simulink model 'practise1'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Jan 27 20:40:15 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_practise1_h_
#define RTW_HEADER_practise1_h_
#ifndef practise1_COMMON_INCLUDES_
#define practise1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* practise1_COMMON_INCLUDES_ */

#include "practise1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S5>/Delay Input1' */
} DW_practise1_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T VectorConcatenate[7];   /* '<Root>/Vector Concatenate' */
  const real_T MatrixConcatenate[2];   /* '<Root>/Matrix Concatenate' */
  const uint8_T BitwiseOperator;       /* '<Root>/Bitwise Operator' */
} ConstB_practise1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
  uint16_T Input1;                     /* '<Root>/Input1' */
  uint16_T Array[10];                  /* '<Root>/Array' */
  uint8_T Input4;                      /* '<Root>/Input4' */
  uint8_T Input3;                      /* '<Root>/Input3' */
  uint8_T Input2;                      /* '<Root>/Input2' */
  real_T Input5;                       /* '<Root>/Input5' */
} ExtU_practise1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T AddResult;                  /* '<Root>/AddResult' */
  uint16_T DivisionResult;             /* '<Root>/Division Result' */
  uint16_T Output;                     /* '<Root>/Output' */
  uint16_T SumResult;                  /* '<Root>/SumResult' */
  uint16_T Maxelement;                 /* '<Root>/Maxelement' */
  real_T Vectorconcatresult[7];        /* '<Root>/Vectorconcatresult' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  uint8_T Out1;                        /* '<Root>/Out1' */
  boolean_T Out3;                      /* '<Root>/Out3' */
} ExtY_practise1_T;

/* Real-time Model Data Structure */
struct tag_RTM_practise1_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_practise1_T practise1_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_practise1_T practise1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_practise1_T practise1_Y;
extern const ConstB_practise1_T practise1_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void practise1_initialize(void);
extern void practise1_step(void);
extern void practise1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_practise1_T *const practise1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Compare' : Unused code path elimination
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<S3>/Compare' : Unused code path elimination
 * Block '<S3>/Constant' : Unused code path elimination
 * Block '<S4>/FixPt Constant' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S4>/FixPt Gateway In' : Unused code path elimination
 * Block '<S4>/FixPt Sum1' : Unused code path elimination
 * Block '<S6>/Delay Input1' : Unused code path elimination
 * Block '<S6>/FixPt Relational Operator' : Unused code path elimination
 * Block '<S7>/Delay Input1' : Unused code path elimination
 * Block '<S7>/FixPt Relational Operator' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display4' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<S8>/FixPt Constant' : Unused code path elimination
 * Block '<S8>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S8>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S8>/FixPt Gateway In' : Unused code path elimination
 * Block '<S8>/FixPt Sum1' : Unused code path elimination
 * Block '<Root>/Logical Operator' : Unused code path elimination
 * Block '<Root>/Sign' : Unused code path elimination
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
 * '<Root>' : 'practise1'
 * '<S1>'   : 'practise1/Bit Clear'
 * '<S2>'   : 'practise1/Compare To Constant'
 * '<S3>'   : 'practise1/Compare To Zero'
 * '<S4>'   : 'practise1/Decrement Stored Integer'
 * '<S5>'   : 'practise1/Detect Change'
 * '<S6>'   : 'practise1/Detect Decrease'
 * '<S7>'   : 'practise1/Detect Increase'
 * '<S8>'   : 'practise1/Increment Stored Integer'
 */
#endif                                 /* RTW_HEADER_practise1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
