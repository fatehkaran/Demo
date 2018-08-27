/* Author: Fateh Karan Singh Sandhu
*  Date: August 27, 2018
*
* This is my first C program writted from scratch
* that is going to take 3 inputs from the user
* and print their average.
**/

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {

double a, b ,c;
printf ("Please enter the first number: ");
scanf ("%lf", &a);

printf ("Please enter the second number: ");
scanf ("%lf", &b);

printf ("Please enter the third number: ");
scanf ("%lf", &c);

double average = ( (double) a + b + c) / 3;

printf("The average of %f, %f and %f is %f \n", a, b, c, average);

  return 0;
}
