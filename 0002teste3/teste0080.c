#include <stdio.h>
#include <string.h>



/*
string.h

operações em strings

strcpy() -> copia de string
strcat() -> concatena strings

*/




int main() {


	char minha_string1[20], minha_string2[20];

	strcpy(minha_string1, "copa");
	printf("minha_string1: %s\n", minha_string1);
	strcpy(minha_string2, "cabana");
	printf("minha_string2: %s\n", minha_string2);

	strcat(minha_string1, minha_string2);

	printf("minha_string1: %s\n", minha_string1);
	printf("minha_string2: %s\n", minha_string2);

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*










*/

