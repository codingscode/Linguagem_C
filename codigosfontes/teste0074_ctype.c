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

   printf("teste1 : %d\n", isalnum('h'));
   printf("teste2 : %d\n", isalnum('a'));
   printf("teste3 : %d\n", isalnum('2'));
   printf("teste4 : %d\n", isalnum('?'));
   printf("teste5 : %d\n", isalpha('b'));
   printf("teste6 : %d\n", isalpha('4'));
   printf("teste7 : %d\n", ispunct('!'));
   printf("teste8 : %d\n", ispunct('3'));
   printf("teste9 : %d\n", isdigit(3.5));
   printf("teste10: %d\n", isdigit(3));
   printf("teste11: %d\n", isdigit('3'));
   printf("teste12: %d\n", isspace(' '));
   printf("teste13: %d\n", isspace('y'));


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
h é alfanumérico.
teste1 : 8
teste2 : 8
teste3 : 8
teste4 : 0
teste5 : 1024
teste6 : 0
teste7 : 4
teste8 : 0
teste9 : 0
teste10: 0
teste11: 2048
teste12: 8192
teste13: 0









*/

