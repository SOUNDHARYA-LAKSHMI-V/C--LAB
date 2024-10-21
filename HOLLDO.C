#include<stdio.h>
void main()
{
int i,j,k,sp=0;
clrscr();
i=5;
do
{
 j=1;
 do
 {
  printf("*");
  j++;
 } while(j<=i);
 j=1;
 while(j<=sp)
 {
  printf("  ");
  j++;
 }
 k=1;
 do
 {
  printf("*");
  k++;
 }while(k<=i);
printf("\n");
sp=sp+1;
i--;
}while(i>=1);
sp=sp-1;
i=1;
do
{
 j=1;
 do
 {
  printf("*");
  j++;
 }while(j<=i);
 j=1;
 while(j<=sp)
 {
  printf("  ");
  j++;
 }
 k=1;
 do
 {
  printf("*");
  k++;
 }while(k<=i);
printf("\n");
sp=sp-1;
i++;
}while(i<=5);
getch();
}
