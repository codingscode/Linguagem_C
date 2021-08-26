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
islower() -> "" é minuscula
tolower() -> converte para minuscula
toupper() -> converte para maiuscula




*/


int main() {
   char caractere1 = 'B';


   if (isalnum(caractere1)) {
      printf("%c é alfanumérico.\n", caractere1);

      if (isalpha(caractere1)) {
	     printf("%c é alfabetico.\n", caractere1);

	     if (isupper(caractere1)) {
	        printf("%c é maiusculo.\n", caractere1);
	     }
	     else {
	    	printf("%c é minusculo.\n", caractere1);
	     }
	  }
	  if (isdigit(caractere1)) {
		 printf("%c é digito decimal.\n", caractere1);
	  }

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

