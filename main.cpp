#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usuário que insira um número
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O numero %d é PAR.\n", numero);
    } else {
        printf("O numero %d é IMPAR.\n", numero);
    }

    return 0;
}
