#include<stdio.h>  
 int main()    
{    
int h,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&h);    
temp=h;    
while(h>0)    
{    
r=h%10;    
sum=sum+(r*r*r);    
h=h/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   
