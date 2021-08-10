#include <stdio.h>
#include <math.h>



int main() {

    int numero;

    printf("digite um número: \n");
    scanf("%d", &numero);

    if (numero > 0) {
    	printf("%d ^ 2 é %lf \n", numero, pow(numero, 2));
    	printf("%d ^ 0.5 é %lf \n", numero, pow(numero, 0.5));
    }
    else {
    	printf("%d é negativo \n", numero);
    }

    return 0;
}



/*
 no terminal do arquivo usar:
     gcc quest04.c -o saida.o -lm
     ./saida.o
*/

/*
digite um número:
6
6 ^ 2 é 36.000000
6 ^ 0.5 é 2.449490


*/

