#include <stdio.h>

/*
vetores parte 1

array uni-dimensional
char nome[50]

"" aspas duplas -> string
'' aspas simples -> caractere



*/


int main() {
   char caractere1 = 'k';
   char caractere2 = 5;  // tabela ascii


   //vetores e strings
   char nome[50];  // é uma string
   printf("qual seu nome:\n");
   gets(nome);
   printf("seu nome é %s\n", nome);


   //vetores e caracteres
   char letras[26];
   //preenchendo
   int contador = 0;

   for (int i=97; i <= 122; i++) {
      letras[contador] = i;
      contador += 1;
   }

   // imprimindo
   for (int i=0; i < 26; i++) {
      printf("%d == %c -> ", letras[i], letras[i]);
   }
   printf("\n");

   char umastring[8] = {"rapunzel"}; // até o (8-1) caractere. apos isso sai esquisito
   printf("umastring: %s.\n", umastring);

   //vetores de inteiros
   int numeros[10];

   //vetores e reais
   float valores[5];

   return 0;
}



/*
 no terminal do arquivo usar:
     gcc arquivo.c -o saida.o -lm
     ./saida.o
*/

/*
qual seu nome:
aladin
seu nome é aladin
97 == a -> 98 == b -> 99 == c -> 100 == d -> 101 == e -> 102 == f -> 103 == g -> 104 == h -> 105 == i -> 106 == j -> 107 == k -> 108 == l -> 109 == m -> 110 == n -> 111 == o -> 112 == p -> 113 == q -> 114 == r -> 115 == s -> 116 == t -> 117 == u -> 118 == v -> 119 == w -> 120 == x -> 121 == y -> 122 == z ->
umastring: rapunzelabcdefghijklmnopqrstuvwxyz�G�.





*/

