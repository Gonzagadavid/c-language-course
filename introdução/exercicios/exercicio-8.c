# include <stdio.h>

// 7 - leia uma temperatura em graus Kelvin e apresente-a convertida em 
// Célsus.

int main () {
  int tempK, tempC;

  printf("digite uma temperatura em graus Kelvin °K:\n");

  scanf("%d", &tempK);

  tempC = tempK - 273.15;

  printf("a temperatura %d°K equivale a %d°C\n", tempK, tempC);

  return 0;
}
