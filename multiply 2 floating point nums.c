#include <stdio.h>
int main() {
    double h, p, prod;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &h, &p);  
 
    // Calculating product
    prod = h * p;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %.2lf", prod);
    
    return 0;
}
