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


funções exponenciais e logaritmicas
exp()



*/


int main() {

   double a = 0;
   double b = 1;
   double c = 2;

   // numero neperiano
   printf("o exponencial de %lf é %lf\n", a, exp(a));  // numero e elevado a 0
   printf("o exponencial de %lf é %lf\n", b, exp(b));
   printf("o exponencial de %lf é %lf\n", c, exp(c));



   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*











*/

