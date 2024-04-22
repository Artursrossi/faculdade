#include <stdio.h>

int main(){
  double peso = 0;
  int idade = 0;
  int dosagem = 0;

  do{
    printf("Digite seu peso: ");
    scanf("%lf", &peso);
  } while (peso < 5);
  do{
    printf("Digite sua idade: ");
    scanf("%d", &idade);
  } while (idade <= 0);
  
  if(idade >= 12) peso >= 60 ? (dosagem = 1000) : (dosagem = 875);
  
  if(idade < 12){
    if(peso > 4 && peso <= 9) dosagem = 125;
    if(peso > 9 && peso <= 16) dosagem = 250;
    if(peso > 16 && peso <= 24) dosagem = 375;
    if(peso > 24 && peso <= 30) dosagem = 500;
    if(peso > 30) dosagem = 750;
  }

  // (500mg = 20 gotas), logo (1 gota = 25mg)
  printf("A quantidade ideal de gotas por dose eh de: %d \n", dosagem / 25);

  return 0;
}