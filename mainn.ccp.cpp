#include <stdio.h>

int main() {
    int diasAtrasos;  // variável para armazenar o número de dias de atraso
    int mesesAtraso;  // variável para armazenar a quantidade de meses de atraso

    // Solicita ao usuário o número de dias de atraso
    printf("Digite o número de dias de atraso: ");
    scanf("%d", &diasAtrasos);

    // Calcula o número de meses de atraso (considerando 30 dias por mês)
    mesesAtraso = diasAtrasos / 30;

    // Verifica se a obra está atrasada em dois ou mais meses
    if (mesesAtraso >= 2) {
        printf("A obra esta atrasada em %d meses.\n", mesesAtraso);
    } else {
        printf("A obra nao esta atrasada.\n");
    }

    return 0;
}
