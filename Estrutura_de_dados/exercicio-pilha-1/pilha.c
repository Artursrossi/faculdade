#include "pilha.h"

/* Variáveis */
char pilha[PILHA_TAMANHO];
int pilha_posicao = 0;

/* Funções */
bool pilha_vazia() {
  return pilha_posicao == 0;
}

bool pilha_cheia() {
  return pilha_posicao == PILHA_TAMANHO;
}

bool pilha_push(char valor) {
  if (pilha_cheia()) return false;
    
  pilha[pilha_posicao] = valor;
  pilha_posicao++;
  return true;
}

bool pilha_pop() {
  if (pilha_vazia()) return false;
    
  pilha_posicao--;
  return true;
}