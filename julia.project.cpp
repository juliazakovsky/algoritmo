#include <stdio.h>

int main() {
    int a, b, c, i, soma = 0;

    // Solicita o valor de 'a' e valida se é maior que 1
    do {
        printf("Digite o valor de a (maior que 1): ");
        scanf("%d", &a);
        if (a <= 1) {
            printf("Erro: 'a' deve ser maior que 1.\n");
        }
    } while (a <= 1);

    // Lê os valores de b e c
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    // Garante que o intervalo seja de b para c (independente da ordem)
    int inicio = (b < c) ? b + 1 : c + 1;
    int fim = (b < c) ? c : b;

    // Soma os números entre b e c que são divisíveis por a
    for (i = inicio; i < fim; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }

    // Exibe o resultado
    printf("A soma dos números entre %d e %d divisíveis por %d é: %d\n", b, c, a, soma);

    return 0;
}

