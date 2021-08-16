#include <stdio.h>

/*
parte 2



*/


int main() {
   //vetores de inteiros
   int valores[5];

   //vetores de reais
   float reais[8];


   for (int i=0; i < 5; i++) {
	   valores[i] = 2*i;
   }

   for (int i=8; i > 0; i--) {
	   reais[i] = (float) 3.0 *i;
   }

   for (int i=0; i < 5; i++) {
      printf("%d -> ", valores[i]);
   }
   printf("\n\n");

   for (int i=0; i < 8; i++) {
      printf("%.2f -> ", reais[i]);
   }

   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*






*/

