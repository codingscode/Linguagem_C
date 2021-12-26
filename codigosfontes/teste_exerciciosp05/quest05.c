#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/


int main() {

   int soma = 0, valor;

   for (int i = 0; i < 10; i++) {
      printf("valor %dº numero:\n", i+1);
      scanf("%d", &valor);
      soma += valor;
   }

   printf("soma: %d\n", soma);

   return 0;
}


/*
valor 1º numero:
1
valor 2º numero:
2
valor 3º numero:
3
valor 4º numero:
4
valor 5º numero:
5
valor 6º numero:
6
valor 7º numero:
7
valor 8º numero:
8
valor 9º numero:
9
valor 10º numero:
10
soma: 55



*/

