# include <stdio.h>

// 11 - leia uma velicidade em m/s e apresente-a convertida em k/h

int main () {
  float veloM, veloK;

  printf("digite uma velocidade em metros por segundo m/s:\n");

  scanf("%f", &veloM);

  veloK = veloM * 3.6;

  printf("a velocidade de %.2f m/s equivale a %.2f k/h\n", veloM, veloK);

  return 0;
}
