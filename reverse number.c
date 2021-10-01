#include<stdio.h>  
 int main()    
{    
int h, reverse=0, rev;    
printf("Enter a number: ");    
  scanf("%d", &h);    
  while(h!=0)    
  {    
     rev=h%10;    
     reverse=reverse*10+rev;    
     h/=10;    
  }    
  printf("Reversed Number: %d",reverse);    
return 0;  
}   
