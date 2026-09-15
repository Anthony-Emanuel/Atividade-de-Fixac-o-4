#include <stdio.h>

int main() {
    int setor, prioridade;

    printf("===== SISTEMA DE ATENDIMENTO =====\n");
    printf("1 - Suporte Tecnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Recursos Humanos\n");
    printf("4 - Comercial\n");
    printf("5 - Desenvolvimento\n");

    printf("Escolha o setor: ");
    scanf("%d", &setor);

    switch (setor) {
        case 1:
            printf("Setor escolhido: Suporte Tecnico\n");
            break;

        case 2:
            printf("Setor escolhido: Financeiro\n");
            break;

        case 3:
            printf("Setor escolhido: Recursos Humanos\n");
            break;

        case 4:
            printf("Setor escolhido: Comercial\n");
            break;

        case 5:
            printf("Setor escolhido: Desenvolvimento\n");
            break;

        default:
            printf("Setor invalido.\n");
            return 0;
    }

    printf("\n===== PRIORIDADE =====\n");
    printf("1 - Baixa\n");
    printf("2 - Media\n");
    printf("3 - Alta\n");

    printf("Escolha a prioridade: ");
    scanf("%d", &prioridade);

    switch (prioridade) {
        case 1:
            printf("Prioridade escolhida: Baixa\n");
            break;

        case 2:
            printf("Prioridade escolhida: Media\n");
            break;

        case 3:
            printf("Prioridade escolhida: Alta\n");
            break;

        default:
            printf("Prioridade invalida.\n");
            return 0;
    }

    printf("Atendimento prioritario: %s\n",
           prioridade == 3 ? "Sim" : "Nao");

    return 0;
}
