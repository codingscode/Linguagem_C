#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   int valor, delta,n1 = 11, n2 = 13, n3 = 17;

   printf("digite uma valor maior que 11, 13 e 17:\n");
   scanf("%d", &valor);

   delta = valor;

   while ((delta % n1 != 0) && (delta % n2 != 0) && (delta % n3 != 0)) {
      delta += 1;
   }


   printf("primeiro multiplo de um deles após %d: %d.\n", valor, delta);

   return 0;
}


/*
digite uma valor maior que 11, 13 e 17:
30
primeiro multiplo de um deles após 30: 33.




*/

