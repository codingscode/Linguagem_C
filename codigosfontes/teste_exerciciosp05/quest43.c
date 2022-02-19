#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <time.h>


/*


*/




int main() {

   int idades[] = {};
   int vezent = 0, soma = 0;
   int idade = 1;


   while (idade > 0) {
      printf("digite um valor de idade :\n");
	  scanf("%d", &idade);

	  if (idade > 0) {
		 idades[vezent] = idade;
		 soma += idade;
		 vezent += 1;
	  }
	  else {
         printf("valor inválido. Fim do programa.\n");
	  }

   }

   printf("\n");

   for (int i = 0; i < vezent; i++) {
      printf("%dª idade: %d \n", i+1, idades[i]);
   }

   printf("média: %.2f \n", (float) soma/vezent);


   return 0;
}


/*
digite um valor de idade :
19
digite um valor de idade :
30
digite um valor de idade :
28
digite um valor de idade :
23
digite um valor de idade :
-3
valor inválido. Fim do programa.

1ª idade: 19
2ª idade: 30
3ª idade: 28
4ª idade: 23
*** stack smashing detected ***: terminated
média: 25.00




*/

