#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    // Leitura do número
    printf("Digite um numero inteiro entre 0 e 10: ");
    scanf("%d", &N);

    // Verificação da restrição
    if (N < 0 || N > 10) {
        printf("Número fora do intervalo de 0 a 10.\n");
        return 1;
    }

    // Configuração da mão esquerda
    printf("Mão Esquerda: ");
    if (N <= 5) {
        for (int i = 0; i < N; i++) {
            printf("I");
        }
        if (N == 0) {
            printf("*");
        }
        printf("\nMão Direita: *\n"); // Mão direita fechada
    } else {
        for (int i = 0; i < 5; i++) {
            printf("I");
        }
        printf("\nMão Direita: ");
        for (int i = 0; i < N - 5; i++) {
            printf("I");
        }
        printf("\n");
    }

    return 0;
}
