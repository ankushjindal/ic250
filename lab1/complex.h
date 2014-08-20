
/* This structure is used as the representation of the complex
   number ADT.  The details of the representation (i.e., the
   fields of the structure) are relevant only to "complex.c",
   which implements the ADT.  All other programs should
   manipulate complex numbers only with the interface functions
   declared below. */

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

  
#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct {
  float real;      /* Real component of complex number */
  float imag;      /* Imaginary component of complex number */
} complex;

/* Returns the complex number whose real part is "real" and whose
   imaginary part is "imaginary". */
complex makefromrect (float real, float imaginary);

/* Returns the complex number whose magnitude is "mag" and amplitude is "amp" */
complex makefrompolar (float mag, float amp);

/* Return complex number modified such that its "real" has magnitude */
/* and "imag" has amplitude from a rectangular complex number */
complex recttopolar (complex c);

/* Reads a complex number from the keyboard and returns it.  The
   number should be entered in the form a+bi or a-bi, where a and
   b stand for arbitrary floats. */
complex read (void);

/* Writes "c" to the display in the form a+bi or a-bi, where a and
   b stand for arbitrary floats. */
void write (complex c);

/* Writes "c" to the display in the form a∠bi or a-bi, where a and
   b stand for arbitrary floats. Assuming c to be in polar form*/
void writepolar (complex c);

/* Returns c1+c2. */
complex cadd (complex c1, complex c2);

/* Returns c1-c2. */
complex csub (complex c1, complex c2);

/* Returns c1*c2. */
complex cmul (complex c1, complex c2);

/* Returns c1/c2. */
complex cdiv (complex c1, complex c2);

/* Returns |c|. */
float absval (complex c);

/* Returns conjugate value of c */
complex conjugate (complex c);

/*Returns square of complex number c */
complex csquare (complex c);

#endif
