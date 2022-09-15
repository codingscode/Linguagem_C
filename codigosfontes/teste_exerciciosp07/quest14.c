#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/

int verificar(int n, int *iteravel) {
   int cont = 0;

   for (int i=0;i<5;i++) {
      if (n == iteravel[i]) {
         cont += 1;
      }
   }

   if (cont > 1) {
      printf("%d é repetido, aparece %d vezes\n", n, cont);
   }
   else {
	  printf("%d não é repetido.\n", n);
   }

   return 1;
}


int main() {

   int numeros[5] = {};
   int valor, numero = 0;

   for (int i=0; i<5; i++) {
      printf("%dº valor:\n", i+1);
      scanf("%d", &valor);
      numeros[i] = valor;
   }


   for (int j=0; j<5; j++) {
      verificar(numeros[j], numeros);

   }

   printf("\nfim do programa.\n");

   return 0;
}


/*
1º valor:
3
2º valor:
5
3º valor:
5
4º valor:
8
5º valor:
9

3 não é repetido.
5 é repetido, aparece 2 vezes
5 é repetido, aparece 2 vezes
8 não é repetido.
9 não é repetido.

fim do programa.


*/




