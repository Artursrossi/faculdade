#include <stdio.h>

int main() {
    int dd, mm, aa = 0;
    int bissexto = 0;

    /* Validações de entrada */
    do{
        printf("Digite o dia:");
        scanf("%d", &dd);
    }
    while(dd <= 0 || dd > 31);
    do{
        printf("Digite o mes:");
        scanf("%d", &mm);
    }
    while(mm <= 0 || mm > 12);
    do{
        printf("Digite o ano:");
        scanf("%d", &aa);
    }
    while(aa <= 0);


    /* Verificar se o ano é bissexto */
    if(aa % 400 == 0 || (aa % 100 != 0 && aa % 4 == 0)) bissexto = 1;

    /* Verificar meses de 30 dias */
    if((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd > 30){
        printf("Data Invalida \n");
        return 0;
    }

    /* Em fevereiro, se o ano for bissexto, terá 29 dias, se não, terá 28 dias */
    if((mm == 2 && bissexto && dd > 29) || (mm == 2 && !bissexto && dd > 28)){
        printf("Data Invalida \n");
        return 0;
    }

    if(bissexto) printf("O ano digitado eh bissexto! \n");
    printf("A data (%02d/%02d/%02d) eh Valida! \n",dd,mm,aa);

    return 0;
}
