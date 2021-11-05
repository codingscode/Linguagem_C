#include <stdio.h>

/*
decimal  |  binario
-----------------------
0        |  00000
1        |  00001
2        |  00010   *
3        |  00011
4        |  00100
5        |  00101
6        |  00110
7        |  00111
8        |  01000
9        |  01001
10       |  01010

*/


int main() {
   int valor = 2;
   printf("valor decimal: %d\n", valor);

   // deslocamento 2 bits para direita
   valor = valor >> 2;
   printf("valor decimal: %d\n", valor);

   valor = 2;
   // deslocamento de 2 bits para esquerda
   valor = valor << 2;
   printf("valor decimal: %d\n", valor);

   valor = 2;
   //
   valor = ~valor;
   printf("valor decimal: %d\n", valor);


   return 0;
}


/*


*/

/*
valor decimal: 2
valor decimal: 0
valor decimal: 8
valor decimal: -3







*/



