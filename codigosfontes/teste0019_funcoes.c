#include <stdio.h>

/*
escrevendo funções



*/

// sem retorno
void imprimir() {
   printf("estou imprimindo...\n");
}

// com retorno
char* imprimir2() {
   return "o retorno...";
}

int somar(int numero1, int numero2) {
   return numero1 + numero2;
}

char caractere(char caract) {
   return caract;
}

int main() {

   printf("alguma coisa...\n");
   imprimir();
   printf("%s \n", imprimir2());
   printf("%d \n", somar(2, 3));
   printf("caractere passado: %c \n", caractere('k'));

   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
alguma coisa...
estou imprimindo...
o retorno...
5
caractere passado: k





*/

