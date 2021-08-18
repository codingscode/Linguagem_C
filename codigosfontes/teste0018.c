#include <stdio.h>

/*



*/


int main() {
   int valor = 2;
   printf("valor decimal: %d\n", valor);

   // deslocamento 2 bits para direita
   valor = valor >> 2;
   printf("valor decimal: %d\n", valor);

   valor = 2;
   // deslocamento de 2 bits para esquerda
   valor = valor << 2;
   printf("valor decimal: %d\n", valor);

   valor = 2;
   //
   valor = ~valor;
   printf("valor decimal: %d\n", valor);


   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor decimal: 2
valor decimal: 0
valor decimal: 8
valor decimal: -3






*/

