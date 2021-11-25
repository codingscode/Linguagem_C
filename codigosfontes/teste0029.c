#include <stdio.h>


/*
int = 4 bytes

0000 000 000 0001

*/



int main() {
   int numeros[5] = { 10, 2, 15, 80, 1 };

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
o tamanho de 10 é 4 bytes. seu endereço é 0x7fff50c02100 .
o tamanho de 2 é 4 bytes. seu endereço é 0x7fff50c02104 .
o tamanho de 15 é 4 bytes. seu endereço é 0x7fff50c02108 .
o tamanho de 80 é 4 bytes. seu endereço é 0x7fff50c0210c .
o tamanho de 1 é 4 bytes. seu endereço é 0x7fff50c02110 .
o array numeros possui 20 bytes .
*(numeros) vale 10 e endereço de memoria é 0xa.
*(numeros+1) vale 2 e endereço de memoria é 0x2.
*(numeros+2) vale 15 e endereço de memoria é 0xf.



*/

