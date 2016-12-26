#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,j;
printf("\n enter the start limit:");
scanf("%d",&x);
printf("\nenter the ending limit:");
scanf("%d",&y);
for(j=x;j<=y;j++)
{
if(j%2==0)
printf("\n even numbers are:%d",j);
}
getch();
}
