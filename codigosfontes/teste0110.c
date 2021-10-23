#include <stdio.h>


/*

busca linear -> também chamada de busca squencial é utilizada para fazer buscas de elementos em vetores ordenados
elemento a elemento, de modo que a função do tempo em relação ao numero de elementos é linear, ou seja,
cresce proporcionalmente.



*/


int busca_linear(int vetor[], int chave, int tam) {

   for (int i = 0; i < tam; i++) {
      if (vetor[i] == chave) {
         return i;
      }
   }
   return -1;
}


int main() {
    // vetor ordenado
    int vetor[6] = {1, 3, 5, 8, 12, 42};

    
    // elemento chave que queremos encontrar no vetor
    int chave = 12;
    
    // aplicando a busca binária
    // vetor, chave, tamanho
    int ret = busca_linear(vetor, chave, 6);
    
    printf("O elemento %d está na posição %d", chave, ret);
    
    return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
O elemento 12 está na posição 4


*/

