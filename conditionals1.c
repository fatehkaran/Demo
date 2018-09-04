
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

  if (a >= b) {

  if (a >= c) {
  printf("%d is the maximum \n", a); }

  else { printf ("%d is the maximum \n", c); } }

  else if (b >= c)

  {  printf("%d is the maximum \n", b); }

  else { printf ("%d is the maximum \n", c); }

   return 0;
               }
