#include <stdio.h>

/*
escrevendo funções 2
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

char* imprimir_string2(char* minha_string) {
   return minha_string;
}

int main() {

   printf("alguma coisa...\n");
   imprimir();
   printf("%s \n", imprimir2());
   printf("%d \n", somar(2, 3));
   printf("caractere passado: %c \n", caractere('k'));
   printf("caractere passado: %c \n", caractere(102));  // tabela ascii

   int soma2 = somar(3, 5);
   printf("som2: %d \n", soma2);
   printf("imprimindo outra string: %s", imprimir_string2("sua string"));

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
caractere passado: f
som2: 8
imprimindo outra string: sua string
*/
