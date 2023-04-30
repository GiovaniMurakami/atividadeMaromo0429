#include <stdio.h>
int res=0;

int somaIntervalo(x){
  if (x == 0) return res;
  res += x;
  return somaIntervalo(x-1);
}

int main() {
  int n;
  do{
  printf("Digite um valor de 0 a 30\n");
  scanf("%d",&n);
  }while(n > 30 && n < 0);
  printf("A soma do intervalo entre 1 e n é de : %d", somaIntervalo(n));

  return 0;
}