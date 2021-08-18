#include <stdio.h>


/*
ponteiros

++valor diferente de valor++
*/

void incrementar(int* valor) { // recebe endereço de memória
   printf("incrementar__ valor: %d \n", (*valor));
   printf("incrementar__ endereço de valor: %d \n", valor);

   printf("incrementar__ valor depois: %d \n", ++(*valor));
   printf("incrementar__ endereço de valor depois: %d \n", valor);
}


int main() {
   int contador = 10;

   printf("main__ valor de contador é %d.\n", contador);
   printf("main__ endereço de contador é %d.\n", &contador);

   incrementar(&contador);
   printf("main__ depois de incrementar:\n");
   printf("main__ contador é %d.\n", contador);
   printf("main__ endereço de contador é %d.\n", &contador);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
main__ valor de contador é 10.
main__ endereço de contador é -1101253596.
incrementar__ valor: 10
incrementar__ endereço de valor: -1101253596
incrementar__ valor depois: 11
incrementar__ endereço de valor depois: -1101253596
main__ depois de incrementar:
main__ contador é 11.
main__ endereço de contador é -1101253596.


ok agora
*/

