#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usu�rio que insira um n�mero
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o n�mero � par ou �mpar
    if (numero % 2 == 0) {
        printf("O numero %d � PAR.\n", numero);
    } else {
        printf("O numero %d � IMPAR.\n", numero);
    }

    return 0;
}
