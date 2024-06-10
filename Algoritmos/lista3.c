#include <stdio.h>
# include <math.h>

int main(void) {
    /*
    * ! ----------------------------------------- !
    *   Exercício 1
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 1 --- \n");
    int num1[5];
    printf("Digite cinco numeros:");
    for(int i = 0; i < 5; i++){
        scanf("%d",&num1[i]);
    }
    printf("Os quadrados dos numeros digitados sao: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", num1[i] * num1[i]);
    }
    printf("\n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 2
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 2 --- \n");
    printf("Os numeros pares entre 1 a 10 sao: ");
    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0) printf("%d ", i);
    }
    printf("\n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 3
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 3 --- \n");
    printf("Todos os numeros de 100 a 1 sao: ");
    for(int i = 100; i >= 1; i--){
        printf("%d ", i);
    }
    printf("\n");
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 4
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 4 --- \n");
    int count = 0;
    int qntPares = 0;
    printf("Os 100 primeiros pares sao: ");
    while(qntPares < 100){
        if(count % 2 == 0){
            printf("%d ", count);
            qntPares++;
        }
        count++;
    }
    printf("\n");
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 5
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 5 --- \n");
    printf("O intervalo de 120 a 300 sao: ");
    for(int i = 120; i <= 300; i++){
        printf("%d ", i);
    }
    printf("\n");
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 6
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 6 --- \n");
    int inicioIntervalo = 0;
    int finalIntervalo = 0;
    int passo = 1;
    printf("Digite o numero do inicio da contagem:");
    scanf("%d",&inicioIntervalo);
    printf("Digite o numero do final da contagem:");
    scanf("%d",&finalIntervalo);
    printf("Digite o numero de passos entre cada numero:");
    scanf("%d",&passo);
    for(int i = inicioIntervalo; i <= finalIntervalo; i += passo){
        printf("%d ", i);
    }
    printf("\n");
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 7
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 7 --- \n");
    int num2[10];
    int menor1 = 0;
    int maior1 = 0;
    printf("Digite 10 numeros:");
    for(int i = 0; i < 10; i++){
        scanf("%d", &num2[i]);
        if(i == 0){
            menor1 = num2[i];
            maior1 = num2[i];
        }
        if(num2[i] > maior1) maior1 = num2[i];
        if(num2[i] < menor1) menor1 = num2[i];
    }
    printf("O maior numero digitado eh: %d \n", maior1);
    printf("O menor numero digitado eh: %d \n", menor1);
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 8
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 8 --- \n");
    int n1 = 0;
    double resultado1 = 0;
    do{
        printf("Digite um numero n:");
        scanf("%d", &n1);
    }while(n1 <= 0);
    for(int i = 1; i <= n1; i++){
        resultado1 += 1.0 / i;
    }
    printf("O resultado eh: %.2lf \n", resultado1);
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 9
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 9 --- \n");
    double num3 = 0.0;
    do{
        printf("Digite -999 para sair\n");
        printf("Digite um numero:");
        scanf("%lf", &num3);
        if(num3 != -999) printf("O triplo do numero digitrado eh: %.2lf \n", num3 * 3);
    }while(num3 != -999);
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 10
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 10 --- \n");
    int qntNumNoIntervalo = 0;
    double tmp = 0;
    do{
        printf("Digite 0 para sair\n");
        printf("Digite um numero:");
        scanf("%lf", &tmp);
        if(tmp >= 100 && tmp <= 200) qntNumNoIntervalo++;
    }while(tmp != 0);
    printf("Foram digitados %d numeros entre 100 e 200 \n", qntNumNoIntervalo);
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 11
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 11 --- \n");
    int qntAnos = 0;
    double hZerg = 1.50;
    double hSplim = 1.30;
    while(hSplim <= hZerg){
        qntAnos++;
        hZerg += 0.02;
        hSplim += 0.03;
    }
    printf("Sera necessario %d anos para o Splim passar o Zerg no quisito tamanho \n", qntAnos);
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 12
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 12 --- \n");
    double num4;
    do{
        printf("Digite um numero:");
        scanf("%lf", &num4);
    }while(num4 <= 0);
    printf("A raiz quadrada desse numero eh: %.2lf \n", sqrt(num4));
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 13
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 13 --- \n");
    int num5;
    int fat;
    do{
        printf("Digite 1 para sair\n");
        printf("Digite um numero:");
        scanf("%d", &num5);
        fat = 1;
        if(num5 != 1){
            for(int i = 1; i <= num5; i++){
                fat = fat * i;
            }
            printf("O fatorial desse numero eh: %d \n", fat);
        }
    }while(num5 > 1);
    printf("------------------- \n\n");

    /*
     * ! ----------------------------------------- !
     *   Exercício 14
     * ! ----------------------------------------- !
     */
    printf("--- Exercicio 14 --- \n");
    int qntDigitados = 0;
    double soma = 0;
    double maior = 0;
    double menor = 0;
    double tmp2 = 0;
    do{
        printf("Digite 0 para sair \n");
        printf("Digite um numero:");
        scanf("%lf", &tmp2);
        if(tmp2 != 0){
            qntDigitados++;
            soma += tmp2;
            if(maior == 0) maior = tmp2;
            if(menor == 0) menor = tmp2;
            if(tmp2 > maior) maior = tmp2;
            if(tmp2 < menor) menor = tmp2;
        }
    }while(tmp2 != 0.0);
    printf("Foram digitados %d numeros \n", qntDigitados);
    printf("A soma dos numeros digitados eh %.2lf \n", soma);
    printf("A media aritmetica dos numeros digitados eh %.2lf \n", soma / qntDigitados);
    printf("O maior numero digitado eh %.2lf \n", maior);
    printf("O menor numero digitado eh %.2lf \n", menor);
    printf("------------------- \n\n");

    return 0;
}
