#include <stdio.h>
#include <string.h>



/*
string.h

operações em strings

strcpy() -> copia de string
strcat() -> concatena strings
strcmp() -> compara duas strings
strchr() -> localiza a primeira ocorrencia de caractere1actere em uma string
strtok() -> divide uma string em sub-strings com base em um caractere
strlen() -> retorna o comprimento da string


*/




int main() {

   char string1[] = "jeriquaquara";

   printf("tamanho de string1: %d\n", (int) strlen(string1));

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
tamanho de string1: 12














*/

