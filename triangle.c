/*
*  Author: Fateh Karan Singh Sandhu
*  Date: August 27, 2018
*
*  This is a simple C program for the pythagorean theorm
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {

double a, b, h;

printf ("Please enter length of side A: ");
scanf  ("%lf", &a);

printf ("Please enter length of side B: ");
scanf  ("%lf", &b);

 // this function computes the hypotenuse by running the theorm
 h = sqrt( a*a + b*b );

 // the length of hypotenuse is printed
 printf("The length of the hypotenuse is: %.2f \n", h );

  return 0;
}
