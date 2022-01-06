#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/


int main() {
   int quantidade = 10, soma = 0;
   int numeros[quantidade];
   float media;


   for (int i = 0; i < quantidade; i++) {
      printf("%dº número: \n", i+1);
      scanf("%d", &numeros[i]);
      soma += numeros[i];
   }

   media = soma/quantidade;

   printf("media: %.2f", media);



   return 0;
}


/*
1º número:
4
2º número:
3
3º número:
10
4º número:
2
5º número:
8
6º número:
8
7º número:
9
8º número:
12
9º número:
5
10º número:
1
media: 6.00



*/

