#include <stdio.h>
#include <string.h>



void reverter(char*, int, int);

int main() {
    char string[20];
    int inteiro;

    printf("digite um número inteiro:\n");
    scanf("%d", &inteiro);
    sprintf(string, "%d", inteiro);

    printf("string: %s\n", string);


    reverter(string, 0, strlen(string)-1);
    printf("número %d invertido é %s\n", inteiro, string);

    printf("%c\n", ('f'+ 1));
    printf("%c\n", ('3'+ 1));
    printf("%s\n", ("62734"+ 1));
    printf("%s\n", ("62734"+ 2));
    printf("%s\n", ("62734"+ 3));

	return 0;

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */

}

void reverter(char *x, int inicio, int fim) {
   char c;
   printf("x: %s, inicio: %d, fim: %d\n", x, inicio, fim);

   if (inicio >= fim)
      return;

   c = *(x + inicio);
   printf("c: %c\n", c);
   *(x + inicio) = *(x + fim);
   printf("x: %s\n", x);
   *(x + fim) = c;

   reverter(x, ++inicio, --fim);
}




/*
digite um número inteiro:
12345
string: 12345
x: 12345, inicio: 0, fim: 4
c: 1
x: 52345
x: 52341, inicio: 1, fim: 3
c: 2
x: 54341
x: 54321, inicio: 2, fim: 2
número 12345 invertido é 54321
g
4
2734
734
34






*/

/*
x = "284" inicio = 0 fim = 2
c = 284
x + fim = 284

x = 284 inicio = 1 fim = 1


*/
