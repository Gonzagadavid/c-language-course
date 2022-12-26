# include <stdio.h>

// 16 - leia um valor de comprimento em polegadas e apresente-o
// convertido em centimetros

int main () {
  float pol, cm;

  printf("digite o valor de um comprimento em polegadas:\n");

  scanf("%f", &pol);

  cm = pol * 2.54;

  printf("o valor de %.2f\" equivale a %.2fcm\n", pol, cm);

  return 0;
}
