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

   p = (int*)malloc(quantidade * sizeof(int));

   for (int i = 0; i < quantidade; i++) {
      printf("informe valor para posição %d do vetor: \n", i);
	  scanf("%d", &p[i]);
   }

   for (int i = 0; i < quantidade; i++) {
      printf("no vetor 'p[%d]' está o valor %d.\n", i, p[i]);
   }

   printf("a variavel 'p' ocupa %ld bytes de memória.\n", quantidade * sizeof(int));


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
informe a quantidade de elementos para o vetor:
3
informe valor para posição 0 do vetor:
40
informe valor para posição 1 do vetor:
2
informe valor para posição 2 do vetor:
12
no vetor 'p[0]' está o valor 40.
no vetor 'p[1]' está o valor 2.
no vetor 'p[2]' está o valor 12.
a variavel 'p' ocupa 12 bytes de memória.














*/

