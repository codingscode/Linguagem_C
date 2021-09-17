#include <stdio.h>


/*
ordenação de vetores

shell sort -> 



*/

void shell_sort(int vet[], int tam) {
    // variavel auxiliar
    int grupo = 1;
    
    // gerar o tamanho de grupo de acordo com o tamanho do vetor
    while (grupo < tam) {
        grupo = 3*grupo + 1;
    }
    
    // varrer o vetor enquanto houver grupos para ordenar
    while (grupo > 1) {
        // dividir o grupo em 3 partes
        grupo /= 3;
        // varremos cada grupo
        for (int i = grupo; i < tam; i++) {
            int troca = vet[i];
            int j = i - grupo;
            // realiza a troca
            while (j >= 0 && troca < vet[j]) {
                vet[j + grupo] = vet[j];
                j -= grupo;
            }
            // realiza a troca
            vet[j + grupo] = troca;
        }
    }
}


int main() {
    // vetor desordenado
    int vetor[6] = { 8, 3, 1, 42, 12, 5 };
 
    shell_sort(vetor, 6);

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
3
5
8
12
42




*/

