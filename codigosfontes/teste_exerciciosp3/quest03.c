#include <stdio.h>



int main() {
   int num1, num2, num3, soma = 0;

   printf("digite três números inteiros um abaixo do outro:\n");
   scanf("%d %d %d", &num1, &num2, &num3);

   soma = num1 + num2 + num3;
   printf("a soma é : %d\n", soma);
   return 0;

}
/*
digite três números inteiros um abaixo do outro:
1
2
3
a soma é : 6
*/
