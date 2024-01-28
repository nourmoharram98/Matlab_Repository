/*
 * File: FactorialTask.c
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

#include "FactorialTask.h"
#include "FactorialTask_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_FactorialTask_T FactorialTask_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactorialTask_T FactorialTask_Y;

/* Real-time model */
static RT_MODEL_FactorialTask_T FactorialTask_M_;
RT_MODEL_FactorialTask_T *const FactorialTask_M = &FactorialTask_M_;

/* Model step function */
void FactorialTask_step(void)
{
  int32_T UnitDelay_DSTATE;
  int32_T s6_iter;
  uint8_T UnitDelay_DSTATE_p;
  uint8_T s4_iter;
  uint8_T tmp;
  boolean_T loopCond;
  static const uint8_T b[5] = { 1U, 2U, 6U, 24U, 120U };

  /* Outputs for Iterator SubSystem: '<S1>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S4>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  UnitDelay_DSTATE_p = 1U;

  /* Inport: '<Root>/Input' */
  tmp = FactorialTask_U.Input;
  if (FactorialTask_U.Input > 254) {
    tmp = 254U;
  }

  for (s4_iter = 1U; s4_iter <= tmp; s4_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S4>/Multiply'
     *  UnitDelay: '<S4>/Unit Delay'
     */
    FactorialTask_Y.Out1 = (uint8_T)((uint32_T)s4_iter * UnitDelay_DSTATE_p);

    /* Update for UnitDelay: '<S4>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    UnitDelay_DSTATE_p = FactorialTask_Y.Out1;
  }

  /* End of Outputs for SubSystem: '<S1>/For Iterator Subsystem' */

  /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
   *  Inport: '<Root>/Input'
   */
  if (FactorialTask_U.Input > 5) {
    /* Outport: '<Root>/y' */
    FactorialTask_Y.y = MAX_uint8_T;
  } else if (FactorialTask_U.Input < 1) {
    /* Outport: '<Root>/y' */
    FactorialTask_Y.y = 1U;
  } else {
    /* Outport: '<Root>/y' */
    FactorialTask_Y.y = b[FactorialTask_U.Input - 1];
  }

  /* End of MATLAB Function: '<S2>/MATLAB Function' */

  /* Outputs for Iterator SubSystem: '<S3>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S6>/While Iterator'
   */
  s6_iter = 1;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay' */
  UnitDelay_DSTATE = 1;

  /* Inport: '<Root>/Initial Condition' */
  loopCond = FactorialTask_U.InitialCondition;
  while (loopCond) {
    /* Outport: '<Root>/Out2' incorporates:
     *  Product: '<S6>/Multiply'
     *  UnitDelay: '<S6>/Unit Delay'
     */
    FactorialTask_Y.Out2 = s6_iter * UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S6>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out2'
     */
    UnitDelay_DSTATE = FactorialTask_Y.Out2;

    /* RelationalOperator: '<S6>/NotEqual' incorporates:
     *  Inport: '<Root>/Input'
     */
    loopCond = (s6_iter != FactorialTask_U.Input);
    s6_iter++;
  }

  /* End of Outputs for SubSystem: '<S3>/While Iterator Subsystem' */
}

/* Model initialize function */
void FactorialTask_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void FactorialTask_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
