#include<stdio.h>  
void main() {  
   int a = 90, b = 10, c;  
   
   asm {  
      mov ax,a  
      mov bx,b  
      add ax,bx  
      mov c,ax  
   }  
   
   printf("c= %d",c);  
}  
