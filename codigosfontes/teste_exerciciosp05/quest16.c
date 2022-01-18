#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/


int main() {
   int valor;
   printf("digite um numero impar:\n");
   scanf("%d", &valor);
   printf("\n");

   int impares[valor/2 +1];
   //printf("%d\n", 0 && 0);

   if ((valor % 2 != 0) && (valor >= 3)) {
	  impares[0] = 2;

      for (int i = 0; i < valor/2 + 1; i++) {
    	 impares[i+1] = 3 + 2*(i);

      }

      for (int j = 0; j < valor/2 + 1; j++) {
         printf("%d\n", impares[j]);
      }
   }
   else if((valor % 2 == 0) && (valor >= 3)) {
      printf("o número não é impar.\n");

   }
   else if (valor < 0){
	  printf("valor invalido\n");
   }

   printf("fim");
   return 0;
}


/*
digite um numero impar:
21

2
3
5
7
9
11
13
15
17
19
21

---------------------------------
digite um numero impar:
8

o número não é impar.






*/

