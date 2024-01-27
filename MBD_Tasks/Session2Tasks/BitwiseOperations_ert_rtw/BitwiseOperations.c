/*
 * File: BitwiseOperations.c
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

#include "BitwiseOperations.h"
#include "BitwiseOperations_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_BitwiseOperations_T BitwiseOperations_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BitwiseOperations_T BitwiseOperations_Y;

/* Real-time model */
static RT_MODEL_BitwiseOperations_T BitwiseOperations_M_;
RT_MODEL_BitwiseOperations_T *const BitwiseOperations_M = &BitwiseOperations_M_;

/* Model step function */
void BitwiseOperations_step(void)
{
  /* Outport: '<Root>/BitwiseOrResult' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOR'
   *  S-Function (sfix_bitop): '<S1>/Bitwise OR'
   */
  BitwiseOperations_Y.BitwiseOrResult = (uint8_T)(BitwiseOperations_U.Operand1 |
    BitwiseOperations_U.Operand2);

  /* Outport: '<Root>/BitwiseAndResult' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND'
   */
  BitwiseOperations_Y.BitwiseAndResult = (uint8_T)(BitwiseOperations_U.Operand1
    & BitwiseOperations_U.Operand2);

  /* Outport: '<Root>/BitwiseXORResult' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise XOR'
   */
  BitwiseOperations_Y.BitwiseXORResult = (uint8_T)(BitwiseOperations_U.Operand1 ^
    BitwiseOperations_U.Operand2);

  /* Outport: '<Root>/BitwiseNORResult' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOR'
   */
  BitwiseOperations_Y.BitwiseNORResult = (uint8_T)
    ~BitwiseOperations_Y.BitwiseOrResult;

  /* Outport: '<Root>/NOTforOp1' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Logic: '<S1>/NOT'
   */
  BitwiseOperations_Y.NOTforOp1 = (BitwiseOperations_U.Operand1 == 0);

  /* Outport: '<Root>/NOTforOp2' incorporates:
   *  Inport: '<Root>/Operand2'
   *  Logic: '<S1>/NOT1'
   */
  BitwiseOperations_Y.NOTforOp2 = (BitwiseOperations_U.Operand2 == 0);
}

/* Model initialize function */
void BitwiseOperations_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void BitwiseOperations_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
