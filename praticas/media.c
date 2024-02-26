#include <stdio.h>

int main() {
  float p1 = 1.0;
  float p2 = 1.0;

  printf("Digite a nota da p1: ");
  scanf("%f", &p1);
  printf("Digite a nota da p2:");
  scanf("%f", &p2);

  float media = (0.4 * p1) + (0.6 * p2);

  printf("A média é: %f", media);

  return 0;