/*
 * File: Grading_System.c
 *
 * Code generated for Simulink model 'Grading_System'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 15:43:19 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "Grading_System.h"
#include "Grading_System_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Grading_System_T Grading_System_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Grading_System_T Grading_System_Y;

/* Real-time model */
static RT_MODEL_Grading_System_T Grading_System_M_;
RT_MODEL_Grading_System_T *const Grading_System_M = &Grading_System_M_;

/* Model step function */
void Grading_System_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/GradingSystem' */

  /* Inport: '<Root>/Grade' incorporates:
   *  Outport: '<Root>/Out1'
   */
  Grading_System_GradingSystem(Grading_System_U.Grade, &Grading_System_Y.Out1[0],
    &Grading_System_ConstB.GradingSystem);

  /* End of Outputs for SubSystem: '<Root>/GradingSystem' */
}

/* Model initialize function */
void Grading_System_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Grading_System_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
