#include <stdio.h>
#include <math.h>

int main(){
    /*
    * ! ----------------------------------------- !
    *   Exercício 1
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 1 --- \n");
    double numero1 = 0;
    printf("Digite um numero: ");
    scanf("%lf", &numero1);
    numero1 > 20.0 ? printf("O numero eh maior que 20, sua metada eh: %.2lf \n", numero1/2) : printf("o numero nao eh maior que 20 \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 2
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 2 --- \n");
    double numero2 = 0;
    printf("Digite um numero: ");
    scanf("%lf", &numero2);
    if (numero2 == 0) printf("O numero digitado eh nulo \n");
    if (numero2 > 0) printf("O numero digitado eh positivo \n");
    if (numero2 < 0) printf("O numero digitado eh negativo \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 3
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 3 --- \n");
    int numero3 = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero3);
    numero3 % 3 == 0 ? printf("O numero digitado eh multiplo de 3 \n") : printf("O numero digitado nao eh multiplo de 3 \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 4
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 4 --- \n");
    double salarioBruto = 0;
    double valorPrestacao = 0;
    do{
        printf("Digite o salario bruto: ");
        scanf("%lf", &salarioBruto);
    } while (salarioBruto <= 0);
    do{
        printf("Digite o valor da prestacao: ");
        scanf("%lf", &valorPrestacao);
    } while (salarioBruto <= 0);
    valorPrestacao > salarioBruto * 0.3 ? printf("Nao eh possivel efetuar o emprestimo, o valor da prestacao ultrapassa 30%% do salario bruto \n") : printf("Eh possivel efetuar o emprestimo!!! \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 5
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 5 --- \n");
    int numero4 = 0;
    do{
        printf("Digite um numero inteiro de tres digitos: ");
        scanf("%d", &numero4);
    }while(numero4 < 100 || numero4 > 999);
    numero4 % 200 < 100 ? printf("A casa da centena do numero digitado eh par \n") : printf("A casa da centena do numero digitado eh impar \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 6
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 6 --- \n");
    double numero5 = 0;
    printf("Digite um numero: ");
    scanf("%lf", &numero5);
    if (numero5 == 20.0) printf("O numero digitado eh igual a 20 \n");
    if (numero5 > 20.0) printf("O numero digitado eh maior que 20 \n");
    if (numero5 < 20.0) printf("O numero digitado eh menor que 20 \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 7
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 7 --- \n");
    double numero6 = 0;
    double numero7 = 0;
    printf("Digite um numero: ");
    scanf("%lf", &numero6);
    printf("Digite outro numero: ");
    scanf("%lf", &numero7);
    numero6 == numero7 ? printf("Os dois numeros digitados sao iguais \n") : printf("Os dois numeros digitados sao diferentes \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 8
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 8 --- \n");
    double numero8 = 0;
    double numero9 = 0;
    printf("Digite um numero: ");
    scanf("%lf", &numero8);
    printf("Digite outro numero: ");
    scanf("%lf", &numero9);
    if(numero8 == numero9) printf("Os numeros digitados sao iguais \n");
    if(numero8 != numero9) printf("O maior numero digitado eh %.2lf \n", numero8 > numero9 ? numero8 : numero9);
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 9
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 9 --- \n");
    double numero10 = 0;
    double numero11 = 0;
    printf("Digite um numero: ");
    scanf("%lf", &numero10);
    printf("Digite outro numero: ");
    scanf("%lf", &numero11);
    double maior1 = numero10 > numero11 ? numero10 : numero11;
    double menor1 = numero10 < numero11 ? numero10 : numero11;
    printf("Os numeros digitados em ordem descrescente eh: %.2lf , %.2lf \n", maior1, menor1);
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 10
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 10 --- \n");
    double numeros1[3];
    int i1;
    double maior2 = 0;
    for(i1 = 0; i1 < 3; i1++){
      printf("Digite um numero: ");
      scanf("%lf", &numeros1[i1]);
      if(i1 == 0) maior2 = numeros1[i1];
      if(numeros1[i1] > maior2) maior2 = numeros1[i1];
    }
    printf("O maior numero eh %.2lf \n", maior2);
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 11
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 11 --- \n");
    double numeros2[3];
    int i2;
    double maior3 = 0;
    double meio1 = 0;
    double menor2 = 0;
    double soma1 = 0;
    for(i2 = 0; i2 < 3; i2++){
      printf("Digite um numero: ");
      scanf("%lf", &numeros2[i2]);
      if(i2 == 0) {
        maior3 = numeros2[i2];
        menor2 = numeros2[i2];
      }
      if(numeros2[i2] > maior3) maior3 = numeros2[i2];
      if(numeros2[i2] < menor2) menor2 = numeros2[i2];
      soma1 += numeros2[i2];
    }
    meio1 = soma1 - (maior3 + menor2);
    numeros2[0] = menor2;
    numeros2[1] = meio1;
    numeros2[2] = maior3;
    printf("Os numeros digitados em ordem crescente eh: %.2lf , %.2lf , %.2lf \n", menor2, meio1, maior3);
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 12
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 12 --- \n");
    double numeros3[3];
    int i3;
    double maior4 = 0;
    double intermediario1 = 0;
    double menor3 = 0;
    double soma2 = 0;
    for(i3 = 0; i3 < 3; i3++){
      printf("Digite um numero: ");
      scanf("%lf", &numeros3[i3]);
      if(i3 == 0) {
        maior4 = numeros3[i3];
        menor3 = numeros3[i3];
      }
      if(numeros3[i3] > maior4) maior4 = numeros3[i3];
      if(numeros3[i3] < menor3) menor3 = numeros3[i3];
      soma2 += numeros3[i3];
    }
    intermediario1 = soma2 - (maior4 + menor3);
    numeros3[0] = menor3;
    numeros3[1] = intermediario1;
    numeros3[2] = maior4;
    printf("Valor do maior termo: %.2lf \n", maior4);
    printf("Valor do menor termo: %.2lf \n", menor3);
    printf("Valor do termo intermediario: %.2lf \n", intermediario1);
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 13
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 13 --- \n");
    double numeros4[5];
    int i4;
    double maior5 = 0;
    double menor4 = 0;
    for(i4 = 0; i4 < 5; i4++){
      printf("Digite um numero: ");
      scanf("%lf", &numeros4[i4]);
      if(i4 == 0) {
        maior5 = numeros4[i4];
        menor4 = numeros4[i4];
      }
      if(numeros4[i4] > maior5) maior5 = numeros4[i4];
      if(numeros4[i4] < menor4) menor4 = numeros4[i4];
    }
    printf("Valor do maior termo: %.2lf \n", maior5);
    printf("Valor do menor termo: %.2lf \n", menor4);
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 14
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 14 --- \n");
    double lado1 = 0;
    double lado2 = 0;
    double lado3 = 0;
    do{
        printf("Digite o primeiro lado: ");
        scanf("%lf", &lado1);
    } while (lado1 <= 0);
    do{
        printf("Digite o segundo lado: ");
        scanf("%lf", &lado2);
    } while (lado2 <= 0);
    do{
        printf("Digite o terceiro lado: ");
        scanf("%lf", &lado3);
    } while (lado3 <= 0);
    (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) ? printf("Os numeros digitados podem representar os lados de um triangulo! \n") : printf("Os numeros digitados nao podem representar os lados de um triangulo \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 15
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 15 --- \n");
    double nota1 = 0;
    double nota2 = 0;
    double nota3 = 0;
    do{
        printf("Digite a primeira nota: ");
        scanf("%lf", &nota1);
    } while (nota1 <= 0);
    do{
        printf("Digite a segunda nota: ");
        scanf("%lf", &nota2);
    } while (nota2 <= 0);
    do{
        printf("Digite a terceira nota: ");
        scanf("%lf", &nota3);
    } while (nota3 <= 0);
    double media = (nota1 + nota2 + nota3) / 3.0;
    printf("A media das notas eh: %.2lf ", media);
    media >= 7.0 ? printf("Portanto o resultado eh aprovado! \n") : printf(".Portanto o resultado eh reprovado \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 16
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 16 --- \n");
    int idade = 0;
    do{
        printf("Digite sua idade: ");
        scanf("%d", &idade);    
    }while(idade <= 0);
    if(idade < 5) printf("Nao ha categorias para a sua idade \n");
    if(idade >= 5 && idade <= 7) printf("Sua categoria eh: Infantil A \n");
    if(idade > 7 && idade <= 10) printf("Sua categoria eh: Infantil B \n");
    if(idade > 10 && idade <= 13) printf("Sua categoria eh: Juvenil A \n");
    if(idade > 13 && idade <= 17) printf("Sua categoria eh: Juvenil B \n");
    if(idade > 17) printf("Sua categoria eh: Sênior \n");
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 17
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 17 --- \n");
    double a = 0;
    double b = 0;
    double c = 0;
    printf("Digite o primeiro termo da equacao: ");
    scanf("%lf", &a);
    printf("Digite o segundo termo da equacao: ");
    scanf("%lf", &b);
    printf("Digite o terceiro termo da equacao: ");
    scanf("%lf", &c);
    double formulaDeBhaskaraRaiz1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    double formulaDeBhaskaraRaiz2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
    printf("As raizes dessa equacao eh: %.2lf e %.2lf \n", formulaDeBhaskaraRaiz1, formulaDeBhaskaraRaiz2);
    printf("------------------- \n\n");

    /*
    * ! ----------------------------------------- !
    *   Exercício 18
    * ! ----------------------------------------- !
    */
    printf("--- Exercicio 18 --- \n");
    double pontuacaoJogadores[3];
    double maiorPontuacao = 0;
    double meioPontuacao = 0;
    double menorPontuacao = 0;
    double somaDasPontuacoes = 0;
    int i6 = 0;
    for(i6 = 0; i6 < 3; i6++){
      do{
        printf("Digite a pontuacao do Jogador numero %d: ", i6 + 1);
        scanf("%lf", &pontuacaoJogadores[i6]);
      } while (pontuacaoJogadores[i6] <= 0);
      if(i6 == 0) {
        maiorPontuacao = pontuacaoJogadores[i6];
        menorPontuacao = pontuacaoJogadores[i6];
      }
      if(pontuacaoJogadores[i6] > maiorPontuacao) maiorPontuacao = pontuacaoJogadores[i6];
      if(pontuacaoJogadores[i6] < menorPontuacao) menorPontuacao = pontuacaoJogadores[i6];
      somaDasPontuacoes += pontuacaoJogadores[i6];
    }
    meioPontuacao = somaDasPontuacoes - (maiorPontuacao + menorPontuacao);
    pontuacaoJogadores[0] = menorPontuacao;
    pontuacaoJogadores[1] = meioPontuacao;
    pontuacaoJogadores[2] = maiorPontuacao;
    printf("A pontuacao em ordem crescente eh: %.2lf , %.2lf , %.2lf \n", menorPontuacao, meioPontuacao, maiorPontuacao);
    somaDasPontuacoes > 100 ? printf("A media de pontos eh: %.2lf \n", somaDasPontuacoes / 3.0) : printf("desclassificada \n");
    printf("------------------- \n\n");

    return 0;
}