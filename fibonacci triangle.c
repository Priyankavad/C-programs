#include<stdio.h>    
#include<stdlib.h>  
int main(){  
   int a=0,b=1,i,h,n,j;    
system("cls");  
    printf("Enter the limit:");    
    scanf("%d",&n);    
    for(i=1;i<=n;i++)    
    {    
        a=0;    
        b=1;    
        printf("%d\t",b);    
        for(j=1;j<i;j++)    
        {    
            h=a+b;    
            printf("%d\t",h);    
            a=b;    
            b=h;    
    
        }    
        printf("\n");    
    }    
return 0;  
}  
