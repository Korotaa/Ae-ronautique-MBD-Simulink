/*
 * File: model.h
 *
 * Code generated for Simulink model 'model'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Sat Feb 12 11:08:36 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-32 (Windows32)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_model_h_
#define RTW_HEADER_model_h_
#include <stddef.h>
#ifndef model_COMMON_INCLUDES_
# define model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* model_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Masse;                        /* '<Root>/Masse' */
  real_T T;                            /* '<Root>/T' */
  real_T T_valid;                      /* '<Root>/T_valid' */
  real_T Masse_Valid;                  /* '<Root>/Masse_Valid' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void model_initialize(void);
extern void model_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/         Masse ' : Unused code path elimination
 * Block '<Root>/   Ca' : Unused code path elimination
 * Block '<Root>/   D' : Unused code path elimination
 * Block '<Root>/   Hp' : Unused code path elimination
 * Block '<Root>/   K' : Unused code path elimination
 * Block '<Root>/   T         ' : Unused code path elimination
 * Block '<S1>/Gain' : Eliminated nontunable gain of 1
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'model'
 * '<S1>'   : 'model/ '
 * '<S2>'   : 'model/  '
 * '<S3>'   : 'model/   '
 * '<S4>'   : 'model/    '
 * '<S5>'   : 'model/      '
 * '<S6>'   : 'model/.'
 */
#endif                                 /* RTW_HEADER_model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
