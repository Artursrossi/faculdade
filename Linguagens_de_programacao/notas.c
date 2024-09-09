#include <stdio.h>

#define T_NOTAS 2
#define T_ALUNOS 3
#define T_SEMESTRES 2

int main(){
  /* Organizar notas em semestres e alunos, utilizando matriz */
  float notas[T_SEMESTRES][T_ALUNOS][T_NOTAS] = {0};
  float media_aluno = 0;

  /* Entradas do usuário */
  for(int k = 0; k < T_SEMESTRES; k++){
    for(int i = 0; i < T_ALUNOS; i++){
      for(int j = 0; j < T_NOTAS; j++){
        do{
          printf("Digite a nota %d do aluno %d, no semestre: %d\n", j+1, i+1, k+1);
          scanf("%f", &notas[k][i][j]);
        }while(notas[k][i][j] < 0 || notas[k][i][j] > 10);
      }
    }
  }

  /* Obter a média aritmética de cada aluno */
  for(int k = 0; k < T_SEMESTRES; k++){
    for(int i = 0; i < T_ALUNOS; i++){
      media_aluno = 0;
      for(int j = 0; j < T_NOTAS; j++){
        media_aluno += notas[k][i][j];
      }
      printf("A média aritmética do aluno %d, no semestre %d foi: %.2f\n", i+1, k+1, media_aluno/T_NOTAS);
    }
  }

  return 0;
}