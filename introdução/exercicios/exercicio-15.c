# include <stdio.h>

// 15 - leia um ângulo em radiano e apresente-o como graus

# define PI 3.14

int main () {
  int angR, angG;

  printf("digite  um ângulo em radiano:\n");

  scanf("%d", &angR);

  angG = angR * 180 / PI;

  printf("o ângulo de %d rad equivale a %d°\n", angR, angG);

  return 0;
}
