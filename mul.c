#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
printf("\n enter the table no:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n multiplication table of %d",i);
printf("\n****************************************");
for(j=1;j<=n;j++)
printf("%d*%d=%d",i,j,(i*j));
}
getch();
}
