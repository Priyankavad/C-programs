
#include <stdio.h>
int main() {
  int p, h, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &p);

  for (h = 2; h <= p / 2; ++h) {
    // condition for non-prime
    if (p % h == 0) {
      flag = 1;
      break;
    }
  }

  if (p == 1) {
    printf("1 is neither prime nor composite.");
  } 
  else {
    if (flag == 0)
      printf("%d is a prime number.", p);
    else
      printf("%d is not a prime number.", p);
  }

  return 0;
}
