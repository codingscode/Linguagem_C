#include <stdio.h>
#include <stdlib.h>



/*
funções para alocação de memória



*/


int main() {
	// alocação dinâmica de memória
   int quantidade, *p;

   printf("informe a quantidade de elementos para o vetor: \n");
   scanf("%d", &quantidade);

   int bytes = quantidade * sizeof(int);
   p = (int*)malloc(bytes);

   for (int i = 0; i < quantidade; i++) {
      printf("informe valor para posição %d do vetor: \n", i);
	  scanf("%d", &p[i]);
   }

   for (int i = 0; i < quantidade; i++) {
      printf("no vetor 'p[%d]' está o valor %d.\n", i, p[i]);
   }

   printf("a variavel 'p' ocupa %d bytes de memória.\n", bytes);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
informe a quantidade de elementos para o vetor:
4
informe valor para posição 0 do vetor:
20
informe valor para posição 1 do vetor:
8
informe valor para posição 2 do vetor:
2
informe valor para posição 3 do vetor:
10
no vetor 'p[0]' está o valor 20.
no vetor 'p[1]' está o valor 8.
no vetor 'p[2]' está o valor 2.
no vetor 'p[3]' está o valor 10.
a variavel 'p' ocupa 16 bytes de memória.














*/

