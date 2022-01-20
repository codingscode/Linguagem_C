#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   int n1 = 1000, n2 = 9999;
   char valor[4];

   // converte int para string
   sprintf(valor, "%d", 1472);

   printf("%s.\n", valor); // 1472
   printf("%c.\n", valor[0]); // 1
   printf("%c.\n", valor[1]); // 4
   printf("%c.\n", valor[2]); // 7
   printf("%c.\n", valor[3]); // 2

   char a[] = "3", b[] = "4";

   strcat(a, b);

   printf("%s\n", a); // uma string

   printf("%d\n", atoi(a)); // um int

   printf("fim\n");

   return 0;
}


/*






*/

