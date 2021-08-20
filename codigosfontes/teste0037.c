#include <stdio.h>


/*


*/

int main() {

   FILE *arquivo;
   char fruta[10];

   arquivo = fopen("teste0037_frutas.txt", "a");  //

   if (arquivo) {
      printf("Informe uma fruta, ou 0 para sair:\n");
	  fgets(fruta, 10, stdin);
	  while (fruta[0] != '0') {
	     fputs(fruta, arquivo);
	     printf("informe uma fruta, ou 0 para sair:\n");
	     fgets(fruta, 10, stdin);
	  }
   }
   else {
	  printf("não foi possível criar o arquivo.");
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
Informe uma fruta, ou 0 para sair:
jaca
informe uma fruta, ou 0 para sair:
manga
informe uma fruta, ou 0 para sair:
pera
informe uma fruta, ou 0 para sair:
0




*/

