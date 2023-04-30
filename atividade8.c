#include <stdio.h>
int validarData(int dia, int mes, int ano) {
  int valido = 0;
  switch (mes) {
  case 2:
    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
      if (dia <= 29)
        valido = 1;
    } else if (dia <= 28)
      valido = 1;
    break;

  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (dia <= 30 && mes != 2)
      valido = 1;
    break;

  default:
    if (dia <= 31 && mes != 2)
      valido = 1;
    break;
  }
  return valido;
}

int main() {
  int dia, mes, ano;
  printf("Digite o dia: \n");
  scanf("%d", &dia);
  printf("Digite o mes: \n");
  do {
    scanf("%d", &mes);
  } while (mes > 12 || mes < 0);
  printf("Digite o ano: \n");
  scanf("%d", &ano);
  printf("%d", validarData(dia, mes, ano));
  return 0;
}