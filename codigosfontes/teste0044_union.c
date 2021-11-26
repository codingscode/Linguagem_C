#include <stdio.h>




/*
union ->



*/


int main() {

	int numero = 42;
	float nota = 5.8;
	char letra = 'k';
	double nota2 = 12.5;
	char nome[] = "teixeira";


	printf("variavel 'numero' seu valor: %d, ocupa %ld bytes.\n", numero, sizeof(numero));
	printf("variavel 'nota' seu valor: %.2f, ocupa %ld bytes.\n", nota, sizeof(nota));
	printf("variavel 'letra' seu valor: %c, ocupa %ld bytes.\n", letra, sizeof(letra));
	printf("variavel 'nota2' seu valor: %.2lf, ocupa %ld bytes.\n", nota2, sizeof(nota2));
	printf("variavel 'nome' seu valor: %s, ocupa %ld bytes.\n", nome, sizeof(nome));

	printf("sizef(int): %ld\n", sizeof(int));
	return 0;
}


/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
variavel 'numero' seu valor: 42, ocupa 4 bytes.
variavel 'nota' seu valor: 5.80, ocupa 4 bytes.
variavel 'letra' seu valor: k, ocupa 1 bytes.
variavel 'nota2' seu valor: 12.50, ocupa 8 bytes.
variavel 'nome' seu valor: teixeira, ocupa 9 bytes.
sizef(int): 4







*/

