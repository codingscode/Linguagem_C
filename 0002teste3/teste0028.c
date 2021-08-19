#include <stdio.h>


/*




*/



int main() {
   int numero;
   int* ponteiro;

   printf("informe um número:\n");
   scanf("%d", &numero);

   // inicializando ponteiro
   ponteiro = &numero;

   printf("o número informado foi %d. \n", numero);
   printf("o endereço de número é : %d.\n", &numero);
   printf("o endereço de número é : %x.\n", &numero);

   printf("endereço do ponteiro %p \n", ponteiro);  // endereço real hexadecimal


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
informe um número:
5
o número informado foi 5.
o endereço de número é : -199243828.
o endereço de número é : f41fc7cc.
endereço do ponteiro 0x7ffcf41fc7cc





*/

