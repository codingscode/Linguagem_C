#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/


int main() {
   int valor;

   printf("digite a quantidade de números:\n");
   scanf("%d", &valor);

   int numeros[valor-1];
   numeros[0] = 2;


   for (int i = 0; i < valor - 1; i++) {
	  numeros[i+1] = numeros[0] + 1 + i*2;

   }

   for (int j=valor; j > 0; j--) {
	  printf("%dº impar: %d\n", valor+1-j,numeros[j-1]);
   }


   return 0;
}


/*
digite a quantidade de números:
6
1º impar: 11
2º impar: 9
3º impar: 7
4º impar: 5
5º impar: 3
6º impar: 2




*/

