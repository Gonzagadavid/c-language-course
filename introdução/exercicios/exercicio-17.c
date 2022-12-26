# include <stdio.h>

// 17 - leia um valor de comprimento em centimetros e apresente-o
// convertido em polegadas

int main () {
  float pol, cm;

  printf("digite o valor de um comprimento em centimetros:\n");

  scanf("%f", &cm);

  pol = cm / 2.54;

  printf("o valor de %.2fcm equivale a %.2f\"\n", cm, pol);

  return 0;
}
