#include<stdio.h>
#include<conio.h>
int main()
{
int num,sign;
printf("Enter a number");
scanf("%d",&num);
if(num>0)
 sign=1;
else if(num<0)
 sign=-1;
else
 sign=0;
switch(sign)
{
case 1:
 printf("%d is positive",num);
 break;
case -1:
 printf("%d is negative",num);
 break;
case 0:
 printf("%d is zero",num);
default:
 printf("Error...");
}
return 0;
}
