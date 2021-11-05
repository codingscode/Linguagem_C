#include <stdio.h>


/*
matrizes parte 1


array multi-dimensional

char array[3][4]

*/


int main() {
   char nome[3][50];

   for (int i = 0; i < 3; i++) {
      printf("qual seu nome?\n");
      gets(nome[i]);
   }

   printf("\n");

   for (int i=0; i < 3; i++) {
      printf("Olá %s \n", nome[i]);
   }

   printf("\n");

   char cores[3][12] = {"azul", "verde", "vermelho"};

   for (int i = 0; i < 3; i++) {
      printf("cor %d: %s\n", i+1, cores[i]);
   }

   return 0;
}





/*
qual seu nome?
samuel
qual seu nome?
israel
qual seu nome?
deborah

Olá samuel
Olá israel
Olá deborah

cor 1: azul
cor 2: verde
cor 3: vermelho






*/



