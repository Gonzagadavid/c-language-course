# include <stdio.h>

// 6 - leia uma temperatura em graus Célsus e apresente-a convertida em 
// Fahrenheit.

int main () {
  int tempC, tempF;

  printf("digite uma temperatura em graus Célsus °C:\n");

  scanf("%d", &tempC);

  tempF = tempC * 9 / 5 + 32;

  printf("a temperatura %d°C equivale a %d°F\n", tempC, tempF);

  return 0;
}
