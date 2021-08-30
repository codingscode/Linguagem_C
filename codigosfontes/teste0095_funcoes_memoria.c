#include <stdio.h>
#include <stdlib.h>



/*
funções para alocação de memória
malloc() -> nao remove lixo da memoria
calloc() -> zera o espaço em memoria


*/


int main() {
   int quantidade, *p;

   //printf("informe a quantidade de elementos para o vetor: \n");
   //scanf("%d", &quantidade);

   p = (int*)malloc(3 * sizeof(int));
   //p = (int*)calloc(3, sizeof(int));

   if (p) {
      /*for (int i = 0; i < quantidade; i++) {
         printf("informe valor para posição %d do vetor: \n", i);
         scanf("%d", &p[i]);
      }

      for (int i = 0; i < quantidade; i++) {
         printf("no vetor 'p[%d]' está o valor %d.\n", i, p[i]);
      }*/
	  //p[0] = 8;
	  //p[1] = 10;
	  //p[2] = 2;
      printf("a variavel 'p' ocupa %ld bytes de memória.\n", 3 * sizeof(int));
	  printf("valor p[0] : %d\n", p[0]);
	  printf("valor p[1] : %d\n", p[1]);
	  printf("valor p[2] : %d\n", p[2]);

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
a variavel 'p' ocupa 12 bytes de memória.
valor p[0] : 0
valor p[1] : 0
valor p[2] : 0







*/

