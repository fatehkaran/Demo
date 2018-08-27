/* Author: Fateh Karan Singh Sandhu
*  Date: August 27, 2018
*
* This program converts miles to kms and gives
* mileage reimbursement.
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {

double beginningMileage, endingMileage, ratePerMile;

printf("Enter the beginning odometer reading: ");
scanf("%lf", &beginningMileage);

printf("Enter the ending odometer reading: ");
scanf("%lf", &endingMileage);

printf("Enter the rate per mile: ");
scanf("%lf", &ratePerMile);

// declaring new variables total miles driven and reimbursement
double totalMiles = endingMileage-beginningMileage;
double reimbursement = totalMiles*ratePerMile;

reimbursement=round(reimbursement*100)/100;

printf("You drove %.2f miles, at $%.2f per mile. You are owed $%.2f.\n", totalMiles, ratePerMile, reimbursement);

  return 0;
}
