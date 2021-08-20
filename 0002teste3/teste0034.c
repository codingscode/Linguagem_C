#include <stdio.h>


/*


*/

int main() {

   FILE *arquivo;
   int numero, resultado, soma = 0;

   arquivo = fopen("teste0034_arquivo.txt", "r");

   if (arquivo) {
      while(!feof(arquivo)) {
	     resultado = fscanf(arquivo, "%d", &numero);
	     printf("resultado: %d\n", resultado);
	     if (resultado == 1) { // só efetua soma se encontrar número
	        soma += numero;
	     }
      }
   }
   else {
      printf("arquivo não encontrado.\n");
   }

   printf("a soma é %d\n", soma);
   fclose(arquivo);

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
resultado: 1
resultado: 1
resultado: 1
resultado: 1
resultado: 1
resultado: -1
a soma é 83





obs: agora bateu.


*/

