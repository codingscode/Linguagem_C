#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*

*/

int ehprimo(int num) {
   int ndivisores = 1;

   if (num > 1) {
      for (int j=1; j <= (num/2); j++) {
         if ((num % j == 0) && (num != 1)) {
            ndivisores += 1;
         }
      }

      if (ndivisores > 2) {
         return 0;
      }

      return 1;
   }
   else {
      return 0;
   }
}



int main() {

   int quantidade, atual = 1, soma = 0, contador = 0;
   int a, b;


   printf("digite valores de intervalos a e b: \n");
   scanf("%d", &a);
   scanf("%d", &b);

   printf("\n");

   for (int i=a+1; i<b; i++) {
	  if (ehprimo(i)) {
         soma += i;
	  }
      printf("%d: %d\n", i, ehprimo(i));
   }


   /*
   printf("1: %d \n", ehprimo(1)); // 0
   printf("2: %d \n", ehprimo(2)); // 1
   printf("3: %d \n", ehprimo(3)); // 1
   printf("4: %d \n", ehprimo(4)); // 0
   printf("5: %d \n", ehprimo(5)); // 1
   printf("6: %d \n", ehprimo(6)); // 0
   printf("7: %d \n", ehprimo(7)); // 1

   */
   printf("\nsoma: %d\n", soma);

   printf("\nfim do programa.\n");

   return 0;
}


/*

digite valores de intervalos a e b:
4
14

5: 1
6: 0
7: 1
8: 0
9: 0
10: 0
11: 1
12: 0
13: 1

soma: 36

fim do programa.

*/

