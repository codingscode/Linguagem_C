#include <stdio.h>
#include <stdlib.h>



/*
funções para alocação de memória
malloc() ->
calloc() ->


*/


int main() {
   int quantidade, *p;

   printf("informe a quantidade de elementos para o vetor: \n");
   scanf("%d", &quantidade);

   p = (int*)malloc(quantidade * sizeof(int));

   if (p) {
      /*for (int i = 0; i < quantidade; i++) {
         printf("informe valor para posição %d do vetor: \n", i);
         scanf("%d", &p[i]);
      }

      for (int i = 0; i < quantidade; i++) {
         printf("no vetor 'p[%d]' está o valor %d.\n", i, p[i]);
      }*/

      printf("a variavel 'p' ocupa %ld bytes de memória.\n", quantidade * sizeof(int));

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
999999999999999999999999
erro: memória insuficiente!








*/

