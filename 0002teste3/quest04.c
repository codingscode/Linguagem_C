#include <stdio.h>
#include <math.h>


int main() {
	double x = 5.5;
	double y = 4.0;
	double p;
	p = pow (x, y);
	printf("The value : %lf \n", p);


	printf("algo\n");
	printf("pot: %lf \n", pow(2, 3));
	return 0;

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */

}



/*

	double x = 5.5;
	double y = 4.0;
	double p;
	p = pow(x, y);
	printf("The value : %lf \n", p);
	return 0;

--------------------------
   double num1 = 3.0;
   double quadrado = 0.0;

   printf("digite um número:");
   //scanf("%lf", &num1);
   quadrado = pow(num1, 2.0);

   printf("o quadrado dele é : %lf \n", quadrado);
   return (0);





*/
