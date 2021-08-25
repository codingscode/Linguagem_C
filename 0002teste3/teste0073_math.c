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

funções de arrendondamento valor absoluto e outros
ceil()
floor()



*/


int main() {

   float numero1 = 7.8;
   float numero2 = 8.429;


   printf("%.2f arredondando para cima é %.2f\n", numero1, ceil(numero1));
   printf("%.2f arredondando para baixo é %.2f\n\n", numero1, floor(numero1));

   printf("%.2f arredondando para cima é %.2f\n", numero2, ceil(numero2));
   printf("%.2f arredondando para baixo é %.2f\n", numero2, floor(numero2));


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
7.80 arredondando para cima é 8.00
7.80 arredondando para baixo é 7.00

8.43 arredondando para cima é 9.00
8.43 arredondando para baixo é 8.00











*/

