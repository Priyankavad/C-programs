#include<stdio.h>    
void printFibonacci(int h){    
    static int h1=0,h2=1,h3;    
    if(h>0){    
         h3 = h1 + h2;    
         h1 = h2;    
         h2 = h3;    
         printf("%d ",h3);    
         printFibonacci(h-1);    
    }    
}    
int main(){    
    int h;    
    printf("Enter the number of elements: ");    
    scanf("%d",&h);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    printFibonacci(h-2);//h-2 because 2 numbers are already printed    
  return 0;  
 }    
