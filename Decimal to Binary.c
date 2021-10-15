#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int h[10],p,i;    
system ("cls");  
printf("Enter the number to convert: ");    
scanf("%d",&p);    
for(i=0;p>0;i++)    
{    
h[i]=p%2;    
p=p/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",h[i]);    
}    
return 0;  
}  
