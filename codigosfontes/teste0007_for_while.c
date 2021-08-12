#include <stdio.h>




int main() {
   int numero, quantidade, soma = 0;

   printf("diga a quantidade de números:\n");
   scanf("%d", &quantidade);

   for (int i=0; i < quantidade; i++) {
	   printf("digite o %dº elemento:\n", i + 1);
	   scanf("%d", &numero);
	   soma += numero;
   }

   printf("soma: %d", soma);


   return 0;
}



/*
 no terminal do arquivo usar:
     gcc quest04.c -o saida.o -lm
     ./saida.o
*/

/*
diga a quantidade de números:
3
digite o 1º elemento:
1
digite o 2º elemento:
2
digite o 3º elemento:
3
soma: 6





*/

