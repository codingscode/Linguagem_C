#include <stdio.h>


/*
arrays e ponteiros



*/



int main() {
   int valores[5];
   int numeros[4] = {4, 5, 6, 7};

   for (int i = 0; i < 5; i++) {
      printf("informe %dº valor: \n", i+1);
      scanf("%d", &valores[i]);
   }

   printf("valores informados:\n");

   for (int i = 0; i < 5; i++) {
      printf("valor %dº: %d \n", i+1, valores[i]);
   }

   printf("outro:\n");

   for (int i = 0; i < 4; i++) {
      printf("%d ", numeros[i]);
   }

   printf("\n----------------\n");
   printf("endereço valores[0]: %p\n", &(valores[0]));
   printf("endereço valores: %p\n", &valores);
   printf("valores: %d\n", valores);

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
informe 1º valor:
4
informe 2º valor:
5
informe 3º valor:
6
informe 4º valor:
7
informe 5º valor:
8
valores informados:
valor 1º: 4
valor 2º: 5
valor 3º: 6
valor 4º: 7
valor 5º: 8
outro:
4 5 6 7
----------------
endereço valores[0]: 0x7ffd16ae7b90
endereço valores: 0x7ffd16ae7b90
valores: 380533648








*/

