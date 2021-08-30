#include <stdio.h>
#include <stdlib.h>



/*
funções para alocação de memória
malloc() -> nao remove lixo da memoria
calloc() -> zera o espaço em memoria
realloc() -> realocação de memória



*/


int main() {
   int quantidade, *p;

   printf("informe a quantidade de elementos para o vetor: \n");
   scanf("%d", &quantidade);


   p = (int*)malloc(3 * sizeof(int));
   //p = (int*)calloc(3, sizeof(int));

   if (p) {

	  printf("a variavel 'p' ocupa %ld bytes de memória.\n", quantidade * sizeof(int));

      printf("informe a quantidade de elementos para o vetor: \n");
      scanf("%d", &quantidade);

      p = (int*) realloc(p, quantidade * sizeof(int));

      if (p) {
         printf("a variavel 'p' ocupa %ld bytes de memória.\n", quantidade * sizeof(int));
      }
      else {
    	 printf("erro: memória insuficiente!");
      }

   }
   else {
      printf("erro: memória insuficiente!");
   }

   // liberar a memória (desalocar)
   free(p);
   p = NULL;  // medida de segurança


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
a variavel 'p' ocupa 12 bytes de memória.
informe a quantidade de elementos para o vetor:
5
a variavel 'p' ocupa 20 bytes de memória.







*/

