/*
 * File: Scalar_Calculator.c
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

#include "Scalar_Calculator.h"

/* Include model header file for global data */
#include "Calculator_Subsystem.h"
#include "Calculator_Subsystem_private.h"

/* Output and update for atomic system: '<Root>/Scalar_Calculator' */
void Calculator_Su_Scalar_Calculator(uint8_T rtu_Operand1, uint8_T rtu_Operand2,
  uint8_T rtu_Unaryoperand, uint8_T *rty_ADD_Result, uint8_T *rty_Sub_Result,
  uint16_T *rty_Multiply_Result, uint8_T *rty_Divide_Result, uint8_T
  *rty_Increment_Result, uint8_T *rty_Decrement_Result, boolean_T
  *rty_Status_check)
{
  /* Sum: '<S1>/Add' */
  *rty_ADD_Result = (uint8_T)((uint32_T)rtu_Operand1 + rtu_Operand2);

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  *rty_Status_check = (rtu_Operand2 == 0);

  /* Sum: '<S3>/FixPt Sum1' incorporates:
   *  Constant: '<S3>/FixPt Constant'
   */
  *rty_Decrement_Result = (uint8_T)(rtu_Unaryoperand - 1);

  /* Product: '<S1>/Divide1' */
  *rty_Divide_Result = (uint8_T)(rtu_Operand2 == 0U ? MAX_uint32_T : (uint32_T)
    rtu_Operand1 / rtu_Operand2);

  /* Sum: '<S4>/FixPt Sum1' incorporates:
   *  Constant: '<S4>/FixPt Constant'
   */
  *rty_Increment_Result = (uint8_T)(rtu_Unaryoperand + 1U);

  /* Product: '<S1>/Multiply' */
  *rty_Multiply_Result = (uint16_T)((uint32_T)rtu_Operand1 * rtu_Operand2);

  /* Sum: '<S1>/Subtraction' */
  *rty_Sub_Result = (uint8_T)(rtu_Operand1 - rtu_Operand2);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
