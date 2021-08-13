#include <stdio.h>

/*
tipos alfanumericos:
- caractere: 'a'
- string*: "asfdhadsfh12"


na linguagem c não existe o tipo string


 */


int main() {
   char opcao;

   printf("escolha uma opção:\n");
   printf("a - extrato da conta.\n");
   printf("b - saldo da conta.\n");
   printf("c - limite da conta.\n");
   scanf("%c", &opcao);

   if (opcao == 'a') {
      printf("seu extrato é ...\n");
   }
   else if (opcao == 'b') {
      printf("seu saldo é ...\n");
   }
   else if (opcao == 'c') {
      printf("seu limite é ...\n");
   }
   else {
      printf("opção desconhecida.\n");
   }


   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor1: 15
valor1: 6
divisao: 2






*/

