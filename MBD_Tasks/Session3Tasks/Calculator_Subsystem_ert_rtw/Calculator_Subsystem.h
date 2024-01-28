/*
 * File: Calculator_Subsystem.h
 *
 * Code generated for Simulink model 'Calculator_Subsystem'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 14:16:18 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Calculator_Subsystem_h_
#define RTW_HEADER_Calculator_Subsystem_h_
#ifndef Calculator_Subsystem_COMMON_INCLUDES_
#define Calculator_Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                               /* Calculator_Subsystem_COMMON_INCLUDES_ */

#include "Calculator_Subsystem_types.h"

/* Child system includes */
#include "Scalar_Calculator.h"

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
  uint8_T Unaryoperand;                /* '<Root>/Unary operand' */
} ExtU_Calculator_Subsystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T ADD_Result;                  /* '<Root>/ADD_Result' */
  uint8_T Sub_Result;                  /* '<Root>/Sub_Result' */
  uint16_T Multiply_Result;            /* '<Root>/Multiply_Result' */
  uint8_T Divide_Result;               /* '<Root>/Divide_Result' */
  uint8_T Increment_Result;            /* '<Root>/Increment_Result' */
  uint8_T Decrement_Result;            /* '<Root>/Decrement_Result' */
  boolean_T Status_check;              /* '<Root>/Status_check' */
} ExtY_Calculator_Subsystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calculator_Subsystem_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Calculator_Subsystem_T Calculator_Subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Calculator_Subsystem_T Calculator_Subsystem_Y;

/* Model entry point functions */
extern void Calculator_Subsystem_initialize(void);
extern void Calculator_Subsystem_step(void);
extern void Calculator_Subsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calculator_Subsystem_T *const Calculator_Subsystem_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S3>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S3>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S4>/FixPt Gateway In' : Eliminate redundant data type conversion
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
 * '<Root>' : 'Calculator_Subsystem'
 * '<S1>'   : 'Calculator_Subsystem/Scalar_Calculator'
 * '<S2>'   : 'Calculator_Subsystem/Scalar_Calculator/Compare To Zero'
 * '<S3>'   : 'Calculator_Subsystem/Scalar_Calculator/Decrement Stored Integer'
 * '<S4>'   : 'Calculator_Subsystem/Scalar_Calculator/Increment Stored Integer'
 */
#endif                                 /* RTW_HEADER_Calculator_Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
