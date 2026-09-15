#include <stdio.h>

int main() {
    float valorCompra, percentualDesconto, valorDesconto, valorFinal;
    int formaPagamento;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\n===== FORMAS DE PAGAMENTO =====\n");
    printf("1 - PIX\n");
    printf("2 - Debito\n");
    printf("3 - Credito\n");
    printf("4 - Boleto\n");

    printf("Escolha a forma de pagamento: ");
    scanf("%d", &formaPagamento);

    switch (formaPagamento) {
        case 1:
            percentualDesconto = 20;
            printf("\nForma de pagamento: PIX\n");
            break;

        case 2:
            percentualDesconto = 15;
            printf("\nForma de pagamento: Debito\n");
            break;

        case 3:
            percentualDesconto = 5;
            printf("\nForma de pagamento: Credito\n");
            break;

        case 4:
            percentualDesconto = 10;
            printf("\nForma de pagamento: Boleto\n");
            break;

        default:
            printf("Forma de pagamento invalida.\n");
            return 0;
    }

    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - valorDesconto;

    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.2f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
