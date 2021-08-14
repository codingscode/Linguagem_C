#include <stdio.h>

/*
na linguagem c, nao existe um tipo de dado boolean
mas...
a linguagem c, reconhece o valor 0 como falso, e qualquer valor diferente de zero é verdadeiro.





 */


int main() {
   int booleano = 1;

   if (booleano) {
      printf("verdadeiro...");
   }
   else {
	  printf("falso...");
   }


   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
verdadeiro...




*/

