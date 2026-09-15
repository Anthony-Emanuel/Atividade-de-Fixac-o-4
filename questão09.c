#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura < 0) {
        printf("Classificacao: Muito frio\n");
    } else if (temperatura <= 15) {
        printf("Classificacao: Frio\n");
    } else if (temperatura <= 25) {
        printf("Classificacao: Agradavel\n");
    } else if (temperatura <= 35) {
        printf("Classificacao: Quente\n");
    } else {
        printf("Classificacao: Muito quente\n");
    }

    printf("Temperatura acima de 30 C: %s\n",
           temperatura > 30 ? "Sim" : "Nao");

    return 0;
}
