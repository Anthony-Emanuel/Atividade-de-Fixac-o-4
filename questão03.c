#include <stdio.h>

int main() {
    float valorCompra, percentualDesconto, valorDesconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra <= 500.00) {
        percentualDesconto = 0;
    } else if (valorCompra <= 1000.00) {
        percentualDesconto = 5;
    } else if (valorCompra <= 2000.00) {
        percentualDesconto = 10;
    } else {
        percentualDesconto = 15;
    }

    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - valorDesconto;

    printf("\n===== RESUMO DA COMPRA =====\n");
    printf("Valor original: R$ %.2f\n", valorCompra);
    printf("Desconto: %.2f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
