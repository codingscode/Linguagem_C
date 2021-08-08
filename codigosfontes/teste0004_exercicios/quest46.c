#include <stdio.h>
#include <string.h>



void reverter(char*, int, int);

int main() {
    char string[20];
    int inteiro;

    printf("digite um número inteiro:\n");
    scanf("%d", &inteiro);
    sprintf(string, "%d", inteiro);


    reverter(string, 0, strlen(string)-1);
    printf("número %d invertido é %s", inteiro, string);

	return 0;

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */

}

void reverter(char *x, int inicio, int fim) {
   char c;

   if (inicio >= fim)
      return;

   c = *(x + inicio);
   *(x + inicio) = *(x + fim);
   *(x + fim) = c;

   reverter(x, ++inicio, --fim);
}




/*
digite um número inteiro:
284
número 284 invertido é 482

*/
