#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/

int verdadeiro(int numero) {
   char stringnumero[4];
   int doisdigacima, doisdigabaixo;


   sprintf(stringnumero, "%d", numero);

   doisdigacima = ((int) stringnumero[0] - 48)*10 + ((int) stringnumero[1] - 48);
   doisdigabaixo = ((int) stringnumero[2] - 48)*10 + ((int) stringnumero[3] - 48);

   //printf("doisdigacima : %d\n", doisdigacima);
   //printf("doisdigabaixo: %d\n", doisdigabaixo);

   if (numero == pow(doisdigacima + doisdigabaixo, 2)) {
      return 1;
   }
   else {
      return 0;
   }

}


int main() {

   int n1 = 1000, n2 = 9999;
   char valor[4];

   // converte int para string
   //sprintf(valor, "%d", 1472);

   //printf("%s.\n", valor); // 1472
   //printf("%c.\n", valor[0]); // 1
   //printf("%c.\n", valor[1]); // 4
   //printf("%c.\n", valor[2]); // 7
   //printf("%c.\n", valor[3]); // 2

   printf("%d\n", verdadeiro(1356)); // teste com outro número

   for (int i = n1 + 1; i <= n2; i++) {
      if(verdadeiro(i)) {
         printf("%d -> ", i);
      }
   }


   printf("\nfim\n");

   return 0;
}


/*
0
2025 -> 3025 -> 9801 ->
fim





*/

