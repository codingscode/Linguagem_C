#include <stdio.h>
#include <string.h>


/*
union -> a union, separa e utiliza apenas o espaço da maior variavel.

*/


union pessoa{
   char nome[100];  // 100bytes  100 caracteres
   int idade;  // 4 bytes
};



int main() {

   union pessoa pes;
   strcpy(pes.nome, "bob allan");
   printf("dados de %s\n", pes.nome);

   pes.idade = 39;
   printf("ele tem %d anos.\n", pes.idade);

   printf("a variavel 'pes' ocupa %ld bytes.\n", sizeof(pes));


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
dados de bob allan
ele tem 39 anos.
a variavel 'pes' ocupa 100 bytes.







*/

