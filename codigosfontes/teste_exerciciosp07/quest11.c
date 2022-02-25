#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {

   float numeros[10] = {};
   int quantnegat = 0;
   float valor, somaposit = 0;

   for (int i=0; i<10; i++) {
      printf("%dº valor:\n", i+1);
      scanf("%f", &valor);
      numeros[i] = valor;

      if (valor > 0) {
         somaposit += valor;
      }
      else {
    	 quantnegat += 1;
      }
   }

   for (int j=0; j<10; j++) {
      printf("%dº valor: %.2f\n", j+1, numeros[j]);
   }

   printf("soma dos positivos: %.2f \n", somaposit);
   printf("quantidade dos negativos: %d\n", quantnegat);

   printf("\nfim do programa.\n");

   return 0;
}


/*
1º valor:
10
2º valor:
8
3º valor:
-6
4º valor:
-15
5º valor:
1
6º valor:
2
7º valor:
-10
8º valor:
4
9º valor:
-20
10º valor:
-30

1º valor: 10.00
2º valor: 8.00
3º valor: -6.00
4º valor: -15.00
5º valor: 1.00
6º valor: 2.00
7º valor: -10.00
8º valor: 4.00
9º valor: -20.00
10º valor: -30.00
soma dos positivos: 25.00
quantidade dos negativos: 5

fim do programa.

*/

