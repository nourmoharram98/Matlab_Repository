/*
 * File: GradingSystem.c
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

#include "GradingSystem.h"

/* Include model header file for global data */
#include "Grading_System.h"
#include "Grading_System_private.h"

/* Output and update for atomic system: '<Root>/GradingSystem' */
void Grading_System_GradingSystem(uint8_T rtu_Grade, char_T rty_Out1[256], const
  ConstB_GradingSystem_Grading__T *localC)
{
  /* If: '<S1>/If' incorporates:
   *  SignalConversion generated from: '<S2>/Out1'
   *  SignalConversion generated from: '<S3>/Out2'
   *  SignalConversion generated from: '<S4>/Out1'
   *  SignalConversion generated from: '<S5>/Out1'
   *  SignalConversion generated from: '<S6>/Out1'
   *  SignalConversion generated from: '<S7>/Out1'
   */
  if ((rtu_Grade > 90) && (rtu_Grade <= 100)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&rty_Out1[0], &localC->StringConstant_k[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    rty_Out1[255] = '\x00';
  } else if ((rtu_Grade > 80) && (rtu_Grade <= 90)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&rty_Out1[0], &localC->StringConstant_lv[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    rty_Out1[255] = '\x00';
  } else if ((rtu_Grade > 70) && (rtu_Grade <= 80)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&rty_Out1[0], &localC->StringConstant_n[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    rty_Out1[255] = '\x00';
  } else if ((rtu_Grade > 60) && (rtu_Grade <= 70)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&rty_Out1[0], &localC->StringConstant_g[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    rty_Out1[255] = '\x00';
  } else if (rtu_Grade > 100) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    strncpy(&rty_Out1[0], &localC->StringConstant_l[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
    rty_Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    strncpy(&rty_Out1[0], &localC->StringConstant[0], 255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem5' */
    rty_Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
