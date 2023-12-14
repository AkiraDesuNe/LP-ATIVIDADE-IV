#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Funcionario {
    char nome[100];
    char cargo[50];
    float salario;
};


float calcularMediaSalarial(struct Funcionario funcionarios[], int numFuncionarios, const char cargoEspecifico[]) {
    float somaSalarios = 0;
    int qtd = 0;

    for (int i = 0; i < 4; i++) {
        
        if (strcmp(funcionarios[i].cargo, cargoEspecifico) == 0) {
            somaSalarios += funcionarios[i].salario;
            qtd++;
        }
    }

    if (qtd > 0) {
        return somaSalarios / qtd;
    } else {
        return 0.0;
    }
}

int main() {
   
    struct Funcionario funcionarios[] = {
        {"daniel", "bombeiro", 5000.0},
        {"julia", "bombeiro", 6000.0},
        {"samuel", "policial", 5500.0},
        {"lucas", "secretario", 7000.0},
       
    };

    int numFuncionarios = 4;

    
    float mediaSalarialProgramadores = calcularMediaSalarial(funcionarios, numFuncionarios, "bombeiro");

  
    printf("Média Salarial dos Programadores: %.2f\n", mediaSalarialProgramadores);

    return 0;
}