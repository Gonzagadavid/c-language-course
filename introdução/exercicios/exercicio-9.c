# include <stdio.h>

// 6 - leia uma temperatura em graus Célsus e apresente-a convertida em 
// Kelvin.

int main () {
  int tempC, tempK;

  printf("digite uma temperatura em graus Célsus °C:\n");

  scanf("%d", &tempC);

  tempK = tempC + 273.15;

  printf("a temperatura %d°C equivale a %d°K\n", tempC, tempK);

  return 0;
}