/* PR rtl-optimization/70174 */
/* { dg-do compile } */
/* { dg-options "-O2" } */

struct S { int f : 4; } a;
  
void
foo (void)
{ 
  a.f = foo;	/* { dg-warning "assignment makes integer from pointer without a cast" } */
}
