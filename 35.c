#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,fact=1;
printf("\nenter the number:");
scanf("%d",&n);
if(n==0)
fact=1;
else
{
for(i=1;i<=n;i++)
fact=fact*i;
}
printf("\nfact=%d",fact);
return 0;
}
