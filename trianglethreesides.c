/* Author: Fateh Karan Singh Sandhu
   Date: August 28, 2018
*/

#include<stdlib.h>
#include<stdio.h>

int main (int argc, char **argv) {

if (argc != 4) {
  printf("Usage: %s a b c (three sides of a triangle)\n", argv[0]);
  exit(1);
}

double a, b, c;

a = atof(argv[1]);
b = atof(argv[2]);
c = atof(argv[3]);

if (a <= 0 || b <= 0 || c <= 0) {
  printf("Error: Value of sides cannot be negative or zero\n");
  exit(1);
}

if ( a + b > c &&
     b + c > a &&
     a + c > b)  {

if (a == b && b == c) {
  printf("Equilateral\n");
}
  else if (a == b || b == c || a == c) {
    printf ("Isoceles\n");
  }
  else {
    printf ("Scalene\n");
  } }

  else {
  printf ("Invalid triangle\n"); }

  return 0;
}
