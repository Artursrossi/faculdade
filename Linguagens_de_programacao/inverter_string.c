#include <stdio.h>
#include <string.h>
#define T 31 

void inverterString(char *str);

int main(){
  char str[T] = "String para inverter";

  fgets(str,T,stdin);
  inverterString(str);
  printf("A palavra invertida eh: %s\n", str);

  return 0;
}

void inverterString(char *str){
  char temp;
  for(int i = 0; i < strlen(str)/2; i++){
    temp = str[i];
    str[i] = str[strlen(str) -1 -i];
    str[strlen(str) -1 -i] = temp;
  }
}