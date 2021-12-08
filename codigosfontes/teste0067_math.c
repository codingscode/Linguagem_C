#include <stdio.h>
#include <math.h>



/*
obs: para utilizar a biblioteca math
1) clicar com o botão direito no mouse no projeto_c
2) ir em c/c++ Build -> settings -> libraries
3) clicar no + e add 'm'
4) aplicar e fechar


funções matemáticas


funções trigonométricas
cos()
sin()


*/


int main() {
   float angulo = 1.2;  // em radianos
   float cosseno1 = cos(angulo);
   float seno1 = sin(angulo);


   printf("o cosseno de %.2f é %f\n", angulo, cosseno1);
   printf("o seno de %.2f é %f\n", angulo, seno1);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
o cosseno de 1.20 é 0.362358
o seno de 1.20 é 0.932039







*/

