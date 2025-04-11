#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char senhaSecreta[] = "1337";
    char tentativa[100];
    int tentativas = 3;

    printf("?? ALERTA DE SEGURAN�A ??\n\n");
    printf("O sistema do laborat�rio est� sob ataque!\n");
    printf("Um agente infiltrado deixou um c�digo secreto interceptado em formato codificado.\n");
    printf("O sistema mostra apenas:\n\n");
    printf("MTMzNw==\n\n");
    printf("Voc� tem 3 tentativas para decifrar e bloquear a invas�o.\n\n");

    while (tentativas > 0) {
        printf("Tentativa (%d restante): ", tentativas);
        scanf("%s", tentativa);

        if (strcmp(tentativa, senhaSecreta) == 0) {
            printf("\n? Acesso concedido. Invas�o bloqueada com sucesso!\n");
            return 0;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("? C�digo incorreto. Tente novamente.\n\n");
            } else {
                printf("\n?? Voc� falhou. O sistema foi comprometido!\n");
            }
        }
    }

    return 0;
}
