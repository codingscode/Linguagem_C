#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*
numero natural . >= 0

*/


int main() {
   int valor, soma = 0;

   printf("digite um inteiro: \n");
   scanf("%d", &valor);

   for (int i=0; i < valor; i++) {
      soma += i;
   }

   printf("a soma de 0 até %d -1 é: %d.\n", valor, soma);



   return 0;
}


/*
digite um inteiro:
6
a soma de 0 até 6 -1 é: 15.




*/

