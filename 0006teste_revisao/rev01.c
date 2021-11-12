#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


char* aposentar(int i, int t) {
   char* situacao;


   if ((i >= 65) | (t >= 30) | (i >= 60 && t >= 25)) {
      sprintf(situacao, "se aposenta");
   }
   else {
      sprintf(situacao, "não aposenta");
      printf("testou\n");
   }
   return situacao;
}


int main() {
   int idade, t_serv;

   printf("digite a idade e o tempo de serviço um abaixo do outro:\n");
   scanf("%d %d", &idade, &t_serv);

   printf("situacao: %s.\n", aposentar(idade, t_serv));

   printf("fim\n");

   return 0;
}


/*
digite a idade e o tempo de serviço um abaixo do outro:
23
4
testou
situacao: não aposenta.
fim



digite a idade e o tempo de serviço um abaixo do outro:
40
20
testou
situacao: não aposenta.
fim



digite a idade e o tempo de serviço um abaixo do outro:
59
40
situacao: se aposenta.
fim



digite a idade e o tempo de serviço um abaixo do outro:
67
15
situacao: se aposenta.
fim




*/
