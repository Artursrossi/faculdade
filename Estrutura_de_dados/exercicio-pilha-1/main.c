#include <stdio.h>
#include <string.h>
#include "pilha.h"

enum {
  TAMANHO_STRING = 63
};

bool string_checar_balanceamento_parenteses(char *str){
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == '(' && !pilha_push('('))return false;
    if(str[i] == ')' && !pilha_pop())return false;
  }

  if(!pilha_vazia())return false;

  return true;
}

int main(){
  char str[TAMANHO_STRING] = "";

  printf("Digite uma string de no máximo %d caracteres: \n", TAMANHO_STRING);
  fgets(str,TAMANHO_STRING,stdin);
  
  if(string_checar_balanceamento_parenteses(str)){
    printf("A string possui um balanceamento de parenteses válido. \n");
    return 0;
  }

  printf("A string não está balanceada \n");
  return 0;
}