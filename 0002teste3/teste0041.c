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
   // ou struct st_aluno alunos[3];

   for (int i = 0; i < 3; i++) {
      printf("informe o nome do contato:\n");
      fgets(agenda.contatos[i].nome, 100, stdin);

      printf("informe o ano de nascimento do contato:\n");
      scanf("%d", &agenda.contatos[i].ano_nascimento);
      getchar();  // evita problema scanf e fgets

      printf("informe o telefone do contato:\n");
      fgets(agenda.contatos[i].telefone, 20, stdin);

      printf("informe o email do contato:\n");
      fgets(agenda.contatos[i].email, 100, stdin);

   }

   for (int i = 0; i < 3; i++) {
      printf("\n========== dados do contato %d ==============\n", i + 1);
      printf("nome: %s\n", agenda.contatos[i].nome);
      printf("ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
      printf("telefone: %s\n", agenda.contatos[i].telefone);
      printf("email: %s\n", agenda.contatos[i].email);

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
chico lopes
informe o ano de nascimento do contato:
1984
informe o telefone do contato:
76218429
informe o email do contato:
chico@gmail.com
informe o nome do contato:
simon
informe o ano de nascimento do contato:
2005
informe o telefone do contato:
98981111
informe o email do contato:
simon@outlook.com
informe o nome do contato:
raimunda
informe o ano de nascimento do contato:
2000
informe o telefone do contato:
81810000
informe o email do contato:
munda@gmail.com

========== dados do contato 1 ==============
nome: chico lopes

ano de nascimento: 1984
telefone: 76218429

email: chico@gmail.com


========== dados do contato 2 ==============
nome: simon

ano de nascimento: 2005
telefone: 98981111

email: simon@outlook.com


========== dados do contato 3 ==============
nome: raimunda

ano de nascimento: 2000
telefone: 81810000

email: munda@gmail.com









*/

