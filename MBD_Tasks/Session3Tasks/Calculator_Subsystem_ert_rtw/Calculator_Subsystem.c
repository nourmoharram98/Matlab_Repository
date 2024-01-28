/*
 * File: Calculator_Subsystem.c
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

#include "Calculator_Subsystem.h"
#include "Calculator_Subsystem_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_Subsystem_T Calculator_Subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_Subsystem_T Calculator_Subsystem_Y;

/* Real-time model */
static RT_MODEL_Calculator_Subsystem_T Calculator_Subsystem_M_;
RT_MODEL_Calculator_Subsystem_T *const Calculator_Subsystem_M =
  &Calculator_Subsystem_M_;

/* Model step function */
void Calculator_Subsystem_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Scalar_Calculator' */

  /* Inport: '<Root>/Operand1' incorporates:
   *  Inport: '<Root>/Operand2'
   *  Inport: '<Root>/Unary operand'
   *  Outport: '<Root>/ADD_Result'
   *  Outport: '<Root>/Decrement_Result'
   *  Outport: '<Root>/Divide_Result'
   *  Outport: '<Root>/Increment_Result'
   *  Outport: '<Root>/Multiply_Result'
   *  Outport: '<Root>/Status_check'
   *  Outport: '<Root>/Sub_Result'
   */
  Calculator_Su_Scalar_Calculator(Calculator_Subsystem_U.Operand1,
    Calculator_Subsystem_U.Operand2, Calculator_Subsystem_U.Unaryoperand,
    &Calculator_Subsystem_Y.ADD_Result, &Calculator_Subsystem_Y.Sub_Result,
    &Calculator_Subsystem_Y.Multiply_Result,
    &Calculator_Subsystem_Y.Divide_Result,
    &Calculator_Subsystem_Y.Increment_Result,
    &Calculator_Subsystem_Y.Decrement_Result,
    &Calculator_Subsystem_Y.Status_check);

  /* End of Outputs for SubSystem: '<Root>/Scalar_Calculator' */
}

/* Model initialize function */
void Calculator_Subsystem_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Calculator_Subsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
