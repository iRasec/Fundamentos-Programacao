#include <stdio.h>
#include <stdlib.h>
#include "../funcoes.h"

int main()
{
    /*int num, res;
    printf("Informe num numero:");
    scanf("%d", &num);
    res=fun_fatorial(num);
    printf("Fatorial do numero = %d", res);*/

    int num;

    printf("Digite numero: ");
    scanf("%d", &num);
    proc_par_impar(num);

    return 0;
}
