#include <stdio.h>
#include <string.h>



/*
structs -> estrutura

*/

struct st_contato {
   char nome[100];
   int ano_nascimento;
   char telefone[20];
   char email[100];
};

struct st_agenda {
   struct st_contato contatos[100];
} agenda;


int main() {

   for (int i = 0; i < 2; i++) {
      printf("informe o nome do contato:\n");
      fgets(agenda.contatos[i].nome, 100, stdin);

      printf("informe o ano de nascimento do contato:\n");
      scanf("%d", &agenda.contatos[i].ano_nascimento);
      getchar();  // evita problema scanf e fgets

      printf("informe o telefone do contato:\n");
      fgets(agenda.contatos[i].telefone, 20, stdin);

      printf("informe o email do contato:\n");
      fgets(agenda.contatos[i].email, 100, stdin);
      printf("\n");
   }

   for (int i = 0; i < 2; i++) {
      printf("\n========== dados do contato %d ==============\n", i + 1);
      printf("nome: %s\n", strtok(agenda.contatos[i].nome, "\n") );
      printf("ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento );
      printf("telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n") );
      printf("email: %s\n", strtok(agenda.contatos[i].email, "\n") );

   }

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
informe o nome do contato:
maria sales
informe o ano de nascimento do contato:
1990
informe o telefone do contato:
32323232
informe o email do contato:
maria@gmail.com
informe o nome do contato:
bob allan
informe o ano de nascimento do contato:
2001
informe o telefone do contato:
21212121
informe o email do contato:
bob21@gmail.com

========== dados do contato 1 ==============
nome: maria sales
ano de nascimento: 1990
telefone: 32323232
email: maria@gmail.com

========== dados do contato 2 ==============
nome: bob allan
ano de nascimento: 2001
telefone: 21212121
email: bob21@gmail.com









*/

