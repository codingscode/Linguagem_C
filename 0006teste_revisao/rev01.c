#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*

*/

int ehprimo(int num) {
   int ndivisores = 1;

   for (int j=1; j <= (num/2); j++) {
      if (num % j == 0) {
         ndivisores += 1;
      }
   }

   if (ndivisores > 2) {
      return 0;
   }

   return 1;
}



int main() {

   int quantidade, atual = 1, soma = 0, contador = 0;

   printf("digite uma quantidade de primos desejada: \n");
   scanf("%d", &quantidade);

   //printf("%d \n", ehprimo(1)); // 1
   //printf("%d \n", ehprimo(2)); // 1
   //printf("%d \n", ehprimo(3)); // 1
   //printf("%d \n", ehprimo(4)); // 0
   //printf("%d \n", ehprimo(5)); // 1
   //printf("%d \n", ehprimo(6)); // 0
   //printf("%d \n", ehprimo(7)); // 1
   printf("\n");

   if (quantidade > 0) {

	  while(contador <= quantidade) {
         if (ehprimo(atual)) {
        	printf("atual: %d\n", atual);
            soma += atual;
            contador += 1;
            atual += 1;
         }
         else {
        	atual += 1;
         }
	  }
   }
   else {
      printf("valor inválido.\n");
   }

   soma -= 1;

   printf("soma: %d \n", soma);
   printf("\nfim do programa.\n");

   return 0;
}


/*

digite uma quantidade de primos desejada:
8

atual: 1
atual: 2
atual: 3
atual: 5
atual: 7
atual: 11
atual: 13
atual: 17
atual: 19
soma: 77

fim do programa.



*/

