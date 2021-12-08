#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/*
conversão de strings
atof() -> convert string para double
atoi() -> converte uma string para inteiro
atol() -> converte string para inteliro longo



geração de sequencia pseudo-aleatoria
rand()    -> gera numero aleatorio
srand()   -> inicializa o gerador de numeros aleatorios



*/



int main() {
   time_t t;

   // inicializar o gerador
   srand((unsigned) time(&t));

   // gerar 6 numeros entre 0 e 60
   for (int i=0; i < 6; i++) {
      printf("%d\n", rand() % 61);
   }

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
1ª vez:
54
38
36
23
17
11

2ºvez:
8
25
28
33
17
47





são diferentes


*/

