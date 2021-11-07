#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>




int main() {
   int numero;

   printf("digite um número inteiro positivo:\n");
   scanf("%d", &numero);

   if ((numero % 3 == 0) ^ (numero % 5 == 0)) { // xor -> disjunção exclusiva
      printf("ou é divisivel por 3 ou por 5.\n");
   }
   else {
	  printf("é divisivel por 3 e 5 ao mesmo tempo ou então por nenhum.\n");
   }


   printf("fim.\n");

   return 0;
}



/*
digite um número inteiro positivo:
6
ou é divisivel por 3 ou por 5.
fim.


digite um número inteiro positivo:
10
ou é divisivel por 3 ou por 5.
fim.


digite um número inteiro positivo:
15
é divisivel por 3 e 5 ao mesmo tempo ou então por nenhum.
fim.


digite um número inteiro positivo:
7
é divisivel por 3 e 5 ao mesmo tempo ou então por nenhum.
fim.

*/
