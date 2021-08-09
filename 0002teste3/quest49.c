
#include <stdio.h>
#include <time.h>

int main() {
	int horas, minutos, segundos, duracao_seg, seg;

    printf("digite a hora:\n");
    scanf("%d", &horas);
    printf("digite a minutos:\n");
    scanf("%d", &minutos);
    printf("digite a segundos:\n");
    scanf("%d", &segundos);
    printf("digite a duração em segundos:\n");
    scanf("%d", &duracao_seg);
	seg = horas*3600 + minutos*60 + segundos;

    printf("horas: %d, minutos: %d, segundos: %d, tempo: %d \n", horas, minutos, segundos, seg);
    seg += duracao_seg;

    if (seg > 86400) {
       seg = seg % 86400;
    }

    printf("horas: %d, minutos: %d, segundos: %d, tempo: %d \n", seg/3600, (seg%3600)/60, ((seg % 3600) % 60), seg);

    // 1628534623
    return 0;
}

	/*
     no terminal do arquivo usar:
        gcc quest04.c -o saida.o -lm
        ./saida.o
	 */

/*
digite a hora:
6
digite a minutos:
20
digite a segundos:
30
digite a duração em segundos:
4000
horas: 6, minutos: 20, segundos: 30, tempo: 22830
horas: 7, minutos: 27, segundos: 10, tempo: 26830
 */



/*

#include <stdio.h>
#include <time.h>

int main() {

    time_t t;   // not a primitive datatype
    time(&t);

    printf("momento: %s \n", ctime(&t));

    printf("programa executado\n");
    return 0;
}

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
