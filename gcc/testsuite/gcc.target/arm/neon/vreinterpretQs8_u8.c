/* Test the `vreinterpretQs8_u8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vreinterpretQs8_u8 (void)
{
  int8x16_t out_int8x16_t;
  uint8x16_t arg0_uint8x16_t;

  out_int8x16_t = vreinterpretq_s8_u8 (arg0_uint8x16_t);
}

