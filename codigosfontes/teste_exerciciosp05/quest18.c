#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/


int main() {
   int quant_num, contador = 0;
   float numeros[quant_num], maior;

   printf("digite a quantidade de números: \n");
   scanf("%d", &quant_num);

   for (int i=0; i < quant_num; i++) {
	  printf("%dº numero:\n", i+1);
	  scanf("%f", &numeros[i]);

   }

   for (int j=0; j < quant_num; j++) {
      printf("%dº numero: %.2f\n", j+1, numeros[j]);
   }

   maior = numeros[0];

   for (int k = 0; k < quant_num; k++) {
      if (maior < numeros[k]) {
         maior = numeros[k];
      }
   }

   for (int b = 0; b < quant_num; b++) {
      if (maior == numeros[b]) {
         contador += 1;
      }
   }

   printf("maior é : %.2f e aparece %d vezes\n", maior, contador);

   /*
   if (quant_num > 2) {
      if (numeros[0] < numeros[1]) {
         maior = numeros[1];
      }
      else {
         maior = numeros[0];

      }
      for (int k = 2; k <= quant_num; k++) {
         if (maior < numeros[k]) {
            maior = numeros[k];
         }
      }

   }
   else {
      //logica
   }
*/


   return 0;
}


/*
digite a quantidade de números:
7
1º numero:
7
2º numero:
2
3º numero:
100
4º numero:
100
5º numero:
100
6º numero:
15
7º numero:
21
1º numero: 7.00
2º numero: 2.00
3º numero: 100.00
4º numero: 100.00
5º numero: 100.00
6º numero: 15.00
7º numero: 21.00
maior é : 100.00 e aparece 3 vezes




*/

