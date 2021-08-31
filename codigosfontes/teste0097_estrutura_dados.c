#include <stdio.h>



/*
estrutura de dados

Fila ->
queue.
- o elemento que entra primeiro, sai primeiro. first in, first out
- sempre que um elemento é adicionado na fila, ele vai pro final dela
- sempre que removemos um elemento, o primeiro é removido

enqueue() -> adiciona elemento na fila
dequeue() -> remove o elemento da fila
clear() -> limpa a fila

head -> cabeça da fila, indica o primeiro elemento
tail -> cauda da fila, indica o último elemento

aplicação: em qualquer situação onde a gente tenha que organizar o atendimento de elementos.



*/

#define TAMFILA 10

int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

void lista_elementos() {
   printf("\n=======FILA ATUAL=======\n");
   for (int i = 0; i < TAMFILA; i++) {
      printf("-|%d|-", fila[i]);
   }
   printf("\nHead: %d\n", head);
   printf("Tail: %d\n", tail);
   printf("\n\n");
}



int main() {

   lista_elementos();



   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*

=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0








*/

