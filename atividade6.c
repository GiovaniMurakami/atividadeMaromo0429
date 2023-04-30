#include <stdio.h>
int verAB, verCD;

void getBigger(a, b, c, d) {
  if (a > b) {
    verAB = a;
  } else
    verAB = b;

  if (c > d) {
    verCD = c;
  } else
    verCD = d;
  verAB > verCD ? printf("\nMaior: %d", verAB) : printf("\nMaior: %d", verCD);
  printf("\n");
}

void getSmaller(a, b, c, d) {
  if (a < b) {
    verAB = a;
  } else
    verAB = b;
  if (c < d) {
    verCD = c;
  } else
    verCD = d;
  verAB < verCD ? printf("\nMenor: %d", verAB) : printf("\nMenor: %d", verCD);
  printf("\n");
}

int main() {
  int n1, n2, n3, n4;
  printf("Digite 4 valores: \n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  scanf("%d", &n4);
  getBigger(n1, n2, n3, n4);
  getSmaller(n1, n2, n3, n4);
  return 0;
}