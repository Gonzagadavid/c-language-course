# include <stdio.h>

int main ()
{
  int valores[5];

  for(int i = 0; i < 5; i++) {
    printf("informe o %d/5 valor: ", (i + 1));
    scanf("%d", &valores[i]);
  }

  for(int i = 0; i < 5; i++) {
    printf("%d\n:", valores[i]);
  }
  
  printf("%p %p\n", &valores[0], &valores[1]);
  printf("%p", &valores);

  return 0;
}