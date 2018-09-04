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


     if (argc !=4); {

       printf("Error, give three agruments \n");
       exit(1);
     }

 double a, b ,c;

a = atoi (argv[1]);
b = atoi (argv[2]);
c = atoi (argv[3]);

double average = ( (double) a + b + c) / 3;

printf("The average of %f, %f and %f is %f \n", a, b, c, average);

  return 0;
}
