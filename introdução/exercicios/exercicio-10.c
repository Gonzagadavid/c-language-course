# include <stdio.h>

// 10 - leia uma velicidade em km/h e apresente-a convertida em m/s

int main () {
  float veloK, veloM;

  printf("digite uma velocidade em quilometros por hora km/h:\n");

  scanf("%f", &veloK);

  veloM = veloK / 3.6;

  printf("a velocidade de %f km/h equivale a %f m/s\n", veloK, veloM);

  return 0;
}
