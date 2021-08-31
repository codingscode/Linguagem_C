#include <stdio.h>



/*
 www.cs.usfca.edu/~galles/visualization/QueueArray.html
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
int head = 0;  // próximo a ser atendido
int tail = 0;  // ultimo da fila

void lista_elementos() {
   printf("\n=======FILA ATUAL=======\n");
   for (int i = 0; i < TAMFILA; i++) {
      printf("-|%d|-", fila[i]);
   }
   printf("\nHead: %d\n", head);
   printf("Tail: %d\n", tail);
   printf("\n\n");
}

void enqueue() {
   int val;
   if (tail < TAMFILA) {
      printf("informe o elemento para adicionar na fila:\n");
      scanf("%d", &val);
      fila[tail] = val;
      tail += 1;
      lista_elementos();
   }
   else {
      printf("a fila está cheia...\n");
   }
}

void dequeue() {
   if (head < tail) {
      fila[head] = 0;
      head += 1;
      lista_elementos();
   }
   else {
      printf("a fila está vazia...\n");
   }
}

void clear() {
   for (int i = 0; i < TAMFILA; i++) {
      fila[i] = 0;
      lista_elementos();
   }
   head = 0;
   tail = 0;
}



int main() {

	int opcao = 0;

	do {
	   printf("selecione a opção: \n\n");
	   printf("[1] - inserir (enqueue): \n");
	   printf("[2] - remover (dequeue): \n");
	   printf("[3] - listar: \n");
	   printf("[4] - limpa a fila: \n");
	   printf("[-1] - sair. \n");
	   printf("opção: \n");
	   scanf("%d", &opcao);

	   switch(opcao) {
	      case 1:
	         enqueue();
	         break;
	      case 2:
	         dequeue();
	         break;
	      case 3:
	         lista_elementos();
	         break;
	      case 4:
	         clear();
	         break;
	      case -1:
	         break;
	      default:
	         printf("opção inválida.\n");
	   }

	} while (opcao != -1);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*

selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
3

=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0


selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
1
informe o elemento para adicionar na fila:
10

=======FILA ATUAL=======
-|10|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 1


selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
1
informe o elemento para adicionar na fila:
8

=======FILA ATUAL=======
-|10|--|8|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 2


selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
1
informe o elemento para adicionar na fila:
20

=======FILA ATUAL=======
-|10|--|8|--|20|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 3


selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
1
informe o elemento para adicionar na fila:
14

=======FILA ATUAL=======
-|10|--|8|--|20|--|14|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 4


selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
2

=======FILA ATUAL=======
-|0|--|8|--|20|--|14|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 1
Tail: 4


selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
2

=======FILA ATUAL=======
-|0|--|0|--|20|--|14|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4


selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
4

=======FILA ATUAL=======
-|0|--|0|--|20|--|14|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4



=======FILA ATUAL=======
-|0|--|0|--|20|--|14|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4



=======FILA ATUAL=======
-|0|--|0|--|0|--|14|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 2
Tail: 4


selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
4

=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0



=======FILA ATUAL=======
-|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|--|0|-
Head: 0
Tail: 0


selecione a opção:

[1] - inserir (enqueue):
[2] - remover (dequeue):
[3] - listar:
[4] - limpa a fila:
[-1] - sair.
opção:
-1








*/

