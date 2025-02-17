#include <stdio.h>
#include <stdlib.h>

int num1, num2, res;

int main()
{
    int opcao;

    do
    {
        printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao");
        printf("\nEscolha uma das opcoes:");
        scanf("%d", &opcao);
        if(opcao >= 1 && opcao <= 4)
            leitura();
        switch(opcao)
        {
        case 1:
            proc_adicao();
            break;
        case 2:
            proc_subtracao();
            break;
        case 3:
            proc_multiplicacao();
            break;
        case 4:
            proc_divisao();
            break;
        }
    }
    while(opcao != 5);
    return 0;
}


void leitura()
{
    int res;
    printf("informe um numero:");
    scanf("%d",&num1);
    printf("informe um numero:");
    scanf("%d",&num2);
}

void proc_adicao()
{
    res = num1 + num2;
    proc_escreve((float)res);
}

void proc_subtracao()
{
    int res;
    res = num1 - num2;
    proc_escreve((float)res);
}

void proc_multiplicacao()
{
    float res;
    res = num1 * num2;
    proc_escreve((float)res);
}

void proc_divisao()
{
    float res;
    res = (double)num1 / num2;
    proc_escreve(res);

}

void proc_escreve(float pRes){
    printf("Resulado: %.2f\n", pRes);
}
