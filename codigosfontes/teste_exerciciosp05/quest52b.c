#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*

*/


int main() {
   // notas 100, 50, 20, 10, 5, 2, 1
   int notas[7] = {100, 50, 20, 10, 5, 2, 1};
   int qpnota[7] = {};
   int valor_sacar;
   int quant;

   printf("valor a sacar: \n");
   scanf("%d", &valor_sacar);


   for (int i=0; i < 7; i++) {
	  quant = valor_sacar / notas[i];
	  qpnota[i] = quant;
      valor_sacar -= quant*notas[i];
   }
   //puts("");

   for (int j=0; j < 7; j++) {
	  printf("notas de %d : %d \n", notas[j], qpnota[j]);
   }

   printf("fim do programa.\n");

   return 0;
}


/*
valor a sacar:
123
notas de 100 : 1
notas de 50 : 0
notas de 20 : 1
notas de 10 : 0
notas de 5 : 0
notas de 2 : 1
notas de 1 : 1
fim do programa.




*/

