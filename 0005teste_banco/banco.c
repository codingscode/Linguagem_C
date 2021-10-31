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
   int opcao = 0;
   printf("===================================\n");
   printf("=============== ATM ===============\n");
   printf("============ Geek Bank ============\n");
   printf("===================================\n");
   
   printf("Selecione uma opção no menu:\n");
   printf("1 - Criar conta.\n");
   printf("2 - Efetuar saque.\n");
   printf("3 - Efetuar depósito.\n");
   printf("4 - Efetuar transferência.\n");
   printf("5 - Listar contas.\n");
   printf("6 - Sair.\n");                  

   scanf("%d", &opcao);
   getchar();
   
   switch(opcao) {
      case 1:
         criarConta();
         break;
      case 2:
         efetuarSaque();
         break;
      case 3:
         efetuarDeposito();
         break;
      case 4:
         efetuarTransferencia();
         break;
      case 5:
         listarContas();
         break;
      case 6:
         printf("\nAté a próxima!\n");
         sleep(2);
         exit(0);
      default:
         printf("Opção inválida.\n");
         sleep(2);
         menu();
         break;
   }


}

void infoCliente(Cliente cliente){
   printf("Código: %d \nNome: %s \nData de Nascimento: %s \nCadastro: %s\n", cliente.codigo, strtok(cliente.nome, "\n"), strtok(cliente.dataNascimento, "\n"), strtok(cliente.dataCadastro, "\n"));
      
}

void infoConta(Conta conta){
   printf("Número da conta: %d \nCliente: %s \nData Nascimento: %s \nData Cadastro: %s \nSaldo Total: %.2f\n", conta.numero, strtok(conta.cliente.nome, "\n"), strtok(conta.cliente.dataNascimento, "\n"), strtok(conta.cliente.dataCadastro, "\n"), conta.saldoTotal);
}

void criarConta(){

}

float atualizaSaldoTotal(Conta conta){
   return conta.saldo + conta.limite;
}


Conta buscarContaPorNumero(int numero){
   Conta c;
   if (contador_contas > 0) {
      for (int i = 0; i < contador_contas; i++) {
         if (contas[i].numero == numero) {
            c = contas[i];
         }
      }
   }
   return c;
}

void sacar(Conta conta, float valor){
   if (valor > 0 && conta.saldoTotal >= valor) {
      for (int i = 0; i < contador_contas; i++) {
         if (contas[i].numero == conta.numero) {
            if (contas[i].saldo >= valor) {
               contas[i].saldo -= valor;
               contas[i].saldoTotal = atualizaSaldoTotal(contas[i]);
               printf("Saque efetuado com sucesso.\n");
            }
            else {
               float restante = contas[i].saldo - valor;
               contas[i].limite = contas[i].limite + restante;
               contas[i].saldo = 0.0;
               contas[i].saldoTotal = atualizaSaldoTotal(contas[i]);
               printf("Saque efetuado com sucesso!\n");
            }
         }
      }
   }
   else {
      printf("Saque não realizado. Tente novamente.\n");
   }
}

void depositar(Conta conta, float valor){
   if (valor > 0) {
      for (int i = 0; i < contador_contas; i++) {
         if (contas[i].numero == conta.numero) {
            contas[i].saldo += valor;
            contas[i].saldoTotal = atualizaSaldoTotal(contas[i]);
            printf("Depósito efetuado com sucesso!\n");
         }
      }
   }
   else {
      printf("Erro ao efetuar depósito. Tente novamente.\n");
   }
}

void transferir(Conta conta_origem, Conta conta_destino, float valor){
   if (valor > 0 && conta_origem.saldoTotal >= valor) {
      for (int co = 0; co < contador_contas; co++) {  // co -> conta origem
         if (contas[co].numero == conta_origem.numero) {
            for (int cd = 0; cd < contador_contas; cd++) {  // cd -> conta destino
               if (contas[cd].numero == conta_destino.numero) {
                  if (contas[co].saldo >= valor) {
                     contas[co].saldo -= valor;
                     contas[cd].saldo -= valor;
                     contas[co].saldoTotal = atualizaSaldoTotal(contas[co]);
                     contas[cd].saldoTotal = atualizaSaldoTotal(contas[cd]);
                     printf("Transferência realizada com sucesso!\n");
                  }
                  else {
                     float restante = contas[co].saldo - valor;
                     contas[co].limite = contas[co].limite + restante;
                     contas[co].saldo = 0.0;
                     contas[cd].saldo += valor;
                     contas[co].saldoTotal = atualizaSaldoTotal(contas(co));
                     contas[cd].saldoTotal = atualizaSaldoTotal(contas(cd));
                     printf("Transferência realizada com sucesso!\n");
                  }
               }
            }
         }
      }
   }
   else {
      printf("Transferência não realizada. Tente novamente.\n");
   }
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

