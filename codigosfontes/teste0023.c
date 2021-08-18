#include <stdio.h>


/*
ponteiros

++valor diferente de valor++
*/

void incrementar(int valor) {
   printf("valor: %d \n", valor);
   valor += 1;
   printf("valor depois: %d \n", valor);
}


int main() {
   int contador = 10;

   printf("valor de contador é %d.\n", contador);

   incrementar(contador);
   printf("depois de incrementar:\n");
   printf("valor de contador é %d.\n", contador);  // o valor de contador não altera



   return 0;
}





/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor de contador é 10.
valor: 10
valor depois: 11
depois de incrementar:
valor de contador é 10.







*/

