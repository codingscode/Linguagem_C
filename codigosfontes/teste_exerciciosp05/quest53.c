#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*

*/

void imprimir(int v) {
   int ini = 1;

   for (int i=0; i < v; i++) {
      for (int j=0; j <= i; j++) {
         printf("%d ", ini);
         ini += 1;
      }
      printf("\n");
   }

}


int main() {

   int n;

   printf("valor para n linhas: \n");
   scanf("%d", &n);

   printf("\n");

   imprimir(n);

   printf("\nfim do programa.\n");

   return 0;
}


/*

valor para n linhas:
6

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

fim do programa.



*/

