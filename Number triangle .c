#include<stdio.h>    
#include<stdlib.h>  
int main(){  
  int i,j,k,h,p;    
system("cls");  
printf("enter the range=");    
scanf("%d",&p);    
for(i=1;i<=p;i++)    
{    
for(j=1;j<=p-i;j++)    
{    
printf(" ");    
}    
for(k=1;k<=i;k++)    
{    
printf("%d",k);    
}    
for(h=i-1;h>=1;h--)    
{    
printf("%d",h);    
}    
printf("\n");    
}    
return 0;  
}  
