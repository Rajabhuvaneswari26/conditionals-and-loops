#include<stdio.h>
int main()
{
int digit,n,reverse=0;
printf("Enter a number:");
scanf("%d",&n);
while(n!=0)
{
digit=n%10;
reverse=reverse*10+digit;
n/=10;
}
printf("Reverse of the number is %d \n",reverse);
return 0;
}
