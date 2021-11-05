#include <stdio.h>

/*
parte 2



*/


int main() {
   //vetores de inteiros
   int valores[5];

   //vetores de reais
   float reais[8];

   printf("%ld\n", sizeof(reais)/sizeof(float));

   for (int i = 0; i < sizeof(valores)/sizeof(int); i++) {
      valores[i] = 2*i;
   }

   for (long int i = sizeof(reais)/sizeof(float); i > 0; i--) {
      reais[i] = (float) 3.0 * i;
   }

   for (int i = 0; i < 5; i++) {
      printf("%d -> ", valores[i]);
   }
   printf("\n\n");

   for (int i = 0; i < 8; i++) {
      printf("%.2f -> ", reais[i]);
   }

   return 0;
}



/*
8
0 -> 2 -> 4 -> 6 -> 8 ->

-0.00 -> 3.00 -> 6.00 -> 9.00 -> 12.00 -> 15.00 -> 18.00 -> 21.00 ->

*/


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*






*/

