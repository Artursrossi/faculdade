#include <stdio.h>

int main() {
    int dd = 0;
    int mm = 0;
    int aa = 0;
    int bisexto = 0;

    do{
        printf("Digite o dia: ");
        scanf("%d", &dd);
    }
    while(dd <= 0 || dd > 31);

    do{
        printf("Digite o mes: ");
        scanf("%d", &mm);
    }
    while(mm <= 0 || mm > 12);

    do{
        printf("Digite o ano: ");
        scanf("%d", &aa);
    }
    while(aa <= 0);
    if((aa % 100 != 0 && aa % 4 == 0) || aa % 400 == 0) bisexto = 1;

    if(mm == 4 || mm == 6 || mm == 9 || mm == 11){
        if(dd > 30) {
            printf("Data Invalida.");
            return 0;
        }
    }

    if(mm == 2){
        if(!bisexto && dd > 28) {
            printf("Data Invalida.");
            return 0;
        }
        if(bisexto && dd > 29) {
            printf("Data Invalida.");
            return 0;
        }
    }

    if(bisexto) printf("O ano digitado eh bisexto! \n");
    printf("Data Valida: %02d / %02d / %02d",dd,mm,aa);

    return 0;
}
