#include <stdio.h>
#include <math.h>

int somar(int a, int b, int c){
  return ((pow(a, 2) + pow(b, 2) + pow(c, 2)));
}

int main() {
  int a, b, c;
  printf("Informe 3 valores:\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  printf("A soma dos quadrados dos números é: %d", somar(a, b, c));
  return 0;
}