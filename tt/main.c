#include <stdio.h>
#include <stdlib.h>
int main() {
    char resultado;
    int vitorias = 0;

    printf("A seguir, digite os resultados de 6 jogos utilizando V para Vitoria e P para derrota (sempre com letras maiusculas). \n");

    for (int i = 0; i < 6; i++) {
        printf("> Resultado do jogo %d: ", i + 1);
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias++;
        }
    }

    if (vitorias == 5 || vitorias == 6) {
        printf("\nFicara no grupo 1!\n");
    } else if (vitorias == 3 || vitorias == 4) {
        printf("\nFicara no grupo 2!\n");
    } else if (vitorias == 1 || vitorias == 2) {
        printf("\nFicara no grupo 3!\n");
    } else {
        printf("\nNao sera convidado!\n");
    }

    return 0;
}
