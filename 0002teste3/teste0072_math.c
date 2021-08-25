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
log()
log10()


*/


int main() {

   double a = 0;
   double b = 1;
   double c = 2;

   // numero neperiano
   printf("o logaritmo natural de %.2lf é %.3lf\n", a, log(a));  //
   printf("o logaritmo natural de %.2lf é %.3lf\n", b, log(b));
   printf("o logaritmo natural de %.2lf é %.3lf\n\n", c, log(c));

   printf("o logaritmo de %.2lf base 10 é %.3lf\n", a, log10(a));  //
   printf("o logaritmo de %.2lf base 10 é %.3lf\n", b, log10(b));
   printf("o logaritmo de %.2lf base 10 é %.3lf\n", c, log10(c));


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
o logaritmo natural de 0.00 é -inf
o logaritmo natural de 1.00 é 0.000
o logaritmo natural de 2.00 é 0.693

o logaritmo de 0.00 base 10 é -inf
o logaritmo de 1.00 base 10 é 0.000
o logaritmo de 2.00 base 10 é 0.301











*/

