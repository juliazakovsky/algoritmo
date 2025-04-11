#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char senhaSecreta[] = "1337";
    char tentativa[100];
    int tentativas = 3;

    printf("?? ALERTA DE SEGURANÇA ??\n\n");
    printf("O sistema do laboratório está sob ataque!\n");
    printf("Um agente infiltrado deixou um código secreto interceptado em formato codificado.\n");
    printf("O sistema mostra apenas:\n\n");
    printf("MTMzNw==\n\n");
    printf("Você tem 3 tentativas para decifrar e bloquear a invasão.\n\n");

    while (tentativas > 0) {
        printf("Tentativa (%d restante): ", tentativas);
        scanf("%s", tentativa);

        if (strcmp(tentativa, senhaSecreta) == 0) {
            printf("\n? Acesso concedido. Invasão bloqueada com sucesso!\n");
            return 0;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("? Código incorreto. Tente novamente.\n\n");
            } else {
                printf("\n?? Você falhou. O sistema foi comprometido!\n");
            }
        }
    }

    return 0;
}
