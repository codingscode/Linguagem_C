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
div() -> divisão inteira



*/





int main() {
   div_t saida;  // descansar o cursor em cima de div_t

   saida = div(27, 4);  //  27/4
   printf("quociente de 27/4 : %d\n", saida.quot);
   printf("resto de 27/4 : %d\n", saida.rem);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
quociente de 27/4 : 6
resto de 27/4 : 3










*/

