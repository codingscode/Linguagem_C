#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/


int main() {
   int quantidade = 4;
   float numeros[quantidade], maior = -10000000000, menor = -maior;


   for (int i = 0; i < quantidade; i++) {
      printf("%dº número: \n", i+1);
      scanf("%f", &numeros[i]);

   }

   for (int j = 0; j < quantidade; j++) {
      if (maior < numeros[j]) {
         maior = numeros[j];
	  }
      if (menor > numeros[j]) {
         menor = numeros[j];
      }

   }

   printf("\nmaior: %.2f\n", maior);
   printf("menor: %.2f\n", menor);


   return 0;
}


/*
1º número:
-4
2º número:
30
3º número:
10
4º número:
200

maior: 200.00
menor: -4.00



*/

