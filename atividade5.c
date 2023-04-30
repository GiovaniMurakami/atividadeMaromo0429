#include <stdio.h>
float calcularMedia(float n1, float n2, float n3, int p1, int p2, int p3){
  return (((n1 * p1)+(n2 * p2)+(n3 * p3))/(p1+p2+p3));
}
int main() {
  float n1,n2,n3;
  int p1,p2,p3;
  printf("Insira as tres notas do aluno\n");
  scanf("%f",&n1);
  scanf("%f",&n2);
  scanf("%f",&n3);
  printf("Insira os tres pesos das notas do aluno\n");
  scanf("%d",&p1);
  scanf("%d",&p2);
  scanf("%d",&p3);
  printf("A média é: %f",calcularMedia(n1,n2,n3,p1,p2,p3));
  return 0;
}