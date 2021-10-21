#include <stdio.h>


/*
ordenação de vetores heap sort -> conhecido tambem como ordenação usando heap, utiliza um heap(vetor que simula uma arvore binaria completa - com exceção do ultimo nivel) para realizar a ordenação.
Todo elemento 'pai' do vetor possui dois elementos como 'filhos'.





*/

void cria_heap(int vetor[], int inicio, int fim) {
   int pai = vetor[inicio];
   int filho = inicio*2 + 1;
   
   // Pai tem 2 filhos. Quem é o maior?
   while (filho <= fim) {
      if (filho < fim) {
         if (vetor[filho] < vetor[filho + 1]) {
            filho += 1;
         }
      }
      
      // filho é maior que o pai?
      // filho se torna pai
      // repete o processo
      if (pai < vetor[filho]) {
         vetor[inicio] = vetor[filho];
         inicio = filho;
         filho = 2*inicio + 1;
      }
      else {
         filho += 1;
      }
   }
   // o antigo pai ocupa o lugar do ultimo filho analisado
   vetor[inicio] = pai;
}


void heap_sort(int vetor[], int tam) {
   int troca;
   int meio = (tam - 1) / 2;
   
   // cria a heap a partitura dos dados
   for (int i = meio; i >= 0; i--) {
      cria_heap(vetor, i, tam - 1);
   }
   
   for (int i = tam - 1; i >= 1; i--) {
      // pega o maior elemento da heap e coloca na sua posição correspondente no vetor
      troca = vetor[0];
      vetor[0] = vetor[i];
      vetor[i] = troca;

      //reconstroi a heap
      cria_heap(vetor, 0, i - 1);      
   }
   
}


int main() {
    // vetor desordenado
    int vetor[6] = { 8, 3, 1, 42, 12, 5 };
 
    //vetor, inicio, fim
    heap_sort(vetor, 6);

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

