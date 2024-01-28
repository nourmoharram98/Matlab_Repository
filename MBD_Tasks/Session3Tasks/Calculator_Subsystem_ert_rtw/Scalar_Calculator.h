/*
 * File: Scalar_Calculator.h
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

#ifndef RTW_HEADER_Scalar_Calculator_h_
#define RTW_HEADER_Scalar_Calculator_h_
#ifndef Calculator_Subsystem_COMMON_INCLUDES_
#define Calculator_Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                               /* Calculator_Subsystem_COMMON_INCLUDES_ */

#include "Calculator_Subsystem_types.h"

extern void Calculator_Su_Scalar_Calculator(uint8_T rtu_Operand1, uint8_T
  rtu_Operand2, uint8_T rtu_Unaryoperand, uint8_T *rty_ADD_Result, uint8_T
  *rty_Sub_Result, uint16_T *rty_Multiply_Result, uint8_T *rty_Divide_Result,
  uint8_T *rty_Increment_Result, uint8_T *rty_Decrement_Result, boolean_T
  *rty_Status_check);

#endif                                 /* RTW_HEADER_Scalar_Calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
