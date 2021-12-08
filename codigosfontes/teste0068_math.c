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
tan()


*/


int main() {
   float angulo = 3.141592/4;  // em radianos. em graus é 45°
   float cosseno1 = cos(angulo);
   float seno1 = sin(angulo);
   float tangente1 = tan(angulo);


   printf("o coseno de %.2f é %f\n", angulo, cosseno1);
   printf("o seno de %.2f é %f\n", angulo, seno1);
   printf("a tangente de %.2f é %f\n", angulo, tangente1);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
o cosseno de 0.79 é 0.707107
o seno de 0.79 é 0.707107
a tangente de 0.79 é 1.000000








*/

