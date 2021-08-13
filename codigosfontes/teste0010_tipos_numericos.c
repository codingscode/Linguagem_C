#include <stdio.h>

/*
inteiro: -> %d
float: -> %f, %.2f
double: -> %lf
char: -> %c
string: -> %s
ponteiro: -> %x



 */


int main() {
   int valor1, valor2, divisao;

   valor1 = 15;
   valor2 = 6;
   divisao = valor1 / valor2;

   printf("valor1: %d\n", valor1);
   printf("valor1: %d\n", valor2);
   printf("divisao: %d\n", divisao);


   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor1: 15
valor1: 6
divisao: 2






*/

