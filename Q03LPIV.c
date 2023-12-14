#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
    char nome[240];
    float preco;
    int quantidadeEstoque;
};
struct Produto produto;


float calcularValorTotal(struct Produto produto) {
    return produto.preco * produto.quantidadeEstoque;
}



void Compra(struct Produto *produto, int quantidadeComprada) {
    if (quantidadeComprada > 0) {
        produto->quantidadeEstoque += quantidadeComprada;
        printf("Compra feita. Nova quantidade de estoque: %d\n", produto->quantidadeEstoque);
    } else {
        printf("Inválido.\n");
    }
}


void consultarEstoque(struct Produto produto) {
    printf("Estoque do produto %s: %d \n", produto.nome, produto.quantidadeEstoque);
    printf("Valor total em estoque: %.2f \n", calcularValorTotal(produto));
}

int main() {
   

    printf("Digite o nome do produto: ");
    fgets(produto.nome, sizeof(produto.nome), stdin);
    strtok(produto.nome, "\n");

    printf("Digite o preço do produto: ");
    scanf("%f", &produto.preco);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produto.quantidadeEstoque);

    int opcao;
    int quantidadeComprada;

    do {
       
        printf("\nMENU:\n");
        printf("1 - Realizar uma compra\n");
        printf("2 - Consultar estoque\n");
        printf("3 - Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                
                printf("Digite a quantidade que deseja comprar: ");
                scanf("%d", &quantidadeComprada);
                Compra(&produto, quantidadeComprada);
                break;

            case 2:
               
                consultarEstoque(produto);
                break;

            case 3:
            
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
