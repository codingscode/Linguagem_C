#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/


int main() {
   int quantidade = 10, soma = 0, negativos = 0;
   int numeros[quantidade];
   float media;


   for (int i = 0; i < quantidade; i++) {
      printf("%dº número: \n", i+1);
      scanf("%d", &numeros[i]);
      if (numeros[i] > 0) {
    	  soma += numeros[i];
      }
      else {
         negativos += 1;
      }

   }

   media = soma/(quantidade - negativos);

   printf("media: %.2f", media);



   return 0;
}


/*
1º número:
8
2º número:
-4
3º número:
-3
4º número:
-6
5º número:
10
6º número:
1
7º número:
1
8º número:
-8
9º número:
8
10º número:
9
media: 6.00




*/

