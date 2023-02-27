#include <stdio.h>

/*
Faça um programa que leia dois valores inteiros e chame uma
função que receba estes 2 valores de entrada e retorne o maior
valor na promeira variavel e o menor valor na segunda.
Escreva o conteúdo das 2 variáveis em tela
*/

void sortInt(int A, int B, int* bigger, int* smaller);
void sortInt(int A, int B, int* bigger, int* smaller) {
  if(A > B) {
    *(bigger) = A;
    *(smaller) = B;
  } else {
    *(bigger) = B;
    *(smaller) = A;
  }
}

int main()
{
  int A;
  int B;
  int bigger;
  int smaller;


  printf("Escreva o primeiro numero inteiro:\n");
  scanf("%d", &A);
  printf("Escreva o segundo numero inteiro:\n");
  scanf("%d", &B);

  sortInt(A, B, &bigger, &smaller);

  printf("O maior valor é %d e o menor é %d\n", bigger, smaller);

  return 0;
}
