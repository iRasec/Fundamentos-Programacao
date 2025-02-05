#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[4][5], par = 0, impar = 0, i,j;

    for(i=0; i<4; i++){
        for(j=0; j<5; j++){
                scanf("%d", &matrizA[i][j]);

                if(matrizA[i][j] % 2 == 0){
                    par += matrizA[i][j];
                }
                if(matrizA[i][j] % 2 != 0){
                    impar += matrizA[i][j];
                }
        }
    }
    printf("%d\n", par);
    printf("%d", impar);

    return 0;
}
