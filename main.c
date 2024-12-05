#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROCESSOS 100
#define MAX_STRING 100

typedef struct {
    int numeroProcesso;
    char tribunal[MAX_STRING];
    char assunto[MAX_STRING];
    char dataUltimaMovimentacao[MAX_STRING];
} Processo;

Processo processos[MAX_PROCESSOS];
int contadorProcessos = 0;

void cadastrarProcesso() {
    if (contadorProcessos >= MAX_PROCESSOS) {
        printf("Limite de processos atingido!\n");
        return;
    }

    Processo p;
    printf("Digite o número do processo: ");
    scanf("%d", &p.numeroProcesso);
    printf("Digite o tribunal: ");
    scanf(" %[^\n]", p.tribunal); // Lê string com espaços
    printf("Digite o assunto: ");
    scanf(" %[^\n]", p.assunto);
    printf("Digite a data da última movimentação: ");
    scanf(" %[^\n]", p.dataUltimaMovimentacao);

    processos[contadorProcessos] = p;
    contadorProcessos++;
    printf("Processo cadastrado com sucesso!\n");
}

void visualizarProcessos() {
    if (contadorProcessos == 0) {
        printf("Nenhum processo cadastrado.\n");
        return;
    }

    printf("\nLista de Processos:\n");
    for (int i = 0; i < contadorProcessos; i++) {
        printf("Número do Processo: %d\n", processos[i].numeroProcesso);
        printf("Tribunal: %s\n", processos[i].tribunal);
        printf("Assunto: %s\n", processos[i].assunto);
        printf("Data da Última Movimentação: %s\n", processos[i].dataUltimaMovimentacao);
        printf("-----------------------------\n");
    }
}

void editarProcesso() {
    int numeroProcesso;
    printf("Digite o número do processo que deseja editar: ");
    scanf("%d", &numeroProcesso);

    for (int i = 0; i < contadorProcessos; i++) {
        if (processos[i].numeroProcesso == numeroProcesso) {
            printf("Editando processo:\n");
            printf("Digite o novo tribunal: ");
            scanf(" %[^\n]", processos[i].tribunal);
            printf("Digite o novo assunto: ");
            scanf(" %[^\n]", processos[i].assunto);
            printf("Digite a nova data da última movimentação: ");
            scanf(" %[^\n]", processos[i].dataUltimaMovimentacao);
            printf("Processo editado com sucesso!\n");
            return;
        }
    }
    printf("Processo não encontrado.\n");
}

void excluirProcesso() {
    int numeroProcesso;
    printf("Digite o número do processo que deseja excluir: ");
    scanf("%d", &numeroProcesso);

    for (int i = 0; i < contadorProcessos; i++) {
        if (processos[i].numeroProcesso == numeroProcesso) {
            // Move todos os processos seguintes uma posição para cima
            for (int j = i; j < contadorProcessos - 1; j++) {
                processos[j] = processos[j + 1];
            }
            contadorProcessos--;
            printf("Processo excluído com sucesso!\n");
            return;
        }
    }
    printf("Processo não encontrado.\n");
}

int main() {
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Cadastrar Processo\n");
        printf("2. Visualizar Processos\n");
        printf("3. Editar Processo\n");
        printf("4. Excluir Processo\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProcesso();
                break;
            case 2:
                visualizarProcessos();
                break;
            case 3:
                editarProcesso();
                break;
            case 4:
                excluirProcesso();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
