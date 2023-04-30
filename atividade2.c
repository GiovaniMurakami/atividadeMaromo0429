#include <stdio.h>

int somarIntervalo(int x, int y) {
  int soma = 0;
  if (x > y) {
    for (int i = y + 1; i < x; i++) soma += i;
  } else {
    for (int i = x + 1; i < y; i++) soma += i;
  }
  return soma;
}

int main() {
  int valor1, valor2;
  printf("Informe 2 números\n");
  scanf("%d", &valor1);
  scanf("%d", &valor2);
  printf("A soma dos inteiros entre os valores é: %d", somarIntervalo(valor1, valor2));
  return 0;
}