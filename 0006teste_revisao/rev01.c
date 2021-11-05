#include <stdio.h>

/*
escrevendo funções



*/

// sem retorno
void imprimir() {
   printf("estou imprimindo...\n");
}

// com retorno
char* imprimir2() {
   return "o retorno...";
}

int somar(int numero1, int numero2) {
   return numero1 + numero2;
}

char caractere(char caract) {
   return caract;
}

char* imprimir_string(char* a_string) {
   return a_string;
}

int main() {

   printf("1: alguma coisa...\n");
   imprimir();
   printf("3: %s \n", imprimir2());
   printf("4: %d \n", somar(2, 3));
   printf("5: caractere passado: %c \n", caractere('k'));
   printf("6: %s\n", imprimir_string("borboleta"));

   char* outra = "imprimindo outra...";

   printf("+: %s\n", outra);
   printf("%c\n", outra[0]);
   printf("%c\n", outra[1]);

   return 0;
}



/*
1: alguma coisa...
estou imprimindo...
3: o retorno...
4: 5
5: caractere passado: k
6: borboleta
+: imprimindo outra...
i
m



*/
