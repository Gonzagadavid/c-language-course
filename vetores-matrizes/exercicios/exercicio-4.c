# include <stdio.h>
/*
4 - leia uma matriz 3 x 3. Calacule a soma dos que estão na diagonal principal
*/ 
 
int main () {
  int matrix[3][3], sum = 0;


  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("digite o %dº numero da %dª linha\n", j + 1, i + 1);
        scanf("%d", &matrix[i][j]);
    }
  }
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if(i == j) {
       sum = sum + matrix[i][j];
      }
    }
  }

  printf("resultado da soma da diagonal principal é %d\n", sum);
  return 0;
}