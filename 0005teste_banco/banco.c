#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>  // sist operacional linux/mac sleep(segundos)
//#include <windows.h>  / " windows  Sleep(segundos)
#include <time.h>


typedef struct {
   int codigo;
   char nome[50];
   char email[50];
   char cpf[20];
   char dataNascimento[20];
   char dataCadastro[20];
} Cliente;


typedef struct {
   int numero;
   Cliente cliente;
   float saldo;
   float limite;
   float saldoTotal;  // saldo + limite
} Conta;

void menu();
void infoCliente(Cliente cliente);
void infoConta(Conta conta);
void criarConta();
void efetuarSaque();
void efetuarDeposito();
void efetuarTransferencia();
void listarContas();
float atualizaSaldoTotal(Conta conta);
Conta buscarContaPorNumero(int numero);
void sacar(Conta conta, float valor);
void depositar(Conta conta, float valor);
void transferir(Conta conta_origem, Conta conta_destino, float valor);


static Conta contas[50];
static int contador_contas = 0;
static int contador_clientes = 0;



int main() {

   menu();

   return 0;
}



void menu() {

}

void infoCliente(Cliente cliente){

}

void infoConta(Conta conta){

}

void criarConta(){

}

float atualizaSaldoTotal(Conta conta){

}


Conta buscarContaPorNumero(int numero){

}

void sacar(Conta conta, float valor){

}

void depositar(Conta conta, float valor){

}

void transferir(Conta conta_origem, Conta conta_destino, float valor){

}

void efetuarSaque(){

}

void efetuarDeposito(){

}
void efetuarTransferencia(){

}

void listarContas(){

}









/*



*/

