/*
 * File: EvenorOddcheck.c
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

#include "EvenorOddcheck.h"
#include "EvenorOddcheck_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_EvenorOddcheck_T EvenorOddcheck_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_EvenorOddcheck_T EvenorOddcheck_Y;

/* Real-time model */
static RT_MODEL_EvenorOddcheck_T EvenorOddcheck_M_;
RT_MODEL_EvenorOddcheck_T *const EvenorOddcheck_M = &EvenorOddcheck_M_;

/* Model step function */
void EvenorOddcheck_step(void)
{
  static const char_T b[3] = { 'o', 'd', 'd' };

  static const char_T c[4] = { 'e', 'v', 'e', 'n' };

  int32_T i;
  const char_T *tmp;

  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/Out1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator'
   *  SignalConversion generated from: '<S3>/Out1'
   *  SignalConversion generated from: '<S4>/Out1'
   */
  if ((EvenorOddcheck_U.Input & 1) == 1) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&EvenorOddcheck_Y.Out1[0], &EvenorOddcheck_ConstB.StringConstant_g[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    EvenorOddcheck_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&EvenorOddcheck_Y.Out1[0], &EvenorOddcheck_ConstB.StringConstant[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    EvenorOddcheck_Y.Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */

  /* MATLAB Function: '<Root>/EvenOddCheck_Matlabfunc' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/out2'
   */
  if ((uint8_T)((uint32_T)EvenorOddcheck_U.Input - ((int32_T)((uint32_T)
         EvenorOddcheck_U.Input >> 1) << 1)) == 0) {
    /* Outport: '<Root>/out2' */
    strncpy(&EvenorOddcheck_Y.out2[0], "", 255U);
    EvenorOddcheck_Y.out2[255] = '\x00';
    tmp = &c[0];
    for (i = 0; i < 4; i++) {
      EvenorOddcheck_Y.out2[i] = tmp[i];
    }

    EvenorOddcheck_Y.out2[4] = '\x00';
  } else {
    /* Outport: '<Root>/out2' */
    strncpy(&EvenorOddcheck_Y.out2[0], "", 255U);
    EvenorOddcheck_Y.out2[255] = '\x00';
    tmp = &b[0];
    for (i = 0; i < 3; i++) {
      EvenorOddcheck_Y.out2[i] = tmp[i];
    }

    EvenorOddcheck_Y.out2[3] = '\x00';
  }

  /* End of MATLAB Function: '<Root>/EvenOddCheck_Matlabfunc' */
}

/* Model initialize function */
void EvenorOddcheck_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void EvenorOddcheck_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
