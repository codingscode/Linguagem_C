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

   for (int j=0; j < valor; j++) {
	  printf("%dº impar: %d\n", j+1,numeros[j]);
   }


   return 0;
}


/*
digite a quantidade de números:
8
1º impar: 2
2º impar: 3
3º impar: 5
4º impar: 7
5º impar: 9
6º impar: 11
7º impar: 13
8º impar: 15



*/

