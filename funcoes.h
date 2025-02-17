void proc_ler_vetor(int pVet[], int pNum)
{
    int i;
    for(i=0; i<pNum; i++)
    {
        printf("Informe elemento %d:", i);
        scanf("%d", &pVet[i]);
    }
}


int fun_fatorial(int pNum){
    int i,fat;
        fat = 1;
        for(i=1; i<=pNum; i++){
        fat *= i;
        }
        return(fat);
}

void proc_par_impar(int num){
    if(num == 0){
        printf("Zero");
    }
    else if(num %2 == 0){
        printf("Par");
    }
    if(num %2 != 0){
        printf("Impar");
    }
}
