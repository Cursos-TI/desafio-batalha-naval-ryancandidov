#include <stdio.h>
#include <string.h>

///  NÍVEL NOVATO 
void nivel_novato() {
    printf("\n===== NÍVEL NOVATO =====\n");

    // Tamanho do tabuleiro para este nível
    int tabuleiro[5][5] = {0};

    // Navio horizontal (linha 1, colunas 1 a 3)
    for (int j = 1; j <= 3; j++) {
        tabuleiro[1][j] = 1;
        printf("Navio horizontal: (%d, %d)\n", 1, j);
    }

    // Navio vertical (coluna 3, linhas 2 a 4)
    for (int i = 2; i <= 4; i++) {
        tabuleiro[i][3] = 1;
        printf("Navio vertical: (%d, %d)\n", i, 3);
    }
}

///  NÍVEL AVENTUREIRO 
void nivel_aventureiro() {
    printf("\n===== NÍVEL AVENTUREIRO =====\n");

    int tabuleiro[10][10] = {0};

    // Navio horizontal
    for (int j = 1; j <= 4; j++) tabuleiro[2][j] = 3;

    // Navio vertical
    for (int i = 3; i <= 7; i++) tabuleiro[i][6] = 3;

    // Navio diagonal descendente (↘)
    for (int i = 0; i < 4; i++) tabuleiro[i + 5][i + 2] = 3;

    // Navio diagonal ascendente (↗)
    for (int i = 0; i < 4; i++) tabuleiro[8 - i][i + 1] = 3;

    // Exibição do tabuleiro
    printf("Tabuleiro (0 = vazio, 3 = navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

///  NÍVEL MESTRE 
void imprimir_matriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void nivel_mestre() {
    printf("\n===== NÍVEL MESTRE =====\n");

    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < 5; j++) cone[2][j] = 1;

    // Cruz
    for (int j = 0; j < 5; j++) cruz[1][j] = 1;
    cruz[0][2] = cruz[2][2] = 1;

    // Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    // Exibição
    printf("\n🔺 Habilidade: CONE\n");
    imprimir_matriz(cone);

    printf("\n➕ Habilidade: CRUZ\n");
    imprimir_matriz(cruz);

    printf("\n🔷 Habilidade: OCTAEDRO\n");
    imprimir_matriz(octaedro);
}

/// 🔄 Função principal
int main() {
    nivel_novato();
    nivel_aventureiro();
    nivel_mestre();
    return 0;
}
