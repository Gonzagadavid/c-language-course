#include <stdio.h>

/*
Escreva um programa que declare um inteiro, um real e um char,
e ponteiros para inteiro, real e char. Associe as  variáveis aos 
ponteiros(use &). Modifique os valores de cada variável usando os 
ponteiros. Imprima os valores das variáveis antes e após a modificação
*/

int main()
{
  int n = 1;
  float f = 2.3;
  char c = 'q';

  printf("int n = %d, ponteiro de n = %p\n", n, &n);
  printf("float f = %f, ponteiro de f = %p\n", f, &f);
  printf("char c = %c, ponteiro de c = %p\n", c, &c);

  int* p_n;
  float* p_f;
  char* p_c;


  p_n = &n;
  p_f= &f;
  p_c= &c;

  *(p_n) = 5;
  *(p_f) = 6.7;
  *(p_c) = 'o';

  printf("após a modificação:\n");

  printf("int n = %d, ponteiro de n = %p\n", n, &n);
  printf("float f = %f, ponteiro de f = %p\n", f, &f);
  printf("char c = %c, ponteiro de c = %p\n", c, &c);

  return 0;
}
