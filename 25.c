#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("\nenter the year:");
scanf("%d",&a);
if((a%4==0)&&(a%100!=0)||(a%400==0))
printf("\nit is leap year");
else
printf("\nit is not a leap year");
getch();
}
