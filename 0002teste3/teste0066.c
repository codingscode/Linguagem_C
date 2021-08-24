#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
conversão de strings
atof() -> convert string para double
atoi() -> converte uma string para inteiro
atol() -> converte string para inteliro longo



geração de sequencia pseudo-aleatoria
rand()    -> gera numero aleatorio
srand()   -> inicializa o gerador de numeros aleatorios


gerenciamento de memória dinamica
malloc() -> aloca memoria
calloc() -> mesmo do de cima, mas ele limpa o lixo
free()   -> libera memória
realoc() -> realoca memoria, altera o tamanho de memoria ocupado


pesquisa e ordenação
qsort() -> ordena os elementos de uma array


aritmética de inteiros
abs() valor absoluto




*/





int main() {
   int valor_a, valor_b;

   valor_a = abs(6);
   printf("valor absoluto de 6 é %d.\n", valor_a);

   valor_b = abs(valor_b);
   printf("valor absoluto de -10 é %d.\n", valor_b);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor absoluto de 6 é 6.
valor absoluto de -10 é 10.










*/

