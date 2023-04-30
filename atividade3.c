#include <stdio.h>

int somarIntervalorDivisiveis(x, y, z) {
  int soma = 0;
  if (y > z) {
    for (int i = z + 1; i < y; i++) {if (i % x == 0) soma += i;}
  } else {
    for (int i = y + 1; i < z; i++) {if (i % x == 0) soma += i;}
  }
  return soma;
}

int main() {
  int a, b, c;
  do {
    printf("Informe um número maior que 1\n");
    scanf("%d", &a);
  } while (a<1);
  printf("Informe um número\n");
  scanf("%d", &b);
  printf("Informe um número\n");
  scanf("%d", &c);
  printf("A soma dos valores entre B e C que são divisíveis por A é: %d", somarIntervalorDivisiveis(a, b, c));
  return 0;
}