#include <stdio.h>

/*
matrizes parte 2




*/


int main() {

   int numeros[3][2];
   numeros[0][0] = 1;
   numeros[0][1] = 2;
   numeros[1][0] = 3;
   numeros[1][1] = 4;

   for (int i=0; i < 2; i++) {
      for (int j =0; j < 2; j++) {
         printf("numero[%d][%d]: %d \n", i, j, numeros[i][j]);
      }
   }

   float valores[5][5];
   // fazer com esse

   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*

numero[0][0]: 1
numero[0][1]: 2
numero[1][0]: 3
numero[1][1]: 4



*/

