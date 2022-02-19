#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/

int aleatorio(int maior, int menor) {
   int numero = (rand() % (maior - menor + 1)) + menor;
   return numero;
}


int main() {

   srand(time(0));
   int valor;
   int tentativas = 0;
   int maior = 1000, menor = 1;
   int gerado = aleatorio(maior, menor);

   while (gerado != valor) {

      printf("digite um valor de 1 a 1000 :\n");
      scanf("%d", &valor);

      if (gerado > valor) {
         printf("valor gerado é maior.\n");
      }
      if (gerado < valor) {
    	 printf("valor gerado é menor.\n");
      }
      if (gerado == valor) {
    	 printf("você achou.\n");
      }

      tentativas += 1;

   }

   printf("num: %d, nº de tentativas: %d \n", gerado, tentativas);

   return 0;
}


/*
digite um valor de 1 a 1000 :
120
valor gerado é maior.
digite um valor de 1 a 1000 :
400
valor gerado é menor.
digite um valor de 1 a 1000 :
300
valor gerado é maior.
digite um valor de 1 a 1000 :
350
valor gerado é menor.
digite um valor de 1 a 1000 :
330
valor gerado é maior.
digite um valor de 1 a 1000 :
340
valor gerado é maior.
digite um valor de 1 a 1000 :
345
valor gerado é menor.
digite um valor de 1 a 1000 :
348
valor gerado é menor.
digite um valor de 1 a 1000 :
346
valor gerado é menor.
digite um valor de 1 a 1000 :
345
valor gerado é menor.
digite um valor de 1 a 1000 :
342
valor gerado é maior.
digite um valor de 1 a 1000 :
343
valor gerado é maior.
digite um valor de 1 a 1000 :
344
você achou.
num: 344, nº de tentativas: 13




*/

