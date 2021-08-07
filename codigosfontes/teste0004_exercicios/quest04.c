#include <stdio.h>
#include <math.h>


int main() {
	double num1;
	double quadrado;

	printf("digite um número:\n");
	scanf("%lf", &num1);
	quadrado = pow(num1, 2.0);

	printf("o quadrado dele é : %lf \n", quadrado);
	return 0;

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */

}



/*
digite um número:
4
o quadrado dele é : 16.000000


*/
