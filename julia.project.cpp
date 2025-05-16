#include <stdio.h>

int main() {
    int a, b, c, i, soma = 0;

    // Solicita o valor de 'a' e valida se � maior que 1
    do {
        printf("Digite o valor de a (maior que 1): ");
        scanf("%d", &a);
        if (a <= 1) {
            printf("Erro: 'a' deve ser maior que 1.\n");
        }
    } while (a <= 1);

    // L� os valores de b e c
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    // Garante que o intervalo seja de b para c (independente da ordem)
    int inicio = (b < c) ? b + 1 : c + 1;
    int fim = (b < c) ? c : b;

    // Soma os n�meros entre b e c que s�o divis�veis por a
    for (i = inicio; i < fim; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }

    // Exibe o resultado
    printf("A soma dos n�meros entre %d e %d divis�veis por %d �: %d\n", b, c, a, soma);

    return 0;
}

