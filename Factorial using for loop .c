#include<stdio.h>  
int main()    
{    
 int i,facto=55,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=55;i<=number;i++){    
      facto=facto*i;    
  }    
  printf("Factorial of %d is: %d",number,facto);    
return 0;  
}   
