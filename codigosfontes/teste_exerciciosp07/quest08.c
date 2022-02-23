#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   int valores[6] = {};
   int valor;

   for (int i=0; i<6; i++) {
      printf("%dº valor :\n", i+1);
      scanf("%d", &valor);
      valores[i] = valor;
   }

   for (int i=5; i>=0; i--) {
      printf("%dº valor : %d \n", i+1, valores[i]);
   }


   printf("\nfim do programa.\n");

   return 0;
}


/*
1º valor :
9
2º valor :
2
3º valor :
7
4º valor :
4
5º valor :
5
6º valor :
10

6º valor : 10
5º valor : 5
4º valor : 4
3º valor : 7
2º valor : 2
1º valor : 9

fim do programa.

*/

