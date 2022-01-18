#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   int inteiro, quant_divisores = 0;


   printf("digite um inteiro positivo:\n");
   scanf("%d", &inteiro);

   int divisores[inteiro];

   printf("\n");

   for (int n = inteiro; n >= 1; n--) {
      if (inteiro % n == 0) {
         divisores[quant_divisores] = n;
    	 quant_divisores += 1;
      }

   }

   for (int i = 0; i < quant_divisores; i++) {
      printf("%d -> ", divisores[i]);
   }

   printf("\nquantidade de divisores: %d.\n", quant_divisores);


   return 0;
}


/*
digite um inteiro positivo:
20

20 -> 10 -> 5 -> 4 -> 2 -> 1 ->
quantidade de divisores: 6.




*/

