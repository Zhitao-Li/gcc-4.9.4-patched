/* { dg-do compile } */
/* { dg-require-effective-target arm_vfp_ok } */
/* { dg-skip-if "need fp instructions" { *-*-* } { "-mfloat-abi=soft" } { "" } } */
/* { dg-options "-O2 -frounding-math -mfpu=vfp -mfloat-abi=hard" } */

double
foo_d (double a, double b)
{
  /* { dg-final { scan-assembler-not "fnmuld" } } */
  return -a * b;
}

float
foo_s (float a, float b)
{
  /* { dg-final { scan-assembler-not "fnmuls" } } */
  return -a * b;
}
