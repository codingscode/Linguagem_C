#include <stdio.h>


/*




*/




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




*/

