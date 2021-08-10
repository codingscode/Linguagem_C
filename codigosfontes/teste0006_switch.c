#include <stdio.h>


int main() {

	int valor;

	printf("digite um valor de 1 a 7:\n");
	scanf("%d", &valor);

	switch(valor) {
	   case 1:
	      printf("domigo");
	      break;
	   case 2:
	      printf("segunda\n");
	      break;
	   case 3:
	      printf("terça\n");
	      break;
	   case 4:
	      printf("quarta\n");
	      break;
	   case 5:
	      printf("quinta\n");
	      break;
	   case 6:
	      printf("sexta\n");
	      break;
	   case 7:
	      printf("sabado\n");
	      break;
	   default:
	      printf("valor inválido\n");

	}
    return 0;
}



/*
 no terminal do arquivo usar:
     gcc quest04.c -o saida.o -lm
     ./saida.o
*/

/*
 digite um valor de 1 a 7:
4
quarta

digite um valor de 1 a 7:
14
valor inválido



*/

