#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*

*/


int main() {

   int valores[6] = {};
   int valor;

   for (int i=0; i<6; i++) {
      printf("%dº valor :\n", i+1);
      scanf("%d", &valor);
      valores[i] = valor;
   }

   for (int i=0; i<6; i++) {
      printf("%dº valor : %d \n", i+1, valores[i]);
   }

   printf("\nfim do programa.\n");

   return 0;
}


/*






*/

