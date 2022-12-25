# include <stdio.h>

// 5 - leia um número real e imprima a quinta parte deste número

int main () {
  float num, result;

  printf("digite um número real:\n");

  scanf("%f", &num);

  result = num / 5;

  printf("a quinta parte de %f é %f\n", num, result);

  return 0;
}
