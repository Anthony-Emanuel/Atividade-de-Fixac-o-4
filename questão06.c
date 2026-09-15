#include <stdio.h>

int main() {
    int opcao;
    int veiculoPesado = 0;

    printf("===== SISTEMA DE TRANSPORTE =====\n");
    printf("1 - Motocicleta\n");
    printf("2 - Automovel\n");
    printf("3 - Van\n");
    printf("4 - Onibus\n");
    printf("5 - Caminhao\n");

    printf("Escolha o tipo de veiculo: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Veiculo selecionado: Motocicleta\n");
            break;

        case 2:
            printf("Veiculo selecionado: Automovel\n");
            break;

        case 3:
            printf("Veiculo selecionado: Van\n");
            break;

        case 4:
            printf("Veiculo selecionado: Onibus\n");
            veiculoPesado = 1;
            break;

        case 5:
            printf("Veiculo selecionado: Caminhao\n");
            veiculoPesado = 1;
            break;

        default:
            printf("Opcao invalida.\n");
            return 0;
    }

    printf("Veiculo pesado: %s\n",
           veiculoPesado ? "Sim" : "Nao");

    return 0;
}
