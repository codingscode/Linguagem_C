#include <stdio.h>


/*
ordenação de vetores

insert sort



*/

void insert_sort(int vet[], int tam) {
   int troca;
   
   // percorrer todo o vetor
   for (int i = 1; i < tam; i++) {
      int proximo = i;
      
      // responsavel pelas trocas
      while ((proximo != 0) && (vet[proximo] < vet[proximo - 1])) {
         troca = vet[proximo];
         vet[proximo] = vet[proximo - 1];
         vet[proximo - 1] = troca;
         proximo--;
      }
   }
}



int main() {
   // vetor desordenado
   int vetor[6] = { 8, 3, 1, 42, 12, 5 };

   insert_sort(vetor, 6);

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

