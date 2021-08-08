#include <stdio.h>
#include <string.h>




int main() {
   int segtotal, horas, minutos, segundos;

   printf("digite o segundos totais:\n");
   scanf("%d", &segtotal);
   horas = segtotal/360;
   minutos = (segtotal % 360)/60;
   segundos = (segtotal % 360) % 60;

   printf("total segundos: %d\n", segtotal);
   printf("horas: %d, minutos: %d, segundos: %d", horas, minutos, segundos);

   return 0;

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */

}




/*
digite o segundos totais:
784
total segundos: 784
horas: 2, minutos: 1, segundos: 4

*/
