#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//questao01-LP IV

struct contato_Dados
{
    char nome[240];
    char telefone[240];
    char email[240];
};

struct contato_Dados contato[3];

void contato_Pesquisa(struct contato_Dados *contato, char *nomePesquisar) {
    for (int i = 0; i < 3; i++) {
        if (strcmp(nomePesquisar, contato[i].nome) == 0) {
            printf("Nome: %s | Telefone: %s\n", contato[i].nome, contato[i].telefone);
            return;
        }
    }
    printf("Contato não encontrado.\n");
}

int main() {
     char nomePesquisar[240];
     
     
    for (int i = 0; i < 3; i++) {
        printf("Digite nome: ");
        gets(contato[i].nome);

        printf("Digite telefone: ");
        gets(contato[i].telefone);

        printf("Digite email:");
        gets(contato[i].email);
    }
    
    fflush (stdin);

    printf("Digite um nome para pesquisa: ");
    gets(nomePesquisar);

    contato_Pesquisa(contato, nomePesquisar);

    return 0;
}