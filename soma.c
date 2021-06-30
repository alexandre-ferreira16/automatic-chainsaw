#include <stdio.h>

int soma(int a, int b, int c) {
  return a + b + c;
}

int main() {
  int a, b, c;
  
  printf("Por favor, digite três valores para soma: \n");

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  printf("O resultado da soma é %d\n", soma(a,b,c));

  return 0;
}
