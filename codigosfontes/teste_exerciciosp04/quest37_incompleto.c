#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main() {
	char chegada[] = "10:13:25";
	char saida[] = "12:45:40";
	int tam_ini = strlen(chegada);
	char delim[] = ":";

    int chegadint[] = {0, 0, 0};
    int saidaint[] = {0, 0, 0};

	char *ptr = strtok(chegada, delim);
	char *ptr2 = strtok(saida, delim);

	while(ptr != NULL) {
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	while(ptr2 != NULL) {
		printf("'%s'\n", ptr2);
		ptr2 = strtok(NULL, delim);
	}

	for (int i = 0; i < tam_ini; i++) {
		printf("%d ", chegada[i] - 48);

	}
	printf("\n");

	for (int j = 0; j < tam_ini; j++) {
		printf("%d ", saida[j] - 48);

	}

	printf("\n");

    chegadint[0] = (chegada[0] - 48)*10 + chegada[1] - 48;
    chegadint[1] = (chegada[3] - 48)*10 + chegada[4] - 48;
    chegadint[2] = (chegada[6] - 48)*10 + chegada[7] - 48;


    saidaint[0] = (saida[0] - 48)*10 + saida[1] - 48;
    saidaint[1] = (saida[3] - 48)*10 + saida[4] - 48;
    saidaint[2] = (saida[6] - 48)*10 + saida[7] - 48;


    for (int i = 0; i < 3; i++) {
       printf("%dº: %d\n", i+1, chegadint[i]);
    }

    printf("\n\n");
    for (int i = 0; i < 3; i++) {
       printf("%dº: %d\n", i+1, saidaint[i]);
    }

    printf("fim.\n");
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

/*
'10'
'45'
'40'
'12'
1 0 -48 1 3 10 2 5
1 2 -48 4 5 -48 4 0
1º: 10
2º: 13
3º: 25


1º: 12
2º: 45
3º: 40
fim.




*/























