#include <stdio.h>

// Crie uma função que recebe como parâmetro um número inteiro e 
// devolve o seu dobro

int doub(int number) {
  return number * 2;
}

// Faça uma função que receba a data atual (dia, mẽs e ano) e exiba-a na tela 
// no formato textual por extenso

void dateFormat(int day, int month, int year) {
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

  printf("%d de %s de %d\n", day, months[month - 1], year);
}