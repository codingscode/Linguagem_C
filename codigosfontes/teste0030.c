#include <stdio.h>


/*




*/



int main() {
   // fopen(nome_do_arquivo, forma_de_abertura)
   /*
	w -> abrir o arquivo para escrita (se ele já existir, seu conteudo será sobrescrito)
	r -> abrir o arquivo para leitura
	wa -> abrir o arquivo e acrescenta conteudo.
   */

   FILE *arquivo;
   char c;

   arquivo = fopen("teste0030_arquivo.txt", "r");

   if (arquivo) {
      while ((c = getc(arquivo)) != EOF) {  // EOF -> end of file
         printf("%c", c);
      }
   }
   else {
      printf("não achei o arquivo\n");
   }


   fclose(arquivo);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
aladin
mel
apollo

jepeto












*/

