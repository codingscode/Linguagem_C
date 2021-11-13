#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main() {
   // 3, 8, 5
   int temporario = 0;
   int teste[3] = {1, 2, 3};
   int numeros[3];
   int ordenado[0];
   int ref = -300;


   printf("digite tres numeros inteiros um abaixo do outro:\n");
   scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);

   for (int i=0; i < 3; i++) {
      printf("%dº numero: %d\n", i+1, numeros[i]);
   }

   int comp_numeros = sizeof(numeros)/sizeof(int);

   printf("comprimento de numeros: %ld\n", comp_numeros);


   // ordenando o vetor em ordem crescente
   for (int i = 0; i < comp_numeros; i++) {
      for (int j = i+1; j < comp_numeros; j++) {
         if(numeros[i] > numeros[j]) {
            temporario = numeros[i];
            numeros[i] = numeros[j];
            numeros[j] = temporario;
         }
      }
   }

   printf("\n");

   // mostrando elementos do vetor depois de ordenado
   printf("elementos do vetor em ordem crescente:\n");
   for (int i = 0; i < comp_numeros; i++) {
      printf("%d ", numeros[i]);
   }

   printf("\n");




   /*
   for (int i = 0; i < 3; i++) {
      if (ref < numeros[i]) {
         ref = &numeros[i];
      }


   }







   */

   printf("fim\n");
   return 0;
}



/*

digite tres numeros inteiros um abaixo do outro:
10
2
8
1º numero: 10
2º numero: 2
3º numero: 8
comprimento de numeros: 3

elementos do vetor em ordem crescente:
2 8 10
fim









*/
