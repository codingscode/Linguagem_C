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


funções de potencia
pow(base, expoente)
sqrt()

*/


int main() {

   int a = 8, b = 2, c = 4;
   float x = (float) 1/3, y = 2.5;

   printf("%d elevado a %d: %d\n", a, b, (int) pow(a, b));
   printf("%d elevado a %f: %.2f\n", a, x, pow(a, x));
   printf("%d elevado a %.2f: %.2f\n", b, y, pow(b, y));
   printf("raiz quadrada de %d: %.2f\n", c, sqrt(c));

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
8 elevado a 2: 64
8 elevado a 0.333333: 2.00
2 elevado a 2.50: 5.66
raiz quadrada de 4: 2.00











*/

