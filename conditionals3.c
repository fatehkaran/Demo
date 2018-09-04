
#include<stdlib.h>
#include<stdio.h>

int main (int argc, char **argv) {

if (argc != 4) {
  printf("Usage: %s a b c (three values)\n", argv[0]);
  exit(1);
}

int a, b ,c;

a = atoi(argv[1]);
b = atoi(argv[2]);
c = atoi(argv[3]);

 int max = a;

 if (b>=max) {
   max = b; }
 if (c>=max) {
     max = c; }

     printf("%d is the maximum\n", max);

     return 0;
}
