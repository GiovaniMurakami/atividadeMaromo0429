#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char s) {
  switch (s){
    case 'a':
      return ((nota1+nota2+nota3)/3);
    break;
    case 'p':
      return ((nota1 * 2) + (nota2 * 4) + (nota3 * 5))/11;
    break;
  }
}

int main() {
  float n1, n2, n3;
  char s;
  printf("Informe a primeira nota:");
  scanf("%f", &n1);
  printf("Informe a segunda nota:");
  scanf("%f", &n2);
  printf("Informe a terceira nota:");
  scanf("%f", &n3);

  printf("Informe uma letra (A ou P)\n");
  scanf("%s", &s);

  printf("A média escolhida entre as notas do aluno é: %f", calcularMedia(n1, n2, n3, tolower(s)));

  return 0;
}