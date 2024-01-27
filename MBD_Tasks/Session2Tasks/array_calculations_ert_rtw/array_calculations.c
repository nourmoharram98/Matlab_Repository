/*
 * File: array_calculations.c
 *
 * Code generated for Simulink model 'array_calculations'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 00:24:49 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "array_calculations.h"
#include "array_calculations_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_array_calculations_T array_calculations_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_array_calculations_T array_calculations_Y;

/* Real-time model */
static RT_MODEL_array_calculations_T array_calculations_M_;
RT_MODEL_array_calculations_T *const array_calculations_M =
  &array_calculations_M_;

/* Model step function */
void array_calculations_step(void)
{
  real_T maxV_tmp;
  int32_T i;

  /* MinMax: '<S1>/Minimum1' incorporates:
   *  Inport: '<Root>/ArrayOfElements'
   */
  array_calculations_Y.MaxElement = array_calculations_U.ArrayOfElements[0];

  /* MinMax: '<S1>/Minimum' incorporates:
   *  Inport: '<Root>/ArrayOfElements'
   */
  array_calculations_Y.MinElement = array_calculations_U.ArrayOfElements[0];
  for (i = 0; i < 9; i++) {
    /* MinMax: '<S1>/Minimum1' incorporates:
     *  Inport: '<Root>/ArrayOfElements'
     *  MinMax: '<S1>/Minimum'
     */
    maxV_tmp = array_calculations_U.ArrayOfElements[i + 1];
    array_calculations_Y.MaxElement = fmax(array_calculations_Y.MaxElement,
      maxV_tmp);

    /* MinMax: '<S1>/Minimum' */
    array_calculations_Y.MinElement = fmin(array_calculations_Y.MinElement,
      maxV_tmp);
  }

  /* Sum: '<S1>/Sum of Elements' incorporates:
   *  Inport: '<Root>/ArrayOfElements'
   */
  array_calculations_Y.Sumofarray = -0.0;
  for (i = 0; i < 10; i++) {
    array_calculations_Y.Sumofarray += array_calculations_U.ArrayOfElements[i];
  }

  /* Outport: '<Root>/Average' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   *  Product: '<S2>/Average'
   *  Sum: '<S1>/Sum of Elements'
   */
  array_calculations_Y.Average = array_calculations_Y.Sumofarray / 10.0;

  /* Outport: '<Root>/NumberOfelements' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function'
   */
  array_calculations_Y.NumberOfelements = 10.0;
}

/* Model initialize function */
void array_calculations_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void array_calculations_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
