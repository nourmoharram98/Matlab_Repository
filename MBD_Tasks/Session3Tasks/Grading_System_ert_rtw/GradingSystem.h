/*
 * File: GradingSystem.h
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

#ifndef RTW_HEADER_GradingSystem_h_
#define RTW_HEADER_GradingSystem_h_
#include <string.h>
#ifndef Grading_System_COMMON_INCLUDES_
#define Grading_System_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Grading_System_COMMON_INCLUDES_ */

#include "Grading_System_types.h"

/* Invariant block signals for system '<Root>/GradingSystem' */
typedef struct {
  const char_T StringConstant[256];    /* '<S7>/String Constant' */
  const char_T StringConstant_l[256];  /* '<S6>/String Constant' */
  const char_T StringConstant_g[256];  /* '<S5>/String Constant' */
  const char_T StringConstant_n[256];  /* '<S4>/String Constant' */
  const char_T StringConstant_lv[256]; /* '<S3>/String Constant' */
  const char_T StringConstant_k[256];  /* '<S2>/String Constant' */
} ConstB_GradingSystem_Grading__T;

extern void Grading_System_GradingSystem(uint8_T rtu_Grade, char_T rty_Out1[256],
  const ConstB_GradingSystem_Grading__T *localC);

#endif                                 /* RTW_HEADER_GradingSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
