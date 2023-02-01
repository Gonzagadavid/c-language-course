#include <stdio.h>
// Crie uma função que recebe como parâmetro um número inteiro e 
// devolve o seu dobro

char months[12][10] = {
  {"janeiro"},
  {"fevereiro"},
  {"março"},
  {"abril"},
  {"maio"},
  {"junho"},
  {"julho"},
  {"agosto"},
  {"setembro"},
  {"novembro"},
  {"outubro"},
  {"dezembro"},
};


int doub(int number) {
  return number * 2;
}

// Faça uma função que receba a data atual (dia, mẽs e ano) e exiba-a na tela 
// no formato textual por extenso

void dateFormat(int day, int month, int year) {
  extern char months[12][10];


  printf("%d de %s de %d\n", day, months[month - 1], year);
}

// Crie uma função que receb como parâmetro um valor inteiro e gere como saida
// n linhas com pontos de exclamação, conforme o exemplo abaixo (n = 5)
/*
!
!!
!!!
!!!
!!!!
!!!!!
*/

void exclamation_lines(int n) {

  char lines[n];

  for(int i = 0; i < n; ++i) {
      lines[i] = '!';
      printf("%s\n", lines);
  }

}
