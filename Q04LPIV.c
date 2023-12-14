#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//questao04 

struct ContaBancaria {
    char numerodaConta [240];
    char nomedoTitular [240];
    float  saldo;
    char tipodeConta [240];
};

struct ContaBancaria conta;


float saque (struct ContaBancaria conta) {
      float valorSaque;
      float novoSaldo;
      
    printf ("digite valor de saque: ");
    scanf ("%f",&valorSaque);
      
     novoSaldo = conta.saldo - valorSaque;
    
    printf ("Saque realizado. Saldo atual: %.2f",novoSaldo);
    
    return novoSaldo;
    
}





float deposito (struct ContaBancaria conta)  {
      float valorDeposito;
      float novoSaldo;
      
      printf ("digite valor de deposito: ");
      scanf ("%f",&valorDeposito);
       
       
       novoSaldo = conta.saldo + valorDeposito;
       
       
       
       printf ("Deposito realizado. Saldo atual: %.2f",novoSaldo);
       
       return novoSaldo;
}





int main()
{
    
    printf ("cadastro de dados bancarios: ");
    
    printf ("numero da conta: ");
    gets (conta.numerodaConta);
    
    printf ("nome do titular: ");
    gets (conta.nomedoTitular);
    
    printf ("saldo: ");
    scanf ("%f",&conta.saldo);
    
    printf ("tipo de conta: ");
    getchar();
    gets (conta.tipodeConta);
    
    
    
    
    printf ("||\t MENU ||\n");
    printf ("1)saque ; \n   2) deposito. \n ");
    printf ("Digite uma operacao: ");
  
    
    int operacoes;
    scanf ("%d", &operacoes);
      
      
    if (operacoes==1) {
        saque (conta);
    }
    
    else if (operacoes==2) {
        deposito (conta);
        
    }
    
    else {
    printf ("operacao invalida");
    }
    
    

return 0;
}
