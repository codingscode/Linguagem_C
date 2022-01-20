#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   int valor = 100, soma = 0;

   for (int i=1; i <= valor; i++) {
      if ((i % 3 == 0) || (i % 5 == 0)) {
         soma += i;
      }
   }

   printf("soma: %d.\n", soma);

   return 0;
}


/*




*/

