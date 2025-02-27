#ifndef PILHA_H
#define PILHA_H
#include<stdbool.h>

/* Constantes */
enum {
  PILHA_TAMANHO = 31
};

/* Variáveis */
extern char pilha[PILHA_TAMANHO];
extern int pilha_posicao;

/* Protótipos */
bool pilha_vazia();
bool pilha_cheia();
bool pilha_push(char valor);
bool pilha_pop();

#endif //PILHA_H
