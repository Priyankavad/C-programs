#include<stdio.h>  
int main()    
{    
 int i,facto=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      facto=facto*i;    
  }    
  printf("Factorial of %d is: %d",number,facto);    
return 0;  
}   
