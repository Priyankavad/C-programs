#include<stdio.h>    
int main()    
{    
 int h1=0,h2=1,h3,p,num;    
 printf("Enter the number of elements:");    
 scanf("%d",&num);    
 printf("\n%d %d",h1,h2);//printing 0 and 1    
 for(p=2;p<num;++p)//loop starts from 2 because 0 and 1 are already printed    
 {    
  h3=h1+h2;    
  printf(" %d",h3);    
  h1=h2;    
  h2=h3;    
 }  
  return 0;  
 }    
