#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



void tipo_triangulo(int a, int b, int c) {
   char tipo[16] = "";

   if (a == b && a == c) {
      strcat(tipo, "equilatero");
      printf("%s\n", tipo);
   }
   else if ((a == b) | (a == c) | (b == c)) {
	  strcat(tipo, "isosceles");
	  printf("%s\n", tipo);
   }
   else if (a != b && a != c && b != c) {
	  strcat(tipo, "escaleno");
	  printf("%s\n", tipo);
   }

   printf("executou.\n");
}


char* soma_lados(int lado1, int lado2, int lado3) {  // verifica se é um triangulo válido
   char resp[30] = "";

   if (lado1 < lado2 + 3 && lado2 < lado1 + lado2 && lado3 < lado1 + lado2) {
      //resp = 1;
      strcat(resp, "triangulo válido.");

      tipo_triangulo(lado1, lado2, lado3);
      //return resp;
   }
   else {
      strcat(resp, "triangulo não válido.");

   }

   return resp;
}


int main() {
   int ladoa, ladob, ladoc;
   //char tipo_triangulo[16];

   printf("digite os valores de lado a, lado b, lado c, um abaixo do outro:\n");
   scanf("%d %d %d", &ladoa, &ladob, &ladoc);

   printf("%s .\n", soma_lados(ladoa, ladob, ladoc));

   printf("fim\n");

   return 0;
}


/*




*/
