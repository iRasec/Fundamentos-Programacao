#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[3][2],matrizB[3][2];
    int i,j;

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("Informe valor para linha %d coluna %d:", i,j);

            do{
                scanf("%d", &matrizA[i][j]);
            }while(matrizA[i][j] % 3 != 0 && matrizA[i][j] % 4 != 0);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("Informe valor para linha %d coluna %d:", i,j);

            do{
                scanf("%d", &matrizB[i][j]);
            }while(matrizB[i][j] % 5 != 0 && matrizB[i][j] % 6 != 0);
        }
    }

    printf("\nMatriz A");
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0;j<2;j++){
            printf("%d ",matrizA[i][j]);
        }
    }
    printf("\nMatriz B");
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0;j<2;j++){
            printf("%d ",matrizB[i][j]);
        }
    }
    return 0;
}
