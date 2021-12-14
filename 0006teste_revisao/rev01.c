#include <stdio.h>
#include <string.h>



/*
string.h

operações em strings

strcpy() -> copia de string
strcat() -> concatena strings
strcmp() -> compara duas strings
strchr() -> localiza a primeira ocorrencia de caractere1actere em uma string

*/

int main() {


   char string1[] = "pedro@gmail.com";
   char caractere1 = '@';

   char *retorno = strchr(string1, caractere1);

   printf("A partir do '%c' está '%s'\n", caractere1, retorno);

   return 0;
}


/*
A partir do '@' está '@gmail.com'












*/

