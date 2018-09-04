/* Author: Fateh Karan Singh Sandhu
*  Date: August 28, 2018
*
* This program converts decibel into sound quality
*/

#include<stdlib.h>
#include<stdio.h>

int main (int argc, char **argv) {

     if (argc != 2) {
       printf ("Error: %s Put in a decibel value\n", argv[0]);
       exit(1);
     }

     double decibelLevel = atof(argv[1]);

     if (decibelLevel < 0) {
       printf("Error: Decibel value cannot be negative\n");
       exit(1);
     }

    if (decibelLevel >= 0 && decibelLevel <= 60) {
      printf("Quiet\n");
    } else if (decibelLevel <= 90) {
      printf("Conversational\n");
    } else if (decibelLevel <= 110) {
      printf("Loud\n");
    } else if (decibelLevel <= 129) {
      printf("Very Loud\n");
    } else if (decibelLevel <= 194) {
      printf("Dangerous!!\n");
    } else {
      printf("Decibel level is too high\n");
    }

     return 0;
}
