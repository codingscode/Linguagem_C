#include <stdio.h>
#include <time.h>



/*
funções de data e hora

clock() -> retorna o número de pulsos de clock decorrido desde que o programa foi lançado




*/




int main() {
   long int clock_t, inicio_t, fim_t, total_t;

   inicio_t = clock();
   printf("iniciando o programa, inicio_t: %ld\n", inicio_t);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
iniciando o programa, inicio_t: 444620














*/

