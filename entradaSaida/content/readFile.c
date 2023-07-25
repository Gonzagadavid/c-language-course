#include <stdio.h>

int main(){
  FILE *arq;
  char c;
  arq=fopen("entradaSaida/content/bands.txt", "r");

  if(arq) {
    while ((c = getc(arq)) != EOF)
    {
      printf("%c", c);
    }
    fclose(arq);
  } else {
    perror("fopen");
  }

  return 0;
}
