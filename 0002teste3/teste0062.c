#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
29
54
3
54
7
49

2ºvez:
29
54
3
54
7
49








*/

