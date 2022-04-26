#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   int numeros[5] = {};
   int valor, maior, menor, p_maior = 0, p_menor = 0;

   for (int i=0; i<5; i++) {
      printf("%dº valor:\n", i+1);
      scanf("%d", &valor);
      numeros[i] = valor;
   }

   maior = numeros[0];
   menor = numeros[0];

   for (int j=0; j<5; j++) {
      if (maior < numeros[j]) {
         maior = numeros[j];
         p_maior = j;
      }
   }

   for (int j=0; j<5; j++) {
      if (menor > numeros[j]) {
         menor = numeros[j];
         p_menor = j;
      }
   }

   printf("menor valor: %d . posição: %d\n", menor, p_menor);
   printf("maior valor: %d . posição: %d\n", maior, p_maior);
   printf("\nfim do programa.\n");

   return 0;
}


/*
1º valor:
4
2º valor:
6
3º valor:
2
4º valor:
9
5º valor:
5
menor valor: 2 . posição: 2
maior valor: 9 . posição: 3

fim do programa.

*/

