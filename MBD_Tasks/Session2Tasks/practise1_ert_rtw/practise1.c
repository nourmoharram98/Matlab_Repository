/*
 * File: practise1.c
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

#include "practise1.h"
#include "practise1_private.h"

/* Block states (default storage) */
DW_practise1_T practise1_DW;

/* External inputs (root inport signals with default storage) */
ExtU_practise1_T practise1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_practise1_T practise1_Y;

/* Real-time model */
static RT_MODEL_practise1_T practise1_M_;
RT_MODEL_practise1_T *const practise1_M = &practise1_M_;
uint16_T rt_sqrt_Uu16_Yu16_Iu32_f_s(uint16_T u)
{
  int32_T iBit;
  uint16_T shiftMask;
  uint16_T tmp01_y;
  uint16_T y;

  /* Fixed-Point Sqrt Computation by the bisection method. */
  if (u > 0) {
    y = 0U;
    shiftMask = 32768U;
    for (iBit = 0; iBit < 16; iBit++) {
      tmp01_y = (uint16_T)(y | shiftMask);
      if ((uint32_T)tmp01_y * tmp01_y <= u) {
        y = tmp01_y;
      }

      shiftMask = (uint16_T)((uint32_T)shiftMask >> 1U);
    }
  } else {
    y = 0U;
  }

  return y;
}

/* Model step function */
void practise1_step(void)
{
  int32_T sigIdx;
  uint32_T tmp;
  uint16_T u1;

  /* Outport: '<Root>/AddResult' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  practise1_Y.AddResult = (uint16_T)((uint32_T)practise1_U.Input +
    practise1_U.Input1);

  /* Outport: '<Root>/Division Result' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Divide'
   */
  practise1_Y.DivisionResult = (uint16_T)(practise1_U.Input1 == 0U ?
    MAX_uint32_T : (uint32_T)practise1_U.Input / practise1_U.Input1);

  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input1'
   *  Sqrt: '<Root>/Sqrt'
   */
  practise1_Y.Output = rt_sqrt_Uu16_Yu16_Iu32_f_s(practise1_U.Input1);

  /* Sum: '<Root>/Sum of Elements' incorporates:
   *  Inport: '<Root>/Array'
   */
  tmp = 0U;
  for (sigIdx = 0; sigIdx < 10; sigIdx++) {
    tmp += practise1_U.Array[sigIdx];
  }

  /* Outport: '<Root>/SumResult' incorporates:
   *  Sum: '<Root>/Sum of Elements'
   */
  practise1_Y.SumResult = (uint16_T)tmp;

  /* MinMax: '<Root>/MinMax' incorporates:
   *  Inport: '<Root>/Array'
   */
  practise1_Y.Maxelement = practise1_U.Array[0];
  for (sigIdx = 0; sigIdx < 9; sigIdx++) {
    u1 = practise1_U.Array[sigIdx + 1];
    if (practise1_Y.Maxelement <= u1) {
      practise1_Y.Maxelement = u1;
    }
  }

  /* End of MinMax: '<Root>/MinMax' */

  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Input2'
   *  S-Function (sfix_bitop): '<S1>/FixPt Bitwise Operator3'
   *  S-Function (sfix_bitop): '<S1>/FixPt Bitwise Operator4'
   *  S-Function (sfix_bitop): '<S1>/FixPt Bitwise Operator5'
   */
  practise1_Y.Out1 = (uint8_T)~(uint8_T)((uint8_T)~practise1_U.Input2 | 1);

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/Input5'
   *  RelationalOperator: '<S5>/FixPt Relational Operator'
   *  UnitDelay: '<S5>/Delay Input1'
   *
   * Block description for '<S5>/Delay Input1':
   *
   *  Store in Global RAM
   */
  practise1_Y.Out3 = (practise1_U.Input5 != practise1_DW.DelayInput1_DSTATE);

  /* Update for UnitDelay: '<S5>/Delay Input1' incorporates:
   *  Inport: '<Root>/Input5'
   *
   * Block description for '<S5>/Delay Input1':
   *
   *  Store in Global RAM
   */
  practise1_DW.DelayInput1_DSTATE = practise1_U.Input5;
}

/* Model initialize function */
void practise1_initialize(void)
{
  {
    int32_T i;

    /* ConstCode for Outport: '<Root>/Vectorconcatresult' */
    for (i = 0; i < 7; i++) {
      practise1_Y.Vectorconcatresult[i] = practise1_ConstB.VectorConcatenate[i];
    }

    /* End of ConstCode for Outport: '<Root>/Vectorconcatresult' */

    /* ConstCode for Outport: '<Root>/Out2' */
    practise1_Y.Out2 = practise1_ConstB.BitwiseOperator;
  }
}

/* Model terminate function */
void practise1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
