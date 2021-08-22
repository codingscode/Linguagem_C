#include <stdio.h>
#include <string.h>


/*
union -> a union, separa e utiliza apenas o espaço da maior variavel.

*/

union numeros {
   int num1, num2, num3, num4, num5;
}n;


int main() {
   n.num1 = 6;
   printf("valor de num1 é %d\n", n.num1);
   n.num2 = 8;
   printf("valor de num2 é %d\n", n.num2);
   n.num3 = 3;
   printf("valor de num3 é %d\n", n.num3);
   n.num4 = 1;
   printf("valor de num4 é %d\n", n.num4);
   n.num5 = 5;
   printf("valor de num5 é %d\n\n\n", n.num5);

   printf("valor de num1 é %d\n", n.num1);
   printf("valor de num2 é %d\n", n.num2);
   printf("valor de num3 é %d\n", n.num3);
   printf("valor de num4 é %d\n", n.num4);
   printf("valor de num5 é %d\n\n", n.num5);

   printf("o 'n' ocupa %ld bytes\n", sizeof(n));

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor de num1 é 6
valor de num2 é 8
valor de num3 é 3
valor de num4 é 1
valor de num5 é 5


valor de num1 é 5
valor de num2 é 5
valor de num3 é 5
valor de num4 é 5
valor de num5 é 5

o 'n' ocupa 4 bytes






*/

