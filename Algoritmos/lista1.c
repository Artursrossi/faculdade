#include <stdio.h>

int main(){
  double pi = 3.14159265359;
  
  /* 
  * ! ----------------------------------------- !
  *   Exercício 1 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 1 --- \n");
  printf("Artur Schincariol Rossi \n");
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 2 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 2 --- \n");
  printf("O Produto entre 28 e 43 eh: %d \n", 28 * 43);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 3 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 3 --- \n");
  printf("A media aritmetica entre 8,9,7 eh: %.2f \n", (8.0 + 9.0 + 7.0) / 3.0);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 4 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 4 --- \n");
  int numero1 = 0;
  int numero2 = 0;
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero1);
  printf("Digite mais um numero inteiro: ");
  scanf("%d", &numero2);
  printf("Os numeros escolhidos foram: %d e %d \n", numero1, numero2);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 5 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 5 --- \n");
  int numero3 = 0;
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero3);
  printf("Seu Antecessor eh %d \n", numero3 >= 0 ? numero3 - 1 : numero3 + 1);
  printf("Seu Sucessor eh %d \n", numero3 >= 0 ? numero3 + 1 : numero3 - 1);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 6 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 6 --- \n");
  int numero4 = 0;
  int numero5 = 0;
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero4);
  printf("Digite mais um numero inteiro: ");
  scanf("%d", &numero5);
  printf("A soma desses dois numeros eh: %d \n", numero4 + numero5);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 7 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 7 --- \n");
  double numero6 = 0;
  printf("Digite um numero: ");
  scanf("%lf", &numero6);
  printf("Sua terca parte eh: %.2lf \n", numero6 / 3.0);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 8 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 8 --- \n");
  double numero7 = 0;
  double numero8 = 0;
  printf("Digite um numero: ");
  scanf("%lf", &numero7);
  printf("Digite mais um numero: ");
  scanf("%lf", &numero8);
  printf("A media aritmetica desses numeros eh: %.2lf \n", (numero7 + numero8) / 2);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 9 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 9 --- \n");
  double saldoEmReais = 0;
  do{
    printf("Digite o seu saldo em Reais: ");
    scanf("%lf", &saldoEmReais);
  }while(saldoEmReais <= 0);
  printf("Seu novo saldo eh: R$ %.2lf Reais (rendimento de 3,5%%) \n", saldoEmReais * 1.035);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 10 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 10 --- \n");
  double raioCirculoEmMetros = 0;
  do{
    printf("Digite o raio (em metros) do circulo: ");
    scanf("%lf", &raioCirculoEmMetros);
  }while(raioCirculoEmMetros <= 0);
  printf("Perimetro: %.2lf metros \n", 2.0 * pi * raioCirculoEmMetros);
  printf("Area: %.2lf metros quadrados \n", pi * (raioCirculoEmMetros * raioCirculoEmMetros));
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 11 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 11 --- \n");
  double salarioMinimoEmReais = 0;
  do{
    printf("Digite o valor (em Reais) de um salario minimo: ");
    scanf("%lf", &salarioMinimoEmReais);
  }while(salarioMinimoEmReais <= 0);

  double valorGastoDeQuilowatts = 0;
  do{
    printf("Quantos Quilowatts voce gastou nesse mes?: ");
    scanf("%lf", &valorGastoDeQuilowatts);
  }while(valorGastoDeQuilowatts <= 0);

  double custoQuilowattEmReais = (salarioMinimoEmReais / 7) / 100;
  printf("Valor de um Quilowatt: R$ %.2lf Reais \n", custoQuilowattEmReais);
  printf("Valor sob o quanto voce gastou: R$ %.2lf Reais \n", custoQuilowattEmReais * valorGastoDeQuilowatts);
  printf("Valor sob o quanto voce gastou (com disconto de 10%%): R$ %.2lf Reais \n", custoQuilowattEmReais * valorGastoDeQuilowatts * 0.9);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 12 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 12 --- \n");
  double valorProduto = 0;
  do{
    printf("Digite o valor (em Reais) do produto: ");
    scanf("%lf", &valorProduto);
  }while(valorProduto <= 0);

  int porcentagemDeDesconto = 0;
  do{
    printf("Digite a porcentagem de desconto que deseja atribuir: ");
    scanf("%d", &porcentagemDeDesconto);
  }while(porcentagemDeDesconto < 0 || porcentagemDeDesconto > 100);

  double valorFinalComDesconto = valorProduto * (1.00 - (porcentagemDeDesconto / 100.00));
  printf("O valor final (ja com o desconto) eh: %lf \n", valorFinalComDesconto);
  printf("------------------- \n\n");
  
  /* 
  * ! ----------------------------------------- !
  *   Exercício 13 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 13 --- \n");
  int segundosDeEntrada = 0;
  do{
    printf("Digite um numero em segundos: ");
    scanf("%d", &segundosDeEntrada);
  }while(segundosDeEntrada <= 0);

  int restoSegundos = segundosDeEntrada;
  int restoMinutos = 0;
  int restoHoras = 0;
  int restoDias = 0;

  while(restoSegundos >= 60 || restoMinutos >= 60 || restoHoras >= 24){
    // transformar 60 segundos em 1 minuto
    if(restoSegundos >= 60){
      restoSegundos -= 60;
      restoMinutos += 1;
    }

    // transformar 60 minutos em 1 hora
    if(restoMinutos >= 60){
      restoMinutos -= 60;
      restoHoras += 1;
    }

    // transformar 24 horas em 1 dia
    if(restoHoras >= 24){
      restoHoras -= 24;
      restoDias += 1;
    }
  }
  printf("Esse numero formatado correponde a %d dias, %d horas, %d minutos e %d segundos \n", restoDias, restoHoras, restoMinutos, restoSegundos);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 14 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 14 --- \n");
  int aulasDadas = 0;
  do{
    printf("Digite o numero de aulas dadas: ");
    scanf("%d", &aulasDadas);
  }while(aulasDadas < 0);

  double valorAulaEmReais = 0;
  do{
    printf("Digite valor em reais recebido de cada aula: ");
    scanf("%lf", &valorAulaEmReais);
  }while(valorAulaEmReais <= 0);

  double percentualDescontoINSS = 0; 
  do{
    printf("Digite o percentual de desconto do INSS: ");
    scanf("%lf", &percentualDescontoINSS);
  }while(percentualDescontoINSS < 0 || percentualDescontoINSS > 100);

  printf("O salario liquido eh: R$ %.2lf Reais \n", aulasDadas * valorAulaEmReais * ((100 - percentualDescontoINSS) / 100));
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 15 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 15 --- \n");
  double alturaCilindroEmMetros = 0;
  double raioCilindroEmMetros = 0;

  do{
    printf("Digite a altura (em metros) do cilindro: ");
    scanf("%lf", &alturaCilindroEmMetros);
  }while(alturaCilindroEmMetros <= 0);

  do{
    printf("Digite o raio (em metros) do cilindro: ");
    scanf("%lf", &raioCilindroEmMetros);
  }while(raioCilindroEmMetros <= 0);

  printf("O volume desse cilindro eh: %.2lf metros cubicos \n", pi * (raioCilindroEmMetros * raioCilindroEmMetros) * alturaCilindroEmMetros);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 16 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 16 --- \n");
  int tempoEmSegundos = 0;
  double velocidadeMediaEmKmPorHora = 0;

  do{
    printf("Digite o tempo (em segundos) que a viagem durou: ");
    scanf("%d", &tempoEmSegundos);
  }while(tempoEmSegundos <= 0);

  do{
    printf("Digite a velocidade media da viagem (em kilometros por hora): ");
    scanf("%lf", &velocidadeMediaEmKmPorHora);
  }while(velocidadeMediaEmKmPorHora <= 0);

  double velocidadeMediaEmMetrosPorSegundo = velocidadeMediaEmKmPorHora / 3.6;

  printf("A distancia percorrida foi: %.0lf metros, ou seja, %.0lf kilometros \n", tempoEmSegundos * velocidadeMediaEmMetrosPorSegundo, tempoEmSegundos * velocidadeMediaEmMetrosPorSegundo / 1000);
  printf("A quantia de litros de gasolina consumido foi: %.2lf litros \n", (tempoEmSegundos * velocidadeMediaEmMetrosPorSegundo / 1000) / 12);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 17 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 17 --- \n");
  double valorDaPrestacaoEmReais = 0;
  double taxaDiariaPrestacaoEmPorcentagem = 0;
  int tempoPrestacaoEmDias = 0;

  do{
    printf("Digite o valor (em Reais) inicial da prestacao: ");
    scanf("%lf", &valorDaPrestacaoEmReais);
  }while(valorDaPrestacaoEmReais <= 0);

  do{
    printf("Digite a taxa (em porcentagem) da prestacao: ");
    scanf("%lf", &taxaDiariaPrestacaoEmPorcentagem);
  }while(taxaDiariaPrestacaoEmPorcentagem <= 0);

  do{
    printf("Digite o numero de dias de atraso da prestacao: ");
    scanf("%d", &tempoPrestacaoEmDias);
  }while(tempoPrestacaoEmDias <= 0);

  double valorFinalPrestacao = valorDaPrestacaoEmReais + (valorDaPrestacaoEmReais * (taxaDiariaPrestacaoEmPorcentagem / 100) * tempoPrestacaoEmDias);

  printf("O valor final da prestacao eh: R$ %.2lf Reais \n", valorFinalPrestacao);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 18 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 18 --- \n");
  int numero9 = 0;
  int numero10 = 0;
  printf("Digite um numero inteiro: ");
  scanf("%d", &numero9);
  printf("Digite mais um numero inteiro: ");
  scanf("%d", &numero10);
 
  int numeroTemporario = numero10;
  numero10 = numero9;
  numero9 = numeroTemporario;
  numeroTemporario = 0;

  printf("Os numeros escolhidos foram respectivamente: %d e %d \n", numero10, numero9);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 19 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 19 --- \n");
  double numerador = 0;
  double denominador = 0;
  printf("Digite o numerador da fracao: ");
  scanf("%lf", &numerador);
  printf("Digite o denominador da fracao: ");
  scanf("%lf", &denominador);
  printf("O resultado da fracao eh: %.2lf \n", numerador / denominador);
  printf("------------------- \n\n");

  /* 
  * ! ----------------------------------------- !
  *   Exercício 20 
  * ! ----------------------------------------- !
  */
  printf("--- Exercicio 20 --- \n");
  double valorDaConta = 0;
  do{
    printf("Digite o valor (em Reais) da conta: ");
    scanf("%lf", &valorDaConta);
  }while(valorDaConta <= 0);

  printf("Valor inicial da conta: R$ %.2lf Reais \n", valorDaConta);
  printf("Gorjeta recebida pelo garcom: R$ %.2lf Reais \n", valorDaConta * 0.1);
  printf("Valor total da conta (ja com os 10%% do garcom): R$ %.2lf Reais \n", valorDaConta * 1.1);
  printf("------------------- \n\n");

  return 0;
}