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

   // gerar um alfabeto completo com um loop
   for (int i = 97; i <= 122; i++) {
      printf("%c ", i);
   }

   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
escolha uma opção:
a - extrato da conta.
b - saldo da conta.
c - limite da conta.
c
seu limite é ...
a b c d e f g h i j k l m n o p q r s t u v w x y z





*/

