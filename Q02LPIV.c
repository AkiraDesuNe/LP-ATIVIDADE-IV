#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//questao02

struct Aluno {
    char nome[240];
    char nascimentoData[240];
    float notas[2];
    float soma;
    float media;
};

void calcularMedia(struct Aluno *aluno) {
    for (int i = 0; i < 5; i++) {
        printf("nome do aluno: ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        strtok(aluno[i].nome, "\n");

        printf("data de nascimento do aluno: ");
        fgets(aluno[i].nascimentoData, sizeof(aluno[i].nascimentoData), stdin);
        strtok(aluno[i].nascimentoData, "\n");

        aluno[i].soma = 0;

        for (int j = 0; j < 2; j++) {
            printf("digite nota: ");
            scanf("%f", &aluno[i].notas[j]);
            aluno[i].soma += aluno[i].notas[j];
            getchar(); // Consume the newline character
        }

        aluno[i].media = aluno[i].soma / 2;
        printf("%s | %.2f\n", aluno[i].nome, aluno[i].media);
    }
}

void aprovacao(struct Aluno *aluno) {
    for (int i = 0; i < 5; i++) {
        printf("%s: ", aluno[i].nome);

        if (aluno[i].media >= 7.0) {
            printf("aprovado\n");
        } else {
            printf("reprovado\n");
        }
    }
}

int main() {
    struct Aluno aluno[5];

    calcularMedia(aluno);
    aprovacao(aluno);

    return 0;
}
