#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



void tipo_triangulo(int a, int b, int c) {
   char tipo;

   if (a == b && a == c) {
      sprintf(tipo, "%c", 'e');
      puts(tipo);

   }

   printf("executou.\n");
}


int soma_lados(int lado1, int lado2, int lado3) {  // verifica se é um triangulo válido
   int resp = 0;

   if (lado1 < lado2 + 3 && lado2 < lado1 + lado2 && lado3 < lado1 + lado2) {
      resp = 1;
      tipo_triangulo(lado1, lado2, lado3);
      return resp;
   }

   return resp;
}


int main() {
   int ladoa, ladob, ladoc;
   //char tipo_triangulo[16];

   printf("digite os valores de lado a, lado b, lado c, um abaixo do outro:\n");
   scanf("%d %d %d", &ladoa, &ladob, &ladoc);

   printf("%d\n", soma_lados(ladoa, ladob, ladoc));

   printf("fim\n");

   return 0;
}


/*




*/
