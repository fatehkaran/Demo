/* Author: Fateh Karan Singh Sandhu
   Date: August 27, 2018

   This program converts number of days into years and remaining
   weeks and days.

*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **agrv) {

int days;

printf("Please enter the number of days: ");
scanf ("%d", &days);

int remainingDays=days;

int years=remainingDays/365;

remainingDays = remainingDays - 365 * years;

int weeks=remainingDays/7;

remainingDays = remainingDays - 7 * weeks;

printf("%d days is %d years %d weeks and %d days \n", days, years, weeks, remainingDays);


  return 0;
}
