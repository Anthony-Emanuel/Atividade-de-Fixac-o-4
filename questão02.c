#include <stdio.h>

int main() {
    int opcao;

    printf("===== ATENDIMENTO BANCARIO =====\n");
    printf("1 - Saldo\n");
    printf("2 - Extrato\n");
    printf("3 - Transferencia\n");
    printf("4 - Pagamento\n");
    printf("5 - Emprestimo\n");
    printf("6 - Encerrar\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce escolheu consultar o saldo.\n");
            break;

        case 2:
            printf("Voce escolheu consultar o extrato.\n");
            break;

        case 3:
            printf("Voce escolheu realizar uma transferencia.\n");
            break;

        case 4:
            printf("Voce escolheu realizar um pagamento.\n");
            break;

        case 5:
            printf("Voce escolheu consultar um emprestimo.\n");
            break;

        case 6:
            printf("Atendimento encerrado.\n");
            break;

        default:
            printf("Erro: opcao inexistente.\n");
    }

    return 0;
}
