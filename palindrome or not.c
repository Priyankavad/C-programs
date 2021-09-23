#include <stdio.h>
int main() {
  int h, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &h);
    original = h;

    // reversed integer is stored in reversed variable
    while (h != 0) {
        remainder = h % 10;
        reversed = reversed * 10 + remainder;
        h /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
