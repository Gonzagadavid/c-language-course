# include <stdio.h>

// 18 - leia um numero positivo do usuário, e calcule e imprima a sequencia
// Fibonacci até o primeiro número superior ao numero lido

int main () {
  int limit, last = 1, sum = 0, memo = 0;

  printf("digite um numero positivo:\n");
  scanf("%d", &limit);

    printf("%d\n", sum);
    printf("%d\n", last);

  while (sum < limit) {
    sum = memo + last;
    memo = last;
    last = sum;
    printf("%d\n", sum);
  }

  return 0;
}
