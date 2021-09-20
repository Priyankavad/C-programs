#include <stdio.h>
int main() {
    int divide, divi, quotie, remain;
    printf("Enter dividend: ");
    scanf("%d", &divide);
    printf("Enter divisor: ");
    scanf("%d", &divi);

    // Computes quotient
    quotie = divide / divi;

    // Computes remainder
    remain = divide % divi;

    printf("Quotient = %d\n", quotie);
    printf("Remainder = %d", remain);
    return 0;
}
