#include <stdio.h>

int soma(int a, int b) {
  return a + b;
}

int main() {
  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  printf("O resultado da soma é %d\n", soma(a,b));

  return 0;
}
