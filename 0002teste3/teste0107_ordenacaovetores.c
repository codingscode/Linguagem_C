#include <stdio.h>


/*
ordenação de vetores merge sort -> também conhecido como algoritmo de ordenação por mistura utiliza a ideia basica de dividir e conquistar.
       ele divide, recursivamente, o vetor até que cada subconjunto possua 1 elemento, fazendo a combinação de 2 subconjuntos de forma a obter 1 conjunto maior e ordenado.
       este processo se repete até que exista apenas 1 conjunto.





*/

void merge (int vetor[], int inicio1, int fim1, int inicio2, int fim2) {

   // vetor temporario para o merge
   int temp[50];
   // variaveis auxiliares
   int i, j, k;
   // inicio do primeiro grupo
   i = inicio1;
   // inicio do segundo grupo
   j = inicio2;
   k = 0;

   // enquanto tiver elementos em ambos os grupos...
   while (i <= fim1 && j <= fim2) {
      //faz a ordenacao de acordo com cada grupo
      if (vetor[i] < vetor[j]) {
         temp[k++] = vetor[i++];
      }
      else {
         temp[k++] = vetor[j++];
      }
   }
   
   //copiar os elementos restantes do primeiro grupo
   while (i <= fim1) {
      temp[k++] = vetor[i++];
   }
   
   //copiar os elementos restantes do segundo grupo
   while (j <= fim2) {
      temp[k++] = vetor[j++];
   }
   
   // transfere os elementos do vetor temporario para o original
   for (i = inicio1, j = 0; i <= fim2; i++, j++) {
      vetor[i] = temp[j];
   }
}

void merge_sort(int vetor[], int inicio, int fim) {
   
   //codicao de parada da recursao
   if (inicio < fim) {
      //calcular o meio do vetor
      int meio = (inicio + fim) / 2;
      
      // recursao esquerda
      merge_sort(vetor, inicio, meio);
      
      //recursao direita
      merge_sort(vetor, meio+1, fim);
      
      //faz o merge (junta) com os dois grupos de vetores ordenados
      merge(vetor, inicio, meio, meio+1, fim);
   }
   
   
}



int main() {
    // vetor desordenado
    int vetor[6] = { 8, 3, 1, 42, 12, 5 };
 
    //vetor, inicio, fim
    merge_sort(vetor, 0, 6 - 1);

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

