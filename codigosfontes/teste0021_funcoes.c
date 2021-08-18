#include <stdio.h>

/*
prototipo de função


*/

int somar(int n1, int n2);

int main() {
   int numero1 = 2, numero2 = 3, retorno;

   retorno = somar(numero1, numero2);

   printf("soma de %d com %d é % d. \n", numero1, numero2, retorno);

   return 0;
}

int somar(int n1, int n2) {
   return n1 + n2;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
soma de 2 com 3 é  5.





*/

