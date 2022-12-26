# include <stdio.h>

// 14 - leia um ângulo em graus e apresente-o como radiano

# define PI 3.14

int main () {
  int angG, angR;

  printf("digite  um ângulo em graus:\n");

  scanf("%d", &angG);

  angR = angG * PI / 180;

  printf("o ângulo de %d° equivale a %d rad\n", angG, angR);

  return 0;
}
