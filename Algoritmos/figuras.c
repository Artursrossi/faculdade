#include <stdio.h>

int main(){
  int n = 0;
  do{
    printf("Digite um numero impar entre 2 e 20: ");
    scanf("%d", &n);
  }while(n % 2 == 0 || n < 2 || n > 20);
  printf("\n");

  int ni = ((n-2) * 2) + 3;
  int nj = n;
  printf("numero de linhas: %d, numero de colunas: %d \n", ni, nj);

  // Primeira figura
  printf("\n\n-----Primeira Figura-----\n");
  for(int i = 1; i <= ni; i++){
    if(i == 1 || i == ni){
      for(int j = 1; j <= nj; j++) {
        printf("#");
      }
    }

    if(i != 1 && i != ni && i % 2 == 1){
      for(int j = 1; j <= nj; j++) {
        if(j == 1 || j == nj){
          printf("#");
        }else{
          printf(" ");
        }
      }
    }

    printf("\n");
  }
  printf("-------------------------");


  // Segunda Figura
  printf("\n\n-----Segunda Figura-----\n");
  for(int i = 1; i <= ni; i++){
    if(i == 1 || i == ni){
      for(int j = 1; j <= nj; j++){
        if(j == 1 || j == nj){
          printf(" ");
        }else{
          printf("#");
        }
      }
    } else if(i % 2 == 1){
      for(int j = 1; j <= nj; j++){
        if(j == 1 || j == nj){
          printf("#");
        }else{
          printf(" ");
        }
      }
    }

    printf("\n");
  }
  printf("-------------------------");


  // Terceira Figura
  printf("\n\n-----Terceira Figura-----\n");
  int count = 1;
  for(int i = 1; i <= ni; i++){
    if(i % 2 == 1){
      for(int c = 0; c < count; c++){
        printf("#");
      }
      count++;
    }

    printf("\n");
  }
  printf("-------------------------");


  // Quarta Figura
  printf("\n\n-----Quarta Figura-----\n");
  int count2 = 1;
  for(int i = 1; i <= ni; i++){
    if(i % 2 == 1){
      int empty = nj - count2;
      int notEmpty = count2;
      for(int c = 0; c < empty; c++){
        printf(" ");
      }
      for(int c = 0; c < notEmpty; c++){
        printf("#");
      }
      count2++;
    }

    printf("\n");
  }
  printf("-------------------------");


  // Quinta Figura
  printf("\n\n-----Quinta Figura-----\n");
  int count3 = nj;
  for(int i = 1; i <= ni; i++){
    if(i % 2 == 1){
      for(int c = 0; c < count3; c++){
        printf("#");
      }
      count3--;
    }

    printf("\n");
  }
  printf("-------------------------");


  // Sexta Figura
  printf("\n\n-----Sexta Figura-----\n");
  for(int i = 1; i <= ni; i++){
    if(i % 2 == 1){
      int imid = (ni+1) /2;
      if(i == imid){
        for(int c = 0; c < nj; c++){
          printf("#");
        }
      }else{
        int midj = (nj+1) / 2;
        for(int j = 1; j <= nj; j++){
          if(j == midj){
            printf("#");
          }else{
            printf(" ");
          }
        }
      }
    }

    printf("\n");
  }
  printf("-------------------------");


  // Sétima Figura
  printf("\n\n-----Setima figura-----\n");
  int countEmpty = 1;
  for(int i = 1; i <= ni; i++){
    if(i == 1 || i == ni){
      for(int j = 1; j <= nj; j++){
        int midj = (nj+1) / 2;
        if(j == midj){
          printf("#");
        }else{
          printf(" ");
        }
      }
    }

    if(i != 1 && i != ni && i % 2 == 1){
      int midi = (ni + 1) / 2;
      int midj = (nj + 1) / 2;
      for(int j = 1; j <= nj; j++){
        if(j == (midj - countEmpty) || j == (midj + countEmpty)){
          printf("#");
        }else{
          printf(" ");
        }
      }
      if(i < midi)countEmpty++;
      if(i >= midi)countEmpty--;
    }

    printf("\n");
  }
  printf("-------------------------");

  return 0;
}
