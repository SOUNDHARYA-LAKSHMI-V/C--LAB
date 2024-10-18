#include<stdio.h>
#include<conio.h>
void main()
{
int sp,cp,result,choice;
clrscr;
printf("Enter the cost price:");
scanf("%d",&cp);
printf("Enter the selling price:");
scanf("%d",&sp);
if(sp>cp)
{ choice=1;
  result=cp-sp; }
else if(sp<cp)
{ choice=2;
  result=sp-cp;}
else
  choice=3;
switch(choice)
{
case 1:
 printf("Profit is :%d",result);
 break;
case 2:
 printf("Loss is :%d",result);
 break;
case 3:
 printf("No profit or loss");
 break;
}
getch();
}