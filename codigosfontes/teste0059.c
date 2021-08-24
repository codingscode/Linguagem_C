#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
atof() -> convert string para double


*/



int main() {

   char valor_s[5];
   double valor_d;

   strcpy(valor_s, "4.5");  // se fosse "4.a" -> 4.00
   printf("valor_s: %s\n", valor_s);

   valor_d = atof(valor_s);

   printf("valor_d: %.2f\n", valor_d);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor_s: 4.5
valor_d: 4.50








*/

