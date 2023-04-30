#include <stdio.h>

int somaQuadrados(int x) {
  if (x == 1) return 1;
  return x * x + somaQuadrados(x - 1);
};

int main() {
  int num;
  do {
    printf("Informe um número entre 1 e 10\n");
    scanf("%d", &num);
  } while (num <= 0 || num > 10);

  printf("A soma dos quadrados dos número entre %d e 1 é: %d", num, somaQuadrados(num));

  return 0;
}