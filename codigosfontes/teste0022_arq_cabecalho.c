#include <stdio.h>
#include "teste0022.h"

/*
arquivos de cabeçalho


*/



int main() {
   int numero1, numero2, ret_soma, ret_mult;

   mensagem();

   printf("digite um valor para numero1: \n");
   scanf("%d", &numero1);

   printf("digite um valor para numero2: \n");
   scanf("%d", &numero2);

   ret_soma = soma(numero1, numero2);
   printf("a soma de %d com %d é %d \n", numero1, numero2, ret_soma);

   ret_mult = multiplicacao(numero1, numero2);
   printf("a multiplicação de %d com %d é %d \n", numero1, numero2, ret_mult);



   return 0;
}





/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
Isto é uma mensagem...
digite um valor para numero1:
4
digite um valor para numero2:
6
a soma de 4 com 6 é 10
a multiplicação de 4 com 6 é 24





*/

