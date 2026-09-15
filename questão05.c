#include <stdio.h>

int main() {
    int idade;
    float rendaMensal, valorSolicitado;
    const char *situacao;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda mensal: R$ ");
    scanf("%f", &rendaMensal);

    printf("Digite o valor solicitado: R$ ");
    scanf("%f", &valorSolicitado);

    if (idade < 18) {
        situacao = "Credito nao permitido";
    } else if (rendaMensal < 2000.00) {
        situacao = "Credito nao recomendado";
    } else if (rendaMensal < 5000.00) {
        situacao = "Analise adicional";
    } else {
        situacao = "Credito pre-aprovado";
    }

    printf("\n===== ANALISE DE CREDITO =====\n");
    printf("Idade: %d anos\n", idade);
    printf("Renda mensal: R$ %.2f\n", rendaMensal);
    printf("Valor solicitado: R$ %.2f\n", valorSolicitado);
    printf("Situacao: %s\n", situacao);

    printf("Cliente apto para prosseguir? %s\n",
           (idade >= 18 && rendaMensal >= 2000.00) ? "Sim" : "Nao");

    return 0;
}
