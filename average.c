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

int a, b ,c;
printf ("Please enter the first number: ");
scanf ("%d", &a);

printf ("Please enter the second number: ");
scanf ("%d", &b);

printf ("Please enter the third number: ");
scanf ("%d", &c);

double average = ( (double) a + b + c) / 3;

printf("The average of %d, %d and %d is %f \n", a, b, c, average);

  return 0;
}
