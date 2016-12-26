#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
printf("\nenter the positive integer");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum+=i;
}
printf("\nsum=%d",sum);
getch();
}
