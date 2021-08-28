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
   time_t tempobruto;
   struct tm *info;

   time(&tempobruto);

   info = localtime(&tempobruto);
   printf("data e hora locais: %s\n", asctime(info));

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
data e hora locais: Sat Aug 28 13:17:43 2021
















*/

