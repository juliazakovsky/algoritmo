#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Leitura dos tr�s n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    // Impress�o na ordem inversa
    printf("N�meros na ordem inversa: %d, %d, %d\n", num3, num2, num1);

    return 0;
}

