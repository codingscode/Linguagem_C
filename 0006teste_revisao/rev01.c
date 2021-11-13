#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main() {



   srand(time(0));


   int numero = rand() % 10; // 0 até 9
   printf("numero fora: %d\n", numero);

   while (numero != 0) {
      numero = rand() % 10; // 0 até 9
      printf("numero: %d\n", numero);
   }


   printf("fim\n");
   return 0;
}

/*
   srand(time(0));


   int numero = rand() % 10;
   printf("numero fora: %d\n", numero);

   while (numero != 3) {
      numero = rand() % 10; // 0 até 2
      printf("numero: %d\n", numero);
   }


   printf("fim\n");
   return 0;
*/

/*







*/
