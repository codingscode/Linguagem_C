#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>  // no linux / Mac
//#include <windows.h>  // no windows




typedef struct {
   int codigo;
   char nome[30];
   float preco;
} Produto;

typedef struct {
   Produto produto;
   int quantidade;
} Carrinho;

void infoProduto(Produto prod);
void menu();
void cadastrarProduto();
void listarProdutos();
void comprarProduto();
void visualizarCarrinho();
Produto pegarProdutoPorCodigo(int codigo);
int * temNoCarrinho(int codigo);
void fecharPedido();

static int contador_produto = 0;
static int contador_carrinho = 0;
static Carrinho carrinho[50];
static Produto produtos[50];


int main() {

   menu();

   return 0;
}


void infoProduto(Produto prod) {
   printf("Código: %d \nNome: %s \nPreço: %.2f\n", prod.codigo, strtok(prod.nome, "\n"), prod.preco);
}

void menu() {
   printf("==========================\n");
   printf("============ Bem-vindo(a) ==============\n");
   printf("============ Geek Shop ==============\n");
   
   printf("Selecione uma opção abaixo:\n");
   printf("1 - Cadastrar produto.\n");
   printf("2 - Listar produtos.\n");
   printf("3 - Comprar produto.\n");
   printf("4 - Visualizar carrinho.\n");
   printf("5 - Fechar pedido.\n");
   printf("6 - Sair do sistema.\n");
   
   int opcao;
   scanf("%d", &opcao);
   getchar(0);
   
   switch(opcao) {
      case 1:
         cadastrarProduto();
         break;
      case 2:
         listarProdutos();
         break;
      case 3:
         comprarProduto();
         break;
      case 4:
         visualizarCarrinho();
         break;         
      case 5:
         fecharPedido();
         break;         
      case 6:
         printf("Volte sempre!\n");
         sleep(2);
         exit(0);
      default:
         printf("Opção inválida.\n");
         sleep(2);
         menu();
         break;   
         
   }
   
   
}

void cadastrarProduto(){
   printf("Cadastro de Produto\n");
   printf("====================\n");   
   
   printf("Informe o nome do produto:\n");   
   fgets(produtos[contador_produto].nome, 30, stdin);
   
   printf("Informe o preço do produto:\n");   
   scanf("%f", &produtos[contador_produto].preco);
   
   printf("O produto %s foi cadastrado com sucesso.\n", strtok(produtos[contador_produto].nome, "\n"));
   
   produtos[contador_produto].codigo = (contador_produto + 1);
   contador_produto++;
   
}

void listarProdutos(){
   if (contador_produto > 0) {
      printf("Listagem de produtos.\n");
      printf("----------------------\n");
      for (int i = 0; i < contador_produto; i++) {
         infoProduto(produtos[i]);
         printf("---------------\n");
         sleep(1);
      }
   }
   else {
      printf("Não temos ainda produtos cadastrados.\n");
   }
}

void comprarProduto() {

}

void visualizarCarrinho(){
   if (contador_carrinho > 0) {
   
   }
   else {
      printf("Não temos ainda produtos no carrinho.\n");
   }
}

Produto pegarProdutoPorCodigo(int codigo){

}

int * temNoCarrinho(int codigo){

}

void fecharPedido(){

}



/*



*/




