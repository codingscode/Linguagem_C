#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main() {
   //int n;

   //n = rand() % 3 + 1;

   //printf("%d\n", n);

   //time_t t;


   /* Intializes random number generator */
   srand(time(0));

   //int numero = 0;

	int numero = rand() % 10;
	printf("numero fora: %d\n", numero);

   while (numero != 3) {
      numero = rand() % 10; // 0 até 2
      printf("numero: %d\n", numero);
   }




   //printf("%d\n", rand() % 3);
   //printf("%d\n", rand() % 3);
   //printf("%d\n", rand() % 3);

   printf("fim\n");
   return 0;
}


/*







*/
