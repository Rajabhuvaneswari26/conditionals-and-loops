#include<stdio.h>
int main()
{
int i,n,total=1;
printf("Enter any number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
total=total*i;
}
printf("Factorial: %d",total);
return 0;
}
