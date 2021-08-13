#include <stdio.h>
#include <time.h>



int main() {

    int idade;
	time_t agora = time(NULL);
	struct tm *tm_struct = localtime(&agora);

	int ano = tm_struct->tm_year + 1900;

    printf("digite sua idade:\n");
    scanf("%d", &idade);
    printf("você nasceu em %d \n", ano - idade);


    return 0;
}



/*
 no terminal do arquivo usar:
     gcc quest04.c -o saida.o -lm
     ./saida.o
*/

/*
digite sua idade:
19
você nasceu em 2002



*/

