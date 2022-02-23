#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   int valores[10] = {};
   int valor, maior, posicao = 0;

   for (int i=0; i<10; i++) {
      printf("%dº valor :\n", i+1);
      scanf("%d", &valor);
      valores[i] = valor;
   }

   for (int i=0; i<10; i++) {
      printf("%dº valor : %d \n", i+1, valores[i]);
   }

   maior = valores[0];

   for (int j=0; j<10; j++) {
      if (maior < valores[j]) {
         maior = valores[j];
         posicao = j;
      }
   }

   printf("maior: %d, posição: %d\n", maior, posicao);

   printf("\nfim do programa.\n");

   return 0;
}


/*
1º valor :
21
2º valor :
8
3º valor :
3
4º valor :
15
5º valor :
16
6º valor :
42
7º valor :
5
8º valor :
1
9º valor :
4
10º valor :
5

1º valor : 21
2º valor : 8
3º valor : 3
4º valor : 15
5º valor : 16
6º valor : 42
7º valor : 5
8º valor : 1
9º valor : 4
10º valor : 5
maior: 42, posição: 5

fim do programa.

*/

