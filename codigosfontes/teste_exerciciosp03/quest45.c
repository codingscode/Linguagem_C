#include <stdio.h>
#include <ctype.h>


int main() {

	//q45
	char letra, resultado, outro = 'j';

	printf("digite uma letra:\n");
	scanf("%c", &letra);

	resultado = tolower(letra);
    printf("%c em minusculo é: %c \n", letra, resultado);
    printf("%c em maiusculo é: %c \n", outro, toupper(outro));

	return 0;

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */
    /*
     programa eclipse c/c++
     em Project -> Properties -> C/C++ Build -> Settings -> GCC C Linker -> Libraries -> adicionar m em Libraries(-l)
     */
}



/*
digite uma letra:
F
F em minusculo é: f
j em maiusculo é: J

*/
