#include <stdio.h>
#include <math.h>

const int TRUE = 1;
const int FALSE = 0;

int bhaskara(int a,int b,int c,float *x1,float *x2);

int main(){
  int a,b,c;
  float x1,x2;

  printf("Algoritmo para resolver equacoes de segundo grau! \n");
  printf("Digite o valor de a: (ax²+bx+c)\n");
  scanf("%d", &a);
  printf("Digite o valor de b: (%dx²+bx+c)\n",a);
  scanf("%d", &b);
  printf("Digite o valor de c: (%dx²+%dx+c)\n",a,b);
  scanf("%d", &c);
  printf("Resolvendo a equacao: %dx²+%dx+%d \n",a,b,c);

  if(!bhaskara(a,b,c,&x1,&x2)){
    printf("A equacao %dx²+%dx+%d nao possui raizes no intervalo dos numeros reais \n",a,b,c);
    return 0;
  }

  x1 == x2 ? printf("A equacao %dx²+%dx+%d possui uma raiz real, sendo ela: %.2f \n",a,b,c,x1) 
           : printf("A equacao %dx²+%dx+%d possui duas raizes reais, sendo elas: %.2f e %.2f \n",a,b,c,x1,x2);
  return 0;
}

int bhaskara(int a,int b,int c,float *x1,float *x2){
  int delta = (b*b) - (4*a*c);
  *x1 = ((-b + sqrt(delta)) / (2*a));
  *x2 = ((-b - sqrt(delta)) / (2*a));

  if(delta < 0) return FALSE;
  return TRUE;
};