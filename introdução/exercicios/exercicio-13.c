# include <stdio.h>

// 13 - leia uma distância em quilometros apresente-a convertida em milhas

int main () {
  float distK, distM;

  printf("digite uma distância em quilometros:\n");

  scanf("%f", &distK);

  distM = distK / 1.61;

  printf("a distância de %.2f km equivale a %.2f mi\n", distK, distM);

  return 0;
}
