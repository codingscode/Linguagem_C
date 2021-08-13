#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//char inverter(char string) {
//	char outra_string[3];
//
//	for (int i = (int) strlen(string); i > 0; i--) {
//	   strcat(outra_string, (char) &string[i]);
//    }
//	return outra_string;
//}


int main() {
   int numero;
   char minha_string[3];

   printf("digite um número positivo de 3 digitos:\n");
   scanf("%d", &numero);

   sprintf(minha_string, "%d", numero);

   printf("minha_string: %s \n", minha_string);
   printf("minha_string comprimento: %d \n", (int) strlen(minha_string));


   char outra_string[] = "";
   printf("minha_string[1]: %c .\n", (char) minha_string[1]);
   printf("outra_string: %s .\n", outra_string);

   printf("(char) &minha_string[1]: %x \n", &((char) minha_string[1]));

   //for (int i = (int) strlen(minha_string); i > 0; i--) {
   //   strcat((char)* outra_string, (char) &minha_string[1]);
   //}

   printf("outra_string: %s . \n", outra_string);

   //if ((numero > 0) && ((int) strlen(minha_string) == 3)) {
    //  minha_string = inverter(minha_string);
      printf("numero invertido: %s", minha_string);
   //}
  // else {
//	   printf("o numero não é positivo ou de 3 algarismos.");
   //}



   return 0;
}



/*
 no terminal do arquivo usar:
     gcc quest04.c -o saida.o -lm
     ./saida.o
*/

/*






*/

