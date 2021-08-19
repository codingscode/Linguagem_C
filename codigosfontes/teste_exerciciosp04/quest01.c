#include <stdio.h>


int main() {
    int numero1, numero2;

    printf("digite os valores de numero1 e numero2 um abaixo do outro:\n");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2) {
    	printf("%d é maior que %d", numero1, numero2);
    }
    else {
    	printf("%d é maior que %d", numero2, numero1);
    }

    return 0;
}



/*
 no terminal do arquivo usar:
     gcc quest04.c -o saida.o -lm
     ./saida.o
*/

/*
digite os valores de numero1 e numero2 um abaixo do outro:
7
10
10 é maior que 7


digite os valores de numero1 e numero2 um abaixo do outro:
28
5
28 é maior que 5



*/

