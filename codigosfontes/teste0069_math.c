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


funções hiperbolicas
cosh()
sinh()
tanh()



*/


int main() {
   float angulo = 3.141592/4;  // em radianos. em graus é 45°
   float coseno1h = cosh(angulo);
   float seno1h = sinh(angulo);
   float tangente1h = tanh(angulo);


   printf("o coseno hiperbolico de %.2f é %f\n", angulo, coseno1h);
   printf("o seno hiperbolico de %.2f é %f\n", angulo, seno1h);
   printf("a tangente hiperbolico de %.2f é %f\n", angulo, tangente1h);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
o coseno hiperbolico de 0.79 é 1.324609
o seno hiperbolico de 0.79 é 0.868671
a tangente hiperbolico de 0.79 é 0.655794










*/

