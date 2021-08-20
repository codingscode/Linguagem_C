#include <stdio.h>


/*


*/

int main() {


   FILE *arquivo;
   char nome[10], *resultado;

   arquivo = fopen("teste0031_arquivo.txt", "r");

   if (arquivo) {
      while (!feof(arquivo)) {  // feof -> file end of file
         fgets(nome, 10, arquivo);
         printf("(%s)", nome);
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
(era um, e)(ra dois, )(era três)(
)(a rua de )(pedra do )(centro é)( bonita
)(cabeça l)(ivre
)(8
)(
)(
)





*/

