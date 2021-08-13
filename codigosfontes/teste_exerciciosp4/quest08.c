#include <stdio.h>
#include <math.h>



int main() {
   float nota;
   float notas[2];
   float soma;

   //scanf("%f", nota1);
   //printf("digite nota 2:\n");
   //scanf("%f", nota2);

   //notas[0] = nota1;


   for (int i = 0; i < 2; i++) {
      printf("digite nota %d:\n", i + 1);
      scanf("%f", &nota);
      notas[i] = nota;
   }

   for (int i = 0; i < 2; i++) {
      if ((notas[i] < 0) | (notas[i] > 10)) {
    	  printf("alguma nota inválida\n");
    	  break;
      }
      soma += notas[i];
   }

   printf("nota 1: %f\n", notas[0]);
   printf("nota 2: %f\n", notas[1]);
   printf("media: %f\n", soma/2);

   return 0;
}



/*
 no terminal do arquivo usar:
     gcc quest04.c -o saida.o -lm
     ./saida.o
*/

/*
digite nota 1:
7
digite nota 2:
9
nota 1: 7.000000
nota 2: 9.000000
media: 8.000000



*/

