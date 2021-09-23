#include <stdio.h>
int main() {
    int b, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &b);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= b;
        --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}
