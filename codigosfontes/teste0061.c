#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
atof() -> convert string para double
atoi() -> converte uma string para inteiro
atol() -> converte string para inteiro longo


*/



int main() {

   char valor_s[20];
   long int valor_il;

   strcpy(valor_s, "4534636436");  //
   printf("valor_s:  %s\n", valor_s);

   valor_il = atol(valor_s);

   printf("valor_il: %ld\n", valor_il);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor_s: 4534636436
valor_il: 4534636436








*/

