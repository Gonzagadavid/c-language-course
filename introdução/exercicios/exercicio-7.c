# include <stdio.h>

// 7 - leia uma temperatura em graus Fahrenheit e apresente-a convertida em 
// Célsus.

int main () {
  int tempC, tempF;

  printf("digite uma temperatura em graus Fahrenheit °F:\n");

  scanf("%d", &tempF);

  tempC = 5 * (tempF - 32) / 9;

  printf("a temperatura %d°F equivale a %d°C\n", tempF, tempC);

  return 0;
}
