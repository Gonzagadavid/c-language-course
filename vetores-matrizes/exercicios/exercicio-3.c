# include <stdio.h>
/*
3 - faça um programa que permita ao usuario entrar com uma matriz de 3 x 3
numeros inteiros. Em seguida, gere um array unidimensional com o produto dos 
numeros de cada coluna da matriz e mostrar na tela esse array 
*/ 
 
int main () {
  int matrix[3][3], result[3], sum;


  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("digite o %dº numero da %dª linha\n", j + 1, i + 1);
        scanf("%d", &matrix[i][j]);
    }
  }
  
  for (int i = 0; i < 3; i++) {
    sum = 0;
    for (int j = 0; j < 3; j++) {
      sum = sum * matrix[j][i];
    }
    result[i] = sum;
  }

  printf("resultado do produto das colunas:\n");

  for (int j = 0; j < 3; j++) {
    printf("%d ", result[j]);
  }
  printf("\n");
  return 0;
}
