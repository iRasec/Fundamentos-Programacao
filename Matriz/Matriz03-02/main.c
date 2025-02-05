#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matrizA[5][3], matrizB[5][3], matrizC[5][3];
    int i, j;

    printf("Leitura matriz A\n");
    for(i=0; i<=4; i++){
        for(j=0; j<=2; j++){
            printf("Informe numero da linha %d coluna %d: ", i,j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\nLeitura matriz B\n");
    for(i=0; i<=4; i++){
        for(j=0; j<=2; j++){
            printf("Informe numero da linha %d coluna %d: ", i,j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    for(i=0; i<=4; i++){
        for(j=0; j<=2; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    printf("\nImpressao da matriz");
    for(i=0; i<=4; i++){
            printf("\n");
        for(j=0; j<=2; j++){
            printf("%d  ",matrizC[i][j]);
        }
    }

    return 0;
}
