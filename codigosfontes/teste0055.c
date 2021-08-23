#include <stdio.h>


/*
ifndef - diretiva de compilação


*/

#ifndef PI  // se PI não definido. se PI existir
   #define PI 3.14  // defina
#endif

int main() {
   int valor = 8;
   valor = 400;


   printf("valor: %d\n", valor);
   printf("PI: %f\n", PI);
   printf("2*PI: %f\n", 2*PI);

   #ifdef PI
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
PI: 3.140000
2*PI: 6.280000
valor de PI: 3.140000







*/

