#include <stdio.h>


/*


*/

int main() {

   FILE *arquivo;
   int numero, resultado, soma = 0;

   arquivo = fopen("teste0033_arquivo.txt", "r");

   if (arquivo) {
      while(!feof(arquivo)) {
	     fscanf(arquivo, "%d", &numero);
	     soma += numero;
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
a soma é 91




obs: a quantidade de linhas vazias com quebra no final do arquivo repete mais uma vez a última linha preenchida.


*/

