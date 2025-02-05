#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[4][5];
    int vetorA[4]= {0,0,0,0}, i,j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            vetorA[i] += matrizA[i][j];
        }
    }

    for(i=0; i<4; i++)
    {
        printf("%d\n", vetorA[i]);
    }

    return 0;
}
