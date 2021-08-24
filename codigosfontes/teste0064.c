#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
conversão de strings
atof() -> convert string para double
atoi() -> converte uma string para inteiro
atol() -> converte string para inteliro longo



geração de sequencia pseudo-aleatoria
rand()    -> gera numero aleatorio
srand()   -> inicializa o gerador de numeros aleatorios


gerenciamento de memória dinamica
malloc() -> aloca memoria
calloc() -> mesmo do de cima, mas ele limpa o lixo
free()   -> libera memória
realoc() -> realoca memoria, altera o tamanho de memoria ocupado


pesquisa e ordenação
qsort() -> ordena os elementos de uma array



*/

int compara(int *x, int *y) {
   if (*x > *y) {
      return 1;
   }
   else if (*x == *y) {
      return 0;
   }
   else {
      return -1;
   }
}


int main() {
   int numeros[] = { 8, 3, 12, 29, 15, 22, 10 };

   for (int i = 0; i < 7; i++) {
      printf("%d ", numeros[i]);
   }
   printf("\n");

   qsort(numeros, 7, sizeof(int), (void *)compara); // (iteravel, tamanho ocupado de cada elemento, quantidade elementos, cast)

   for (int i = 0; i < 7; i++) {
      printf("%d ", numeros[i]);
   }
   printf("\n");


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
8 3 12 29 15 22 10
3 8 10 12 15 22 29








*/

