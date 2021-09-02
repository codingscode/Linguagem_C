#include <stdio.h>



/*
www.cs.usfca.edu/~galles/visualization/StackArray.html
pilha

filo -> first in last out
lifo -> last in first out

o processo de inserir um elemento é chamado de push.
o processo de remover um elemento é chamado de pop.




*/

#define TAMPILHA 10

int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos() {
   printf("\n========= Pilha atual ============\n");
   for (int i = 0; i < TAMPILHA; i++) {
      printf("-|%d|-", pilha[i]);
   }
   printf("\nTopo: %d", topo);
   printf("\n\n");
}

void push() {
   int val;
   printf("informe o valor:\n");
   scanf("%d", &val);
   if (topo < TAMPILHA) {
      pilha[topo] = val;
      topo += 1;
      lista_elementos();
   }
   else {
      printf("pilha cheia...\n");
   }
}

void pop() {
   if (topo >= 0) {
      pilha[topo - 1] = 0;
      topo -= 1;
      lista_elementos();
   }
   else {
      printf("pilha vazia...\n");
   }
}

void clear() {
   for (int i = 0; i < TAMPILHA; i++) {
      pilha[i] = 0;
   }
   topo = 0;
   lista_elementos();
}

int main() {
   int opcao = 0;
   
   do {
      printf("Selecione a opção:\n");
      printf("[1] - inserir (push).\n");
      printf("[2] - remover (pop).\n");
      printf("[3] - Listar:.\n");
      printf("[4] - Limpar a pilha.\n");
      printf("[-1] - Sair.\n");
      printf("Opção:\n");
      scanf("%d", &opcao);
      
      switch(opcao) {
         case 1:
            push();
            break;
         case 2:
            pop();
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
            printf("Opção inválida.\n");
         
      }
      
   } while(opcao != -1);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*









*/

