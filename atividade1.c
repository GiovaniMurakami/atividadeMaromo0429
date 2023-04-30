#include <stdio.h>

void verPositividade(x) {
  if (x == 0) {
    printf("0");
  }
  x > 0 ? printf("1") : printf("-1");
}

int main() {
  int num;
  printf("Informe um número\n");
  scanf("%d", &num);
  verPositividade(num);
  return 0;
}