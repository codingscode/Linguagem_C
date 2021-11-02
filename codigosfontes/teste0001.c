
#include <stdio.h>

int main() {

	//declarando
	int idade;

	//declarando e inicializando
	char nome[10] = {"Silas"};  // no maximo 10 caracteres

	idade = 15;
	printf("idade: %d, nome: %s\n", idade, nome);
	printf("string: %c\n", nome[2]);  // nome é string: s e nome[indice] é char: c

	printf("codando em c\n");
	return 0;
}


/*

idade: 15, nome: Silas
string: l
codando em c



*/
