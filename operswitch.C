 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 char operator;
 int num1,num2,total;
 clrscr;
 printf("Enter an operator(+,-,*,/):");
 scanf("%c",&operator);
 printf("Enter number 1and2:");
 scanf("%d%d",&num1,&num2);
 switch(operator)
 {
 case '+':
  total=num1+num2;
  printf("Total is=%d",total);
  break;
 case '-':
  total=num1-num2;
  printf("subtraction=%d",total);
  break;
 case '*':
  total=num1*num2;
  printf("Multiplication=%d",total);
  break;
 case '/':
  total=num1/num2;
  printf("Division=%d",total);
  break;
 }
 getch();
 }