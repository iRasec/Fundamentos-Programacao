#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[4][4],vetorA[4], vetorB[4];
    int i,j;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Linha %d Coluna %d: ", i,j);        }
    }

    for(i=1; i>j; i++){
    vetorA[i] = matriz[i][j];
    }
    for(j=0; j>i; j++){
    vetorB[i] = matriz[i][j];
    }
    printf("Valor dos vetores da matriz\n");
    for(i=0; i<4; i++){
        printf("\n");
        for(j=0; j<8; j++){
            printf("%d %d", vetorA[i], vetorB[i]);
        }
    }
    return 0;
}
