#include <stdio.h>


/*


*/

int main() {


   FILE *arquivo;
   char nome[10], *resultado;

   arquivo = fopen("teste0033_arquivo.txt", "r");

   if (arquivo) {
      while (!feof(arquivo)) {  // feof -> file end of file
         resultado = fgets(nome, 10, arquivo);
         printf("1.resultado: %d\n", resultado);
         if (resultado) {
        	 printf("(%s)\n", nome);
         }
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
1.resultado: -832837474
(era um, e)
1.resultado: -832837474
(ra dois, )
1.resultado: -832837474
(era três)
1.resultado: -832837474
(
)
1.resultado: -832837474
(a rua de )
1.resultado: -832837474
(pedra do )
1.resultado: -832837474
(centro é)
1.resultado: -832837474
( bonita
)
1.resultado: -832837474
(cabeça l)
1.resultado: -832837474
(ivre
)
1.resultado: -832837474
(8
)
1.resultado: -832837474
(
)
1.resultado: 0







*/

