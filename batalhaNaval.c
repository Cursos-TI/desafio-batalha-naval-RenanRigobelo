#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com água (0)
    
    // Posicionando navio horizontalmente
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][4 + i] = 3;
    }
    
    // Posicionando navio verticalmente
    for (int i = 0; i < 3; i++) {
        tabuleiro[6 + i][1] = 3;
    }
    
    // Exibir o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}