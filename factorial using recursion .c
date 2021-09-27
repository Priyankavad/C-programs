#include<stdio.h>  
  
long factorial(int h)  
{  
  if (h == 0)  
    return 1;  
  else  
    return(h * factorial(h-1));  
}  
   
void main()  
{  
  int number;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
   
  fact = factorial(number);  
  printf("Factorial of %d is %ld\n", number, fact);  
  return 0;  
}  
