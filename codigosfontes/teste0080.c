#include <stdio.h>
#include <string.h>



/*
string.h

operações em strings

strcpy() -> copia de string
strcat() -> concatena strings
strcmp() -> compara duas strings



*/




int main() {


	char string1[20], string2[20];

	strcpy(string1, "laranja");
	printf("string1: %s\n", string1);
	strcpy(string2, "goiaba");
	printf("string2: %s\n", string2);

	printf("%d\n", strcmp(string1, string2)); // 0 é true, >0 é false

	if (strcmp(string1, string2)) {
	   printf("'%s' e '%s' não são iguais.\n", string1, string2);
	}
	else {
	   printf("'%s' e '%s' são iguais.\n", string1, string2);
	}



   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
string1: laranja
string2: goiaba
5
'laranja' e 'goiaba' não são iguais.










*/

