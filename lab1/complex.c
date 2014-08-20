/* This file implements the complex number ADT whose interface
   appears in "complex.h". */

// Some part of code from "Introduction to Scientific Programming" by "Joseph L. Zachary" 
// Link: http://www2.lawrence.edu/fast/GREGGJ/CMSC110/structs/multi-file.html


/***************************************************************************
* INFORMATION:
*       @Author:  Ankush Jindal
*       @version: 1.0 
*       @todo:    To update: recttopolar, writepolar - using
*             complex in different and ambigious way (polar form)
*       @Date: 2014/08/20 02:32
*   Fork this at https://github.com/travis-bickle/ic250
***************************************************************************/

#include <stdio.h>
#include <math.h>
#include "complex.h"

/* Returns the complex number whose real part is "real" and whose
   imaginary part is "imaginary". */
complex makefromrect (float real, float imaginary)
{
  complex c;
  c.real = real;
  c.imag = imaginary;
  return c;
}

/* Returns the complex number whose magnitude is "mag" and amplitude is "amp" */
complex makefrompolar (float mag, float amp)
{
  complex c;
  c.real = mag*cos(amp);
  c.imag = mag*sin(amp);
  return c;
}

/* Return complex number modified such that its "real" has magnitude */
/* and "imag" has amplitude from a rectangular complex number */
complex recttopolar (complex c)
{
  complex result;
  result.real = sqrt(c.real*c.real + c.imag*c.imag);
  result.imag = atan2(c.imag, c.real);
  return result;
}

/* Reads a complex number from the keyboard and returns it.  The
   number should be entered in the form a+bi or a-bi, where a and
   b stand for arbitrary floats. */
complex read (void)
{
  complex c;
  scanf("%f%fi", &c.real, &c.imag);
  return c;
}

/* Writes "c" to the display in the form a+bi or a-bi, where a and
   b stand for arbitrary floats. */
void write (complex c)
{
  printf("%f%+fi\n", c.real, c.imag);
}

/* Writes "c" to the display in the form a∠bi or a-bi, where a and
   b stand for arbitrary floats. Assuming c to be in polar form*/
void writepolar (complex c)
{
  printf("%f∠%f\n", c.real, c.imag);
}

/* Returns c1+c2. */
complex cadd (complex c1, complex c2)
{
  complex result;
  result.real = c1.real + c2.real;
  result.imag = c1.imag + c2.imag;
  return result;
}

/* Returns c1-c2. */
complex csub (complex c1, complex c2)
{
  complex result;
  result.real = c1.real - c2.real;
  result.imag = c1.imag - c2.imag;
  return result;
}

/* Returns c1*c2. */
complex cmul (complex c1, complex c2)
{
  complex result;
  result.real = c1.real*c2.real - c1.imag*c2.imag;
  result.imag = c1.real*c2.imag + c1.imag*c2.real;
  return result;
}

/* Returns c1/c2. */
complex cdiv (complex c1, complex c2)
{
  complex result;
  float denom;

  denom = c2.real*c2.real + c2.imag*c2.imag;
  result.real = (c1.real*c2.real + c1.imag*c2.imag) /
                   denom;
  result.imag = (c1.imag*c2.real - c1.real*c2.imag) /
                   denom;

  return result;
}

/* Returns |c|. */
float absval (complex c) {
  return sqrt(c.real*c.real + c.imag*c.imag);
}

/* Returns conjugate value of c */
complex conjugate (complex c) {
  complex result;
  result.real = c.real;
  result.imag = -1 * c.imag ;
  return result;
}

/*Returns square of complex number c */
complex csquare (complex c) {
  return cmul(c,c);
}
