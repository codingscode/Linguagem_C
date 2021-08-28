#include <stdio.h>
#include <time.h>



/*
funções de data e hora

clock() -> retorna o número de pulsos de clock decorrido desde que o programa foi lançado
time() -> retorna o tempo atual do calendário
localtime() -> converte o valor time para uma hora local


https://pt.wikipedia.org/wiki/Era_Unix


*/




int main() {
   time_t segundos;  // testar descansar o curso em cima de time_t

   segundos = time(NULL);
   printf("horas desde de 01/01/1970: %ld\n", segundos/3600);

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
horas desde de 01/01/1970: 452824














*/

