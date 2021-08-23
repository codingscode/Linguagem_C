#include <stdio.h>


/*
stdio.h

funções de entrada e saída



acesso a arquivos:
fclose()
fflush()  -> limpa buffer (corrige bug no windows + c)
fopen()

entradas e saidas formatadas
fscanf()
printf()
scanf()

entradas e saídas de caracteres
gets()
fputs()
getchar()
fgets()


tratamentos de erros
feof()

tipos e macros
FILE
EOF
NULL





*/



int main() {
   int num1, num2, soma = 0;

   printf("informe num1:\n");
   fflush(stdout);  // para windows
   scanf("%d", &num1);

   printf("informe num2:\n");
   fflush(stdout);
   scanf("%d", &num2);




   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*








*/

