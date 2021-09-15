#include <stdio.h>


/*
ordenação de vetores

select sort



*/

void select_sort(int vet[], int tam) {
   int menor, troca;
   
   //loop externo para repassar todo o vetor
   for (int i = 0; i < (tam - 1); i++) {
      menor = i;
      // loop interno para trabalhar com o proximo elemento
      for (int j = (i+1); j < tam; j++) {
         if (vet[j] < vet[menor]) {
            menor = j;
         }
      }
      // ocorrendo a troca
      if (i != menor) {
         troca = vet[i];
         vet[i] = vet[menor];
         vet[menor] = troca;
      }
   }
}


int main() {
   // vetor desordenado
   int vetor[6] = { 8, 3, 1, 42, 12, 5 };
   
   select_sort(vetor, 6);
   
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

