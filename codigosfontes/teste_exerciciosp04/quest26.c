#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>




int main() {
   float distancia, litros, razao;
   char* mensagem;

   printf("digite a distancia(Km) percorrida e quantidade de litros de gasolina uma abaixo do outro:\n");
   scanf("%f %f", &distancia, &litros);

   razao = distancia/litros;

   printf("%.2f\n", razao);

   if (razao < 8) {
      sprintf(mensagem, "venda o carro.\n");
      printf("%s\n", mensagem);
   }
   else if (razao >=8 && razao < 14) {
	  sprintf(mensagem, "economico.\n");
	  printf("%s\n", mensagem);
   }
   else if (razao > 12) {
	  sprintf(mensagem, "super economico.\n");
	  printf("%s\n", mensagem);
   }


   printf("fim\n");
   return 0;
}


/*

digite a distancia(Km) percorrida e quantidade de litros de gasolina uma abaixo do outro:
28
4
7.00
venda o carro.

fim


digite a distancia(Km) percorrida e quantidade de litros de gasolina uma abaixo do outro:
38
4
9.50
economico.

fim



digite a distancia(Km) percorrida e quantidade de litros de gasolina uma abaixo do outro:
75
5
15.00
super economico.

fim



*/
