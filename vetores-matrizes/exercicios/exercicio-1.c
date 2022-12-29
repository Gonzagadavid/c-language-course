# include <stdio.h>
/*
1 - leia uma matriz 5 x 5. preencha com 1 a diagonal principal e com 0 os
demais elementos
*/ 
 
int main () {
  int matrix[5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if(i == j) {
        matrix[i][j] = 1;
      } else {
        matrix[i][j] = 0;
      }
    }
  }

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        printf("%d", matrix[i][j]);
      }
        printf("\n");
  }
  return 0;
}
