#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



void imprimir(int tam, char* fonte) {
   int valores[tam];
   int soma = 0;

   for (int i = 0; i < tam; i++) {
      valores[i] = fonte[i] - 48;
      printf("+ %d ", valores[i]);
      soma += valores[i];
   }

   printf(":\nsoma: %d\n", soma);

}


int main() {

   int numero;
   char* minha_string;

   printf("digite um número positivo:\n");
   scanf("%d", &numero);

   if (numero > 0) {

      sprintf(minha_string, "%d", numero);
      int comprimento = strlen(minha_string);

      printf("minha_string: %s \n", minha_string);
      printf("minha_string comprimento: %d \n", comprimento);

      imprimir(comprimento, minha_string);

   }
   else {
      printf("valor inválido.");
   }

   printf("\nfim\n");
   return 0;
}



/*
 no terminal do arquivo usar:
     gcc quest04.c -o saida.o -lm
     ./saida.o
*/

/*
digite um número positivo:
8263
minha_string: 8263
minha_string comprimento: 4
+ 8 + 2 + 6 + 3 :
soma: 19

fim





*/

