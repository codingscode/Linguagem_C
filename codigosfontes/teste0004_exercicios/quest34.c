#include <stdio.h>
#include <math.h>


int main() {
    double raio, area;

    printf("digite valor de raio:\n");
    scanf("%lf", &raio);
    area = 3.14*pow(raio, 2.0);

    printf("raio: %lf, area: %lf \n", raio, area);


	return 0;

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */
    /*
     em Project -> Properties ->
     */
}



/*
digite valor de raio:
4
raio: 4.000000, area: 50.240000


*/
