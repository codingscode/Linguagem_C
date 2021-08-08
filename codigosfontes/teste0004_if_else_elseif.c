#include <stdio.h>



int main() {
   int idade;

   printf("digite sua idade:\n");
   scanf("%d", &idade);

   printf("sua idade é %d \n", idade);

   if (idade < 12) {
	   printf("você é criança.");
   }
   else if (idade < 18) {
	   printf("você é adolescente.");
   }
   else if (idade < 60) {
	   printf("você é adulto.");
   }
   else {
	   printf("você é idoso.");
   }


   return 0;

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */

}




/*
 digite sua idade:
27
sua idade é 27
você é adulto.


digite sua idade:
7
sua idade é 7
você é criança.


digite sua idade:
74
sua idade é 74
você é idoso.


*/
