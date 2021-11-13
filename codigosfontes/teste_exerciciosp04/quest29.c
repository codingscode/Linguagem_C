#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main() {

   srand(time(0));

   int a, b, soma, acertos = 0, resposta;



   for (int i = 0; i < 5; i++) {
      a = rand() % 100 + 1; // aleatório entre 1 e 100
      b = rand() % 100 + 1;
      soma = a + b;
      printf("%d + %d = ?\n", a, b);
      scanf("%d", &resposta);
      if (resposta == soma) {
         acertos += 1;
      }
      printf("resposta: %d\n\n", soma);
   }

   printf("acertos: %d\n", acertos);



   /*
   int numero = rand() % 10 + 1; // 1 até 9
   printf("numero fora: %d\n", numero);

   while (numero != 0) {
      numero = rand() % 10 + 1; // 1 até 9
      printf("numero: %d\n", numero);
   }

   */

   printf("fim\n");
   return 0;
}



/*
99 + 75 = ?
174
resposta: 174

72 + 70 = ?
142
resposta: 142

5 + 75 = ?
80
resposta: 80

73 + 91 = ?
10
resposta: 164

26 + 46 = ?
14
resposta: 72

acertos: 3
fim



*/

