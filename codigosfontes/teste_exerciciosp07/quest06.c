#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   int valores[10] = {};
   int valor, maior, menor;

   for (int i=0; i<10; i++) {
      printf("%dº valor :\n", i+1);
      scanf("%d", &valor);
      valores[i] = valor;
   }

   for (int i=0; i<10; i++) {
      printf("%dº valor : %d \n", i+1, valores[i]);
   }

   maior = valores[0];
   menor = valores[0];

   for (int j=0; j<10; j++) {
      if (maior < valores[j]) {
         maior = valores[j];
      }
      if (menor > valores[j]) {
         menor = valores[j];
      }
   }

   printf("maior: %d, menor: %d\n", maior, menor);

   printf("\nfim do programa.\n");

   return 0;
}


/*
1º valor :
8
2º valor :
2
3º valor :
14
4º valor :
6
5º valor :
21
6º valor :
0
7º valor :
11
8º valor :
80
9º valor :
7
10º valor :
2

1º valor : 8
2º valor : 2
3º valor : 14
4º valor : 6
5º valor : 21
6º valor : 0
7º valor : 11
8º valor : 80
9º valor : 7
10º valor : 2
maior: 80, menor: 0

fim do programa.


*/

