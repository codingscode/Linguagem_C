#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*

*/



int main() {

   int valor;
   int quantdiv = 1;

   printf("digite uma valor maior que 1: \n");
   scanf("%d", &valor);

   if (valor > 1) {
      for (int i=1; i <= valor/2 + 1; i++) {
         if (valor % i == 0) {
            quantdiv += 1;
         }
      }
   }
   else {
      printf("valor inválido.\n");
   }

   if (quantdiv > 2) {
      printf("%d não é primo. Quantidade de divisores: %d.\n", valor, quantdiv);
   }
   else {
	  printf("%d é primo. Quantidade de divisores: %d.\n", valor, quantdiv);
   }


   printf("\nfim do programa.\n");

   return 0;
}


/*

digite uma valor maior que 1:
5
5 é primo. Quantidade de divisores: 2.

fim do programa.

------------------------------------------

digite uma valor maior que 1:
10
10 não é primo. Quantidade de divisores: 4.

fim do programa.



*/

