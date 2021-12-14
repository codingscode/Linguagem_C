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

void verificar(char carac) {
   if (isalnum(carac)) {
      printf("%c é alfanumérico.\n", carac);

      if (isalpha(carac)) {
	     printf("%c é alfabetico.\n", carac);

	     if (isupper(carac)) {
	        printf("%c é maiusculo.\n", carac);
	     }
	     else {
	    	printf("%c é minusculo.\n", carac);
	     }
	  }
	  if (isdigit(carac)) {
		 printf("%c é digito decimal.\n", carac);
	  }

   }
   else if(ispunct(carac)) {
      printf("%c é pontuação.\n", carac);
   }
   else {
      printf("nenhuma das anteriores.\n");
   }

}


int main() {
   char caractere1 = '!';
   char caractere2 = 'b';
   char caractere3 = 'K';
   char caractere4 = '8';


   verificar(caractere1);
   printf("---------------\n");
   verificar(caractere2);
   printf("---------------\n");
   verificar(caractere3);
   printf("---------------\n");
   verificar(caractere4);
   printf("---------------\n");
   printf("---------------\n");


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
! é pontuação.
---------------
b é alfanumérico.
b é alfabetico.
b é minusculo.
---------------
K é alfanumérico.
K é alfabetico.
K é maiusculo.
---------------
8 é alfanumérico.
8 é digito decimal.
---------------
---------------










*/

