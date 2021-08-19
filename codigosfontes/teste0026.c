#include <stdio.h>


/*




*/



int main() {
   int numero;

   printf("informe um número:\n");
   scanf("%d", &numero);

   printf("o número informado foi %d. \n", numero);
   printf("o endereço de número é : %x.\n", &numero);




   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
informe um número:
3
o número informado foi 3.
o endereço de número é : 8f98b0d4.





*/

