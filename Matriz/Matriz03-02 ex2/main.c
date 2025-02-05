#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[7], vetorB[7], matrizC[2][7];
    int i, j;

    for(i=0; i<7; i++){
        printf("Vetor A: ");
        scanf("%d", &vetorA[i]);
    }
    for(i=0; i<7; i++){
        printf("Vetor B: ");
        scanf("%d", &vetorB[i]);
    }

    for(j=0; j<7; j++){
        matrizC[0][j] = vetorA[j];
        matrizC[1][j] = vetorB[j];
    }

    printf("Impressao da matriz\n");
    for(i=0; i<2; i++){
            printf("\n");
        for(j=0; j<7; j++){
            printf("%d  ", matrizC[i][j]);
        }
    }
    return 0;
}
