#include<stdio.h>
int main()
{
int n,first=0,second=1,i,next;
printf("Enter a number:");
scanf("%d",&n);
printf("fibonacci series is:");
for(i=0;first<=n;i++)
{
printf("%d",first);
next=first+second;
first=second;
second=next;
}
return 0;
}
