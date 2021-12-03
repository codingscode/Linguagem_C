#include <stdio.h>


/*
ifndef - diretiva de compilação


*/
//constantes
#define PI 3.14


int main() {
   int valor = 8;
   valor = 400;


   printf("valor: %d\n", valor);
   printf("PI: %.2f\n", PI);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor: 400
PI: 3.140000







*/

