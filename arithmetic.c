#include<stdio.h>
int main() {
  int number1, number2, sum, sub, multi, div;
  printf("Enter two numbers: ");
  scanf("%d %d",&number1, &number2);
  sum = number1 + number2;
  sub = number1 - number2;
  multi = number1 * number2;
  div = number1/number2;
  printf("%d + %d = %d", number1, number2, sum);
  printf("\n%d - %d = %d", number1, number2, sub);
  printf("\n%d * %d = %d", number1, number2, multi);
  printf("\n%d / %d = %d", number1, number2, div);
  return 0;
}
