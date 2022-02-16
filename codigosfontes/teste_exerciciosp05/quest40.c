#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/




int main() {



   int numeros[] = {};
   int vezent = 0, menor = 0, maior = 0;
   int numero;


   while (numero >= 0) {
	  printf("digite um número diferente de 0 :\n");
      scanf("%d", &numero);
      numeros[vezent] = numero;
      vezent += 1;

   }

   printf("\n");

   for (int i = 0; i < vezent-1; i++) {
      printf("%d\n", numeros[i]);
   }

   menor = numeros[0];
   maior = numeros[0];

   for (int j = 0; j < vezent-1; j++) {

      if (menor > numeros[j]) {
         menor = numeros[j];
      }

      if (maior < numeros[j]) {
         maior = numeros[j];
      }

   }

   printf("maior: %d, menor: %d\n", maior, menor);


   return 0;
}


/*
digite um número diferente de 0 :
6
digite um número diferente de 0 :
4
digite um número diferente de 0 :
9
digite um número diferente de 0 :
7
digite um número diferente de 0 :
-2

6
4
9
*** stack smashing detected ***: terminated
7
maior: 9, menor: 4



*/

