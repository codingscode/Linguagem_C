#include <stdio.h>
#include <ctype.h>



/*
ctype.h

teste de tipos de caracteres

isalnum() -> verifica se o caractere é alfanumerico
isalpha() -> '' se o caractere é alfabetico
isdigit() -> " se o caractere é uma digito decimal
ispunct() -> '' se o caractere é uma pontuação (?!.)
isspace() -> "" se é um espaço ( )
isupper() -> "" é maiuscula
tolower() -> converte para minuscula
toupper() -> converte para maiuscula




*/


int main() {
   char caractere1 = 'h';


   if (isalnum(caractere1)) {
      printf("%c é alfanumérico.\n", caractere1);
   }
   else if (isalpha(caractere1)) {
	  printf("%c é alfabetico.\n", caractere1);
   }
   else if (isdigit(caractere1)) {
      printf("%c é digito decimal.\n", caractere1);
   }
   else {
      printf("nenhuma das anteriores.\n");
   }



   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*










*/

