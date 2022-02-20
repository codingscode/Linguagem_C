#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*



*/



int main() {
   // notas 100, 50, 20, 10, 5, 2, 1
   int valor_sacar;

   printf("valor a sacar: \n");
   scanf("%d", &valor_sacar);

   int n100, n50, n20, n10, n5, n2, n1;

   n100 = valor_sacar/100;
   valor_sacar = valor_sacar - n100*100;

   n50 = valor_sacar/50;
   valor_sacar = valor_sacar - n50*50;

   n20 = valor_sacar/20;
   valor_sacar = valor_sacar - n20*20;

   n10 = valor_sacar/10;
   valor_sacar = valor_sacar - n10*10;

   n5 = valor_sacar/50;
   valor_sacar = valor_sacar - n5*5;

   n2 = valor_sacar/2;
   valor_sacar = valor_sacar - n2*2;

   n1 = valor_sacar/1;
   valor_sacar = valor_sacar - n1*1;

   int nnotas = n100 + n50 + n20 + n10 + n5 + n2 + n1;

   /*

   */
   printf("notas de 100: %d\n", n100);
   printf("notas de  50: %d\n", n50);
   printf("notas de  20: %d\n", n20);
   printf("notas de  10: %d\n", n10);
   printf("notas de   5: %d\n", n5);
   printf("notas de   2: %d\n", n2);
   printf("notas de   1: %d\n", n1);
   printf("total de notas: %d\n", nnotas);
   printf("fim do programa.\n");

   return 0;
}


/*
valor a sacar:
123
notas de 100: 1
notas de  50: 0
notas de  20: 1
notas de  10: 0
notas de   5: 0
notas de   2: 1
notas de   1: 1
total de notas: 4
fim do programa.







*/

