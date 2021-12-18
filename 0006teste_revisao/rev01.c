#include <stdio.h>
#include <time.h>


/*
funções de data e hora

clock() -> retorna o número de pulsos de clock decorrido desde que o programa foi lançado


*/


int main() {
   long int clock_t, inicio_t, fim_t;
   double total_t;

   inicio_t = clock();
   printf("Realizar um loop grande, inicio_t : %ld\n", inicio_t);
   for (int i = 0; i <=100000000; i++) {}

   fim_t = clock();
   printf("fim do loop grande, fim_t: %ld\n", fim_t);

   total_t = (double)((double) fim_t - (double) inicio_t)/((double) CLOCKS_PER_SEC);

   printf("clocks por segundo: %ld\n", CLOCKS_PER_SEC);

   printf("tempo total usado pelo CPU: %lf\n", total_t);
   printf("finalizando o programa.\n");


   return 0;
}


/*
Realizar um loop grande, inicio_t : 451370
fim do loop grande, fim_t: 643357
clocks por segundo: 1000000
tempo total usado pelo CPU: 0.191987
finalizando o programa.






*/

