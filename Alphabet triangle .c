#include<stdio.h>    
#include<stdlib.h>  
int main(){  
  int ch=65;    
    int i,j,h,p;    
  system("cls");  
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            printf(" ");    
        for(h=1;h<=i;h++)    
            printf("%c",ch++);    
            ch--;    
        for(p=1;p<i;p++)    
            printf("%c",--ch);    
        printf("\n");    
        ch=65;    
    }    
return 0;  
}  
