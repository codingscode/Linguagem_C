#include <stdio.h>
#include <string.h>


/*
union -> a union, separa e utiliza apenas o espaço da maior variavel.

*/

union numeros {
   int num1, num2, num3, num4, num5;
}n;


int main() {
   int soma = 0; // 4 bytes

   n.num1 = 6;
   soma += n.num1;
   printf("valor de num1 é %d\n", n.num1);

   n.num2 = 8;
   soma += n.num2;
   printf("valor de num2 é %d\n", n.num2);

   n.num3 = 3;
   soma += n.num3;
   printf("valor de num3 é %d\n", n.num3);

   n.num4 = 1;
   soma += n.num4;
   printf("valor de num4 é %d\n", n.num4);

   n.num5 = 5;
   soma += n.num5;
   printf("valor de num5 é %d\n\n\n", n.num5);


   printf("valor de num1 é %d\n", n.num1);
   printf("valor de num2 é %d\n", n.num2);
   printf("valor de num3 é %d\n", n.num3);
   printf("valor de num4 é %d\n", n.num4);
   printf("valor de num5 é %d\n\n", n.num5);

   printf("o 'n' ocupa %ld bytes\n", sizeof(n));
   printf("a 'soma' valor %d, e ocupa %ld bytes\n", soma, sizeof(soma));
   printf("memória total ocupada: %ld bytes.\n", sizeof(n) + sizeof(soma));

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
a 'soma' valor 23, e ocupa 4 bytes
memória total ocupada: 8 bytes.







*/

