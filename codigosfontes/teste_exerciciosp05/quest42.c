#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/




int main() {

   int numeros[] = {};
   int vezent = 0, menor = 0, maior = 0;
   int numero;


   while (numero > 0) {
	  printf("digite um número positivo :\n");
      scanf("%d", &numero);
      numeros[vezent] = numero;
      vezent += 1;

   }

   printf("\n");

   for (int i = 0; i < vezent-1; i++) {
      printf("%d | quadrado: %.2f | cubo: %.2f | rqd: %.2f \n", numeros[i], (float) pow(numeros[i], 2), (float) pow(numeros[i], 3), (float) pow(numeros[i], 0.5));
   }



   return 0;
}


/*
digite um número diferente de 0 :
3
digite um número diferente de 0 :
2
digite um número diferente de 0 :
4
digite um número diferente de 0 :
-1

*** stack smashing detected ***: terminated
3 | quadrado: 9.00 | cubo: 27.00 | rqd: 1.73
2 | quadrado: 4.00 | cubo: 8.00 | rqd: 1.41
4 | quadrado: 16.00 | cubo: 64.00 | rqd: 2.00





*/
