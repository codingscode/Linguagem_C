#include <stdio.h>
#include <time.h>

int main() {

    time_t t;   // not a primitive datatype
    time(&t);

    printf("momento: %s \n", ctime(&t));

    printf("programa executado\n");
    return 0;
}

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */

/*

 */



/*



-----------------------

#include <stdio.h>
#include <time.h>

int main() {

	time_t agora = time(NULL);
	struct tm *tm_struct = localtime(&agora);

	int horas = tm_struct->tm_hour;
	int minutos = tm_struct->tm_min;
	int segundos = tm_struct->tm_sec;

	printf("hora: %d\n", horas);
	printf("minutos: %d\n", minutos);
	printf("segundos: %d\n", segundos);

    return 0;
}

-------------------------------------

#include <stdio.h>
#include <time.h>

int main() {
	int horas, minutos, segundos, duracao_seg;
	time_t agora = time(NULL);
	struct tm *tm_struct = localtime(&agora);

	printf("%ld\n", agora);
	printf("horas: %d, minutos: %d, segundos: %d \n", tm_struct->tm_hour, tm_struct->tm_min, tm_struct->tm_sec);

    printf("digite a hora:\n");
    scanf("%d", &horas);
    printf("digite a minutos:\n");
    scanf("%d", &minutos);
    printf("digite a segundos:\n");
    scanf("%d", &segundos);
    printf("digite a duração em segundos:\n");
    scanf("%d", &duracao_seg);
	time_t agora2 = agora + duracao_seg;
	struct tm *tm_struct2 = localtime(&agora2);


	//tm_struct->tm_hour = horas;
	//tm_struct->tm_min = minutos;
	//tm_struct->tm_sec = segundos;

	//printf("hora: %d\n", horas);
	//printf("minutos: %d\n", minutos);
	//printf("segundos: %d\n", segundos);
	printf("horas: %d, minutos: %d, segundos: %d \n", horas, minutos, segundos);
    //agora += duracao_seg;

	printf("%ld\n", agora);
	printf("horas: %d, minutos: %d, segundos: %d \n", tm_struct2->tm_hour, tm_struct2->tm_min, tm_struct2->tm_sec);
    //https://www.geeksforgeeks.org/time-function-in-c/
    return 0;
}








*/
