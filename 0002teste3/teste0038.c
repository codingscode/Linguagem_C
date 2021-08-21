#include <stdio.h>
#include <string.h>



/*


*/


struct st_aluno {
   char matricula[10];
   char nome[100];
   char curso[50];
   int ano_nascimento;
};


int main() {
   struct st_aluno aluno1;

   printf("informe a matrícula do aluno:\n");
   fgets(aluno1.matricula, 10, stdin);

   printf("informe o nome do aluno:\n");
   fgets(aluno1.nome, 100, stdin);

   printf("informe o curso do aluno:\n");
   fgets(aluno1.curso, 50, stdin);

   printf("informe o ano nascimento do aluno:\n");
   scanf("%d", &aluno1.ano_nascimento);

   printf("\n========== dados do aluno ==============\n");
   printf("matricula: %s\n", aluno1.matricula);
   printf("nome: %s\n", aluno1.nome);
   printf("curso: %s\n", aluno1.curso);
   printf("ano nascimento: %d\n", aluno1.ano_nascimento);

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
informe a matrícula do aluno:
123124
informe o nome do aluno:
vicente goodman
informe o curso do aluno:
computação
informe o ano nascimento do aluno:
1999

========== dados do aluno ==============
matricula: 123124

nome: vicente goodman

curso: computação

ano nascimento: 1999





*/

