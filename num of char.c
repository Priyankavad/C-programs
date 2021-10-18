#include<stdio.h>    
#include<stdlib.h>  
int main(){  
long int h,sum=0,r;    
system("cls");  
printf("enter the number=");    
scanf("%ld",&h);    
while(h>0)    
{    
r=h%10;    
sum=sum*10+r;    
h=h/10;    
}    
h=sum;    
while(h>0)    
{    
r=h%10;    
switch(r)    
{    
case 1:    
printf("one ");    
break;    
case 2:    
printf("two ");    
break;    
case 3:    
printf("three ");    
break;    
case 4:    
printf("four ");    
break;    
case 5:    
printf("five ");    
break;    
case 6:    
printf("six ");    
break;    
case 7:    
printf("seven ");    
break;    
case 8:    
printf("eight ");    
break;    
case 9:    
printf("nine ");    
break;    
case 0:    
printf("zero ");    
break;    
default:    
printf("tttt");    
break;    
}    
h=h/10;    
}    
return 0;  
}
