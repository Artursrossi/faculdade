#include <stdio.h>

int exercicio1(){
  int n = 0;
  do{
    printf("Digite o numero de voltas: (entre 1 e 14) \n");
    scanf("%d", &n);
  }while(n <= 0 || n >= 15);
  int melhor_volta = 0;
  float melhor_tempo = 0;
  float soma_tempos = 0;
  for(int i = 1; i <= n; i++){
    float tempo = 0;
    do{
      printf("Digite o tempo da volta %d/%d: \n", i, n);
      scanf("%f", &tempo);
    }while(tempo <= 0);
    if(i == 1 || tempo < melhor_tempo){
      melhor_tempo = tempo;
      melhor_volta = i;
    }
    soma_tempos += tempo;
  }
  printf("A melhor volta foi a volta numero %d, e o tempo dessa volta foi %.2f, e a media das %d voltas foi %.2f \n", melhor_volta, melhor_tempo, n, (soma_tempos / n));

  return 0;
}

int exercicio2(){
  int x = 0;
  do{
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &x);
  }while(x <= 0);
  int n = 0;
  do{
    printf("Digite quantos divisores deseja considerar: \n");
    scanf("%d", &n);
  }while(n <= 0);
  int soma_divisores = 0;
  int somas_efetuadas = 0;
  for(int i = 1; i <= x; i++){
    if(somas_efetuadas >= n) break;
    if(x % i == 0) {
      soma_divisores += i;
      somas_efetuadas++;
    }
  }
  printf("A soma dos %d primeiros divisores de %d eh: %d \n", n, x, soma_divisores);

  return 0;
}

int exercicio3(){
  int n_lado = 0;
  do{
    printf("Digite um numero inteiro positivo impar \n");
    scanf("%d", &n_lado);
  }while(n_lado <= 0 || n_lado % 2 == 0);
  for(int i = 1; i <= n_lado; i++){
    for(int j = 1; j <= n_lado; j++){
      if(j <= (i - 1)) continue;
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}

int exercicio4(){
  for(int i = 1; i <= 4; i++){
    int x1 = 0;
    int x2 = 0;
    printf("Conjunto de par %d/4 \n", i);
    do{
      printf("Digite o primeiro numero do par: \n");
      scanf("%d", &x1);
    }while(x1 <= 0 || x1 % 2 != 0);
    do{
      printf("Digite o segundo numero do par: \n");
      scanf("%d", &x2);
    }while(x2 <= 0 || x2 % 2 != 0);
    if(x1 == x2) {
      printf("Os dois valores digitados sao iguais \n");
      continue;
    }
    printf("O maior valor digitado eh %d \n", x1 > x2 ? x1 : x2);
  }

  return 0;
}

int exercicio5(){
  for(int i = 1; i <= 5; i++){
    int n = 0;
    do{
      printf("Digite um numero inteiro positivo (%d/5)\n", i);
      scanf("%d", &n);
    }while(n <= 0);
    int soma = 0;
    for(int i = 1; i < n; i++){
      if(n % i == 0) soma += i;
    }
    printf("A soma dos divisores de %d, exceto ele mesmo, eh: %d \n", n, soma);
  }

  return 0;
}

int exercicio6(){
  for(int i = 1; i <= 5; i++){
    float notas[3] = {0.0};
    for(int j = 1; j <= 3; j++){
      float nota = 0;
      do{
        printf("Digite a nota %d/3 do aluno %d/5: \n", j, i);
        scanf("%f", &nota);
      }while(nota < 0.0 || nota > 10.0);
      notas[j - 1] = nota;
    }
    float media = (notas[0] + (notas[1] * 2) + (notas[2] *3) + ((notas[0] + notas[1] + notas[2]) / 3)) / 7;
    printf("A media de aproveitamento do aluno %d foi %.2f \n", i, media);
  }

  return 0;
}

int exercicio7(){
  int n = 0;
  do{
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);
  }while(n <= 0);
  for(int i = 2; i <= (n / 2); i++){
    if(n % i == 0){
      printf("O numero digitado nao eh primo \n");
      return 0;
    }
  }
  printf("O numero digitado eh primo \n");

  return 0;
}

int exercicio8(){
  int count = 0;
  float soma = 0;
  printf("Digite 10 numeros, sendo o 0 para sair \n");
  while(count < 10){
    float temp = 0;
    printf("(%d/10) Digite um numero: \n", count + 1);
    scanf("%f", &temp);
    if(temp == 0.0) break;
    count ++;
    soma += temp;
  }
  printf("A media dos %d numeros digitados eh: %.2lf \n", count, (float) soma / count);

  return 0;
}

int executarExercicio(int exercicio_escolhido){
  switch(exercicio_escolhido){
    case 1: 
      exercicio1();
      break;
    case 2: 
      exercicio2();
      break;
    case 3: 
      exercicio3();
      break;
    case 4: 
      exercicio4();
      break;
    case 5: 
      exercicio5();
      break;
    case 6: 
      exercicio6();
      break;
    case 7: 
      exercicio7();
      break;
    case 8: 
      exercicio8();
      break;
  }
}

int main(){
  int numero_de_exercicios = 8;
  int exercicio_escolhido = 0;
  do{
    printf("Digite o exercicio que deseja executar (maximo = %d): \n", numero_de_exercicios);
    scanf("%d", &exercicio_escolhido);
  }while(exercicio_escolhido <= 0 || exercicio_escolhido > numero_de_exercicios);
  executarExercicio(exercicio_escolhido);
}