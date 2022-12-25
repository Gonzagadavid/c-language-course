# include <stdio.h>

// 3 - Peça ao usuário para digitar três valores 
// inteiros e imprima a soma deles


int main () {
  int num1, num2, num3, sum;

  printf("digite o primeiro número inteiro:\n");
  scanf("%d", &num1);
  printf("digite o segundo número inteiro:\n");
  scanf("%d", &num2);
  printf("digite o terceiro número inteiro:\n");
  scanf("%d", &num3);

  sum = num1 + num2 + num3;
  printf("a soma dos numeros digitado é %d\n", sum);

  return 0;
}
