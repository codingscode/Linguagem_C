#include <stdio.h>

/*
matrizes parte 1


array multi-dimensional

char array[3][4]

*/


int main() {
	char nome[3][50];

	for (int i = 0; i < 3; i++) {
	   printf("qual seu nome?\n");
	   gets(nome[i]);
	}

	printf("\n");

	for (int i=0; i < 3; i++) {
	   printf("Olá %s \n", nome[i]);
	}



   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
qual seu nome?
samuel
qual seu nome?
israel
qual seu nome?
deborah

Olá samuel
Olá israel
Olá deborah





*/

