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



*/




int main() {

   char string1[] = "pedro@gmail.com";

   printf("usuario: '%s'\n", strtok(string1, "@"));

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
usuario: 'pedro'













*/

