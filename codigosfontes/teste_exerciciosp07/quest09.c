#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   int valores[6] = {};
   int valor, contador = 0;

   while (contador < 6) {
      printf("%dº valor :\n", contador+1);
      scanf("%d", &valor);

      if (valor % 2 == 0) {
         valores[contador] = valor;
    	 contador += 1;
      }
      else {
         printf("o valor %d não é par.\n", valor);
      }
   }

   for (int i=5; i>=0; i--) {
      printf("%dº valor : %d \n", i+1, valores[i]);
   }

   printf("\nfim do programa.\n");

   return 0;
}


/*
1º valor :
3
o valor 3 não é par.
1º valor :
30
2º valor :
40
3º valor :
12
4º valor :
5
o valor 5 não é par.
4º valor :
7
o valor 7 não é par.
4º valor :
10
5º valor :
16
6º valor :
13
o valor 13 não é par.
6º valor :
8
6º valor : 8
5º valor : 16
4º valor : 10
3º valor : 12
2º valor : 40
1º valor : 30

fim do programa.

*/

