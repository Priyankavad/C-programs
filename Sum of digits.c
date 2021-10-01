#include<stdio.h>  
 int main()    
{    
int h,sum=0,g;    
printf("Enter a number:");    
scanf("%d",&h);    
while(h>0)    
{    
g=h%10;    
sum=sum+g;    
h=h/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}   
