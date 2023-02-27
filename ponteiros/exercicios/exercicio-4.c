#include <stdio.h>
/*
Faça um programa que leia 2 valores inteiros e chame uma função
que receba estas 2 variaveis e troque o seu conteudo, ou seja,
esta função é chamada passando duas variavei A e B por exemplo e
após a execução da função. A conterá o valor de B e B o terá
o valor de A
*/
void changeValue(int* A, int* B);


void changeValue(int* A,  int* B) {
  int memo = *(A);
  *(A) = *(B);
  *(B) = memo;
}

int main() 
{
  int A = 10;
  int B = 30;

  printf("before: A = %d e B = %d\n", A, B);

  changeValue(&A, &B); 
  
  printf("after: A = %d e B = %d\n", A, B);
  return 0;
}