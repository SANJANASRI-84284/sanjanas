#include<stdio.h>
#include<conio.h>
void main()
{
int j,n,s=0;
printf("\n enter the number:");
scanf("%d",&n);
for(j=0;j<=n;j++)
{
s+=j;
}
printf("\ns=%d",s);
getch();
}
