#include<stdio.h>
int main() {
  double fir, sec, tem;
  printf("Enter first number: ");
  scanf("%lf", &fir);
  printf("Enter second number: ");
  scanf("%lf", &sec);

  // value of first is assigned to temp
  tem = fir;

  // value of second is assigned to first
  fir = sec;

  // value of temp (initial value of first) is assigned to second
  sec = tem;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf\n", fir);
  printf("After swapping, second number = %.2lf", sec);
  return 0;
}
