#include <stdio.h>


/*
ordenação de vetores quick sort -> assim como o shell sort, o quick sort ordena vetores separando o mesmo em grupos e ordenando estes grupos conforme vai varrendo o vetor.





*/

void quick_sort(int vetor[], int tam) {
   int i, j, grupo, troca;
   
   // criterio de parada da recursividade
   if (tam < 2) {
      return; // sai
   }
   else {
      grupo = vetor[tam/2];
   }
   
   // fazendo um loop único se comportar como dois
   for (i = 0, j = tam - 1;; i++, j--) {
      
      // fazermos a movimentação dos elementos no vetor
      while (vetor[i] < grupo) {
         i++;
      }
      
      // fazermos a movimentação dos elementos no vetor
      while (grupo < vetor[j]) {
         j--;
      }
      
      //criterio de parada do loop
      if (i >= j) {
         break;
      }
      else {
         // onde ocorrem as trocas
         troca = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = troca;
      }
   }
   // usar a recursividade para ordernar os grupos
   quick_sort(vetor, i);
   quick_sort(vetor + i, tam - i);
}


int main() {
    // vetor desordenado
    int vetor[6] = { 8, 3, 1, 42, 12, 5 };
 
    quick_sort(vetor, 6);

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

