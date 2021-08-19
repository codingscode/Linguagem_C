#include <stdio.h>


/*
int = 4 bytes

0000 000 000 0001

*/



int main() {
   int numeros[5] = { 7, 8, 9, 10, 11 };

   for (int i = 0; i < 5; i++) {
      printf("o tamanho de %d é %ld bytes. seu endereço é %p . \n", numeros[i], sizeof(numeros[i]), &(numeros[i]));
   }

   printf("o array numeros possui %ld bytes .\n", sizeof(numeros)); // 5*4 = 20

   printf("*(numeros) vale %d e endereço de memoria é %p.\n", *(numeros), *(numeros));  // numeros[0]
   printf("*(numeros+1) vale %d e endereço de memoria é %p.\n", *(numeros+1), *(numeros+1));  // numeros[1]
   printf("*(numeros+2) vale %d e endereço de memoria é %p.\n", *(numeros+2), *(numeros+2));  // numeros[2]

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
o tamanho de 7 é 4 bytes. seu endereço é 0x7ffc5ebb85e0 .
o tamanho de 8 é 4 bytes. seu endereço é 0x7ffc5ebb85e4 .
o tamanho de 9 é 4 bytes. seu endereço é 0x7ffc5ebb85e8 .
o tamanho de 10 é 4 bytes. seu endereço é 0x7ffc5ebb85ec .
o tamanho de 11 é 4 bytes. seu endereço é 0x7ffc5ebb85f0 .
o array numeros possui 20 bytes .
*(numeros) vale 7 e endereço de memoria é 0x7.
*(numeros+1) vale 8 e endereço de memoria é 0x8.
*(numeros+2) vale 9 e endereço de memoria é 0x9.











*/

