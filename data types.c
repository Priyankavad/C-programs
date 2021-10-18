#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size is: %zu bytes\n", sizeof(intType));
    printf("Size is: %zu bytes\n", sizeof(floatType));
    printf("Size is: %zu bytes\n", sizeof(doubleType));
    printf("Size is: %zu byte\n", sizeof(charType));
    
    return 0;
}
