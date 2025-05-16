#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Leitura dos três números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Impressão na ordem inversa
    printf("Números na ordem inversa: %d, %d, %d\n", num3, num2, num1);

    return 0;
}

