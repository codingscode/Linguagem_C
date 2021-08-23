#include <stdio.h>


/*
no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o

*/



int main() {
   int ate, soma = 0;
   ate = 8;

   for (int i = 0; i <= ate; i++) {
      soma += i;
   }

   printf("soma de 0 até %d é %d\n", ate, soma);



   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
soma de 0 até 8 é 36








*/

