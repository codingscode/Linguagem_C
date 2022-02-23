#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*

*/


int main() {

   int valores[10] = {};
   int valor, quant_pares = 0;

   for (int i=0; i<10; i++) {
      printf("%dº valor :\n", i+1);
      scanf("%d", &valor);
      valores[i] = valor;

      if (valor % 2 == 0) {
         quant_pares += 1;
      }
   }

   for (int i=0; i<10; i++) {
      printf("%dº valor : %d \n", i+1, valores[i]);
   }

   printf("quantidade de pares: %d\n", quant_pares);

   printf("\nfim do programa.\n");

   return 0;
}


/*
1º valor :
10
2º valor :
3
3º valor :
5
4º valor :
7
5º valor :
9
6º valor :
30
7º valor :
20
8º valor :
1
9º valor :
13
10º valor :
90

1º valor : 10
2º valor : 3
3º valor : 5
4º valor : 7
5º valor : 9
6º valor : 30
7º valor : 20
8º valor : 1
9º valor : 13
10º valor : 90
quantidade de pares: 4

fim do programa.


*/

