#include <stdio.h>
#include <string.h>



/*
typedef - > redefinir tipos



*/


int main() {

   typedef float nota;

   nota prova1 = 8.5;
   nota prova2 = 10.0;

   nota soma = prova1 + prova2;

   printf("soma notas: %.2f", soma);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
soma notas: 18.50







*/

