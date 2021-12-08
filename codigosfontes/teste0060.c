#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
atof() -> convert string para double
atoi() -> converte uma string para inteiro



*/



int main() {

   char valor_s[5];
   int valor_i;

   strcpy(valor_s, "4.6");  // se fosse "b" -> 0, se 6.x -> 6
   printf("valor_s: %s\n", valor_s);

   valor_i = atoi(valor_s);

   printf("valor_i: %d\n", valor_i);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor_s: 4.6
valor_i: 4








*/

