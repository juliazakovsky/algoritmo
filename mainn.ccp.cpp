#include <stdio.h>

int main() {
    int diasAtrasos;  // vari�vel para armazenar o n�mero de dias de atraso
    int mesesAtraso;  // vari�vel para armazenar a quantidade de meses de atraso

    // Solicita ao usu�rio o n�mero de dias de atraso
    printf("Digite o n�mero de dias de atraso: ");
    scanf("%d", &diasAtrasos);

    // Calcula o n�mero de meses de atraso (considerando 30 dias por m�s)
    mesesAtraso = diasAtrasos / 30;

    // Verifica se a obra est� atrasada em dois ou mais meses
    if (mesesAtraso >= 2) {
        printf("A obra esta atrasada em %d meses.\n", mesesAtraso);
    } else {
        printf("A obra nao esta atrasada.\n");
    }

    return 0;
}
