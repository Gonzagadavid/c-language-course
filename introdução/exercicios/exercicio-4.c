# include <stdio.h>

// 4 - leia um numero real e imprima o resultado do quadrado desse número


int main () {
  float num, pow;

  printf("digite um número real:\n");

  scanf("%f", &num);

  pow = num * num;

  printf("o quadrado de %f é %f\n", num, pow);

  return 0;
}
