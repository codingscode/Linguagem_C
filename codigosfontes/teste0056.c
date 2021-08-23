#include <stdio.h>


/*
ifndef - diretiva de compilação


*/

//#ifndef PI  // se PI não definido. se PI existir
//   #define PI 3.14  // defina
//#endif

int main() {
   int valor = 8;
   valor = 400;


   printf("valor: %d\n", valor);


   #ifdef PI  // só imprime se definido
      printf("valor de PI: %f\n", PI);
   #endif



   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor: 400







*/

