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

   printf("qual o seu nome?\n");
   gets(nome);

   printf("seu nome é %s .\n", nome);

   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
qual o seu nome?
vicente
seu nome é vicente .






*/

