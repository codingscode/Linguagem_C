#include <stdio.h>


/*
ordenação de vetores

buble sort -> 



*/

void bubble_sort(int vet[], int tam) {
    // variavel auxiliar
    int proximo = 0;
    
    // varrer todo o vetor externo
    for (int i = 0; i < tam; i++) {
        // trabalhar com os proximos elementos
        for (int j = 0; j < (tam - 1); j++) {
            // ocorre a troca
            if (vet[i] > vet[j + 1]) {
                proximo = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = proximo;
            }
        }
    }
}


int main() {
    // vetor desordenado
    int vetor[6] = { 8, 3, 1, 42, 12, 5 };
 
    bubble_sort(vetor, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
1
5
3
12
8
42




*/

