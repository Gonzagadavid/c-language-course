# include <stdio.h>

// 12 - leia uma distância em milhas e apresente-a convertida em quilometros

int main () {
  float distM, distK;

  printf("digite uma distância em milhas:\n");

  scanf("%f", &distM);

  distK = distM * 1.61;

  printf("a distância de %.2f mi equivale a %.2f km\n", distM, distK);

  return 0;
}
