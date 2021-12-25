#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/


int main() {
   int numero = 3, quantidade = 3;

   for (int i = 0; i < quantidade; i++) {
      printf("%dº multiplo: %d\n", i+1, numero*(i+1));
   }


   return 0;
}


/*
1º multiplo: 3
2º multiplo: 6
3º multiplo: 9



*/

