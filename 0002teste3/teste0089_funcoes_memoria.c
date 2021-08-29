#include <stdio.h>
#include <time.h>



/*
funções para alocação de memória






*/




int main() {
   int numeros[3];
   numeros[0] = 21;
   numeros[1] = 8;
   numeros[2] = 5;

   printf("a variavel numero[0] vale '%d' e ocupa %ld bytes.\n", numeros[0], sizeof(numeros[0]));
   printf("a variavel numeros ocupa %ld bytes.\n", sizeof(numeros));


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
a variavel numero[0] vale '21' e ocupa 4 bytes.
a variavel numeros ocupa 12 bytes.














*/

