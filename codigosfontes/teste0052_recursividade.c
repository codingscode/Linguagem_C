#include <stdio.h>
#include <string.h>


/*
recursividade -> uma função f chama ela mesma



*/

int fib(int n) {
	if (n == 0) {
	   return 0;
	}
	if (n == 1) {
	   return 1;
	}
	return fib(n - 1) + fib(n - 2);
}


int main() {
   int numero = 7;

   for (int i = 0; i < numero; i++) {
      printf("%d -> ", fib(i));
   }

   return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
0 -> 1 -> 1 -> 2 -> 3 -> 5 -> 8 ->






*/

