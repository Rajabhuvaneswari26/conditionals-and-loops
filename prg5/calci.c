#include<stdio.h>
int main()
{
int n1,n2;
char op;
printf("Enter the first number:");
scanf("%d",&n1);
printf("Enter the second number:");
scanf("%d",&n2);
printf("Enter the operator:");
scanf(" %c",&op);
switch(op){
case '+':
printf("Result is %d \n",n1+n2);
break;
case '-':
printf("Result is %d \n",n1-n2);
break;
case '*':
printf("Result is %d \n",n1*n2);
break;
case '/':
printf("Result is %d \n",n1/n2);
break;
default:
printf("Invalid operator.");
break;
}
return 0;
}
