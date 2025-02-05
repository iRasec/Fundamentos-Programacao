#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int A[4][5], B[4][5];

    // Leitura da matriz A
    printf("Digite os elementos da matriz A (4x5):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Construção da matriz B com os fatoriais dos elementos de A
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            B[i][j] = fatorial(A[i][j]);
        }
    }

    // Exibição da matriz B
    printf("\nMatriz B (fatorial dos elementos de A):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
