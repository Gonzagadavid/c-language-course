#include <stdio.h>


void main () {
  int valor = 2;
  printf("valor vale %d\n", valor);

  // deslocamento de bits para esquerda
  valor = valor << 2;
  printf("valor vale %d\n", valor);

  valor = 2;
  // deslocamento de bit para direita
  valor = valor >> 1;
  printf("valor vale %d\n", valor);
  
  valor = 2;
  // negação
  valor = ~valor;
  printf("valor vale %d\n", valor);


}