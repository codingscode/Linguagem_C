#include <stdio.h>
#include <string.h>


/*
enum ->

*/

enum dias_da_semana {
   segunda, terca, quarta, quinta, sexta, sabado, domingo   // deixando o cursor aparece o indice
};


int main() {
   enum dias_da_semana d1, d2;

   d1 = quinta;  // ou 3
   d2 = 4;  // ou sexta
   //d2 = "outro";  // dá erro

   int numeros[3];
   numeros[0] = 4;
   numeros[1] = 5;
   numeros[2] =6;


   if (d1 == d2) {
      printf("os dias são iguais.\n");
   }
   else {
      printf("os dias são diferentes.\n");
   }

   printf("numeros indice 0: %d\n", numeros[0]);
   printf("numeros indice 10: %d\n", numeros[10]);


   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
valor de num1 é 6
valor de num2 é 8
valor de num3 é 3
valor de num4 é 1
valor de num5 é 5


valor de num1 é 5
valor de num2 é 5
valor de num3 é 5
valor de num4 é 5
valor de num5 é 5

o 'n' ocupa 4 bytes
a 'soma' valor 23, e ocupa 4 bytes
memória total ocupada: 8 bytes.







*/

