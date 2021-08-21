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
} alunos[3];


int main() {
   // ou struct st_aluno alunos[3];

   for (int i = 0; i < 3; i++) {
      printf("informe a matrícula do aluno:\n");
      fgets(alunos[i].matricula, 10, stdin);

      printf("informe o nome do aluno:\n");
      fgets(alunos[i].nome, 100, stdin);

      printf("informe o curso do aluno:\n");
      fgets(alunos[i].curso, 50, stdin);

      printf("informe o ano nascimento do aluno:\n");
      scanf("%d", &alunos[i].ano_nascimento);
      getchar();  // evita problema scanf e fgets
   }

   for (int i = 0; i < 3; i++) {
      printf("\n========== dados do aluno %d ==============\n", i + 1);
      printf("matricula: %s\n", alunos[i].matricula);
      printf("nome: %s\n", alunos[i].nome);
      printf("curso: %s\n", alunos[i].curso);
      printf("ano nascimento: %d\n", alunos[i].ano_nascimento);

   }

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
informe a matrícula do aluno:
6413
informe o nome do aluno:
vicente gomes
informe o curso do aluno:
computação
informe o ano nascimento do aluno:
2001
informe a matrícula do aluno:
98527
informe o nome do aluno:
simon ambuquerque
informe o curso do aluno:
desenho
informe o ano nascimento do aluno:
2003
informe a matrícula do aluno:
65132
informe o nome do aluno:
silas silvas
informe o curso do aluno:
eletronica
informe o ano nascimento do aluno:
2002

========== dados do aluno 1 ==============
matricula: 6413

nome: vicente gomes

curso: computação

ano nascimento: 2001

========== dados do aluno 2 ==============
matricula: 98527

nome: simon ambuquerque

curso: desenho

ano nascimento: 2003

========== dados do aluno 3 ==============
matricula: 65132

nome: silas silvas

curso: eletronica

ano nascimento: 2002








*/

