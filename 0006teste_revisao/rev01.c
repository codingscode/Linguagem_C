#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main() {
	char chegada[] = "10:13:25";
	int tam_ini = strlen(chegada);
	char delim[] = ":";

	char *ptr = strtok(chegada, delim);

	while(ptr != NULL) {
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	/* This loop will show that there are zeroes in the str after tokenizing */
	for (int i = 0; i < tam_ini; i++) {
		printf("%d ", chegada[i]); /* Convert the character to integer, in this case
							   the character's ASCII equivalent */
	}
	printf("\n");

	return 0;
}

// https://www.codingame.com/playgrounds/14213/how-to-play-with-strings-in-c/string-split
// https://www.geeksforgeeks.org/convert-a-string-to-integer-array-in-c-c/

/*

   while(ptr != NULL)
   	{
   		printf("'%s'\n", ptr);
   		ptr = strtok(NULL, delim);
   	}


   	for (int i = 0; i < init_size; i++)
   	{
   		printf("%d ", str[i]);

   	}
   	printf("\n");

char* chegada = "45", saida;
int numero = atoi(chegada);

printf("numero: %d\n", numero);



*/

/*


   char* chegada = "10:13:25", saida;
   char* delimitador = ":";
   int numero = atoi(chegada);

   char *ponteiro = strtok(chegada, delimitador);
//   char *ptr = strtok(str, delim);


   //printf("numero: %d\n", numero);

   while (ponteiro != NULL) {
      printf("'%s'\n", ponteiro);
      ponteiro = strtok(NULL, delimitador);
   }

   for (int i = 0; i < strlen(chegada); i++) {
      printf("%d ", chegada[i]);
   }

   printf("\n");





   printf("fim\n");
   return 0;











*/
