#include <stdio.h>
#include <string.h>



/*
structs -> estrutura

*/


struct st_aluno {
   char matricula[10];
   char nome[100];
   char curso[50];
   int ano_nascimento;
} aluno1, aluno2, aluno3;


int main() {


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
324234
informe o nome do aluno:
bob stwart
informe o curso do aluno:
desenho comics
informe o ano nascimento do aluno:
2001

========== dados do aluno ==============
matricula: 324234

nome: bob stwart

curso: desenho comics

ano nascimento: 2001








*/

