#include <stdio.h>

/*
tipos alfanumericos:
- caractere: 'a'
- string*: "asfdhadsfh12"


na linguagem c não existe o tipo string

"algumacoisa\0"
 */


int main() {
	char nome[50];  // máximo de 49 caracteres
	char cor_olho[10];


	printf("qual o seu nome?\n");
	gets(nome);  // é usado para strings. caractere e outros não

	printf("seu nome é %s .\n", nome);

	printf("cor dos olhos:\n");
	scanf("%s", &cor_olho);

	printf("cor dos olhos: %s\n", cor_olho);

	return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
qual o seu nome?
aladin
seu nome é aladin .
cor dos olhos:
marrom
cor dos olhos: marrom





*/

