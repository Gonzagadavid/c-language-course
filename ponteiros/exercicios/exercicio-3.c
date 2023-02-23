#include <stdio.h>

// Escreva um programa que contenha duas variáveis inteiras.
// compare seus endereços e exiba o conteúdo do maior endereço

int main () 
{
  int variable_a;
  int variable_b;
  int big_number;

  printf("Escreva um valor inteiro:\n");
  scanf("%d", &variable_a);

  printf("Escreva outro valor inteiro:\n");
  scanf("%d", &variable_b);

 if (&variable_a > &variable_b) {
   big_number = variable_a;
 } else {
   big_number = variable_b;
 }

printf("o endereço de memoria maior é %d\n", big_number);

printf("a = %d, b = %d, big = %d\n", variable_a, variable_b, big_number);

return 0;
}