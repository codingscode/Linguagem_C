#include <stdio.h>




int main() {
   int numero, soma = 0;

   printf("numero: %d\n", numero);

   do {
      printf("digite um número diferente de 0:\n");
	  scanf("%d", &numero);

	  soma += numero;
   } while (numero != 0);

   printf("soma: %d", soma);


   return 0;
}



/*
numero: -107410656
digite um número diferente de 0:
1
digite um número diferente de 0:
2
digite um número diferente de 0:
3
digite um número diferente de 0:
0
soma: 6




*/










/*


*/
