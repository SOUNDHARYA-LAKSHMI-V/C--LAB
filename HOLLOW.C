#include<stdio.h>
void main()
{
int i,j,k,sp=0;
clrscr();
for(i=5;i>=1;i--)
{
 for(j=1;j<=i;j++)
 {
  printf("*");
 }
  for(j=1;j<=sp;j++)
  {
   printf("  ");
  }
   for(k=1;k<=i;k++)
   {
    printf("*");
   }
printf("\n");
sp=sp+1;
}
sp=sp-1;
for(i=1;i<=5;i++)
{
 for(j=1;j<=i;j++)
 {
  printf("*");
 }
 for(j=1;j<=sp;j++)
 {
  printf("  ");
 }
 for(k=1;k<=i;k++)
 {
  printf("*");
 }
 printf("\n");
 sp=sp-1;

}
getch();
}