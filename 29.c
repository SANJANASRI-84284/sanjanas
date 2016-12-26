#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,count=0;
printf("\nenter the integer to count:");
scanf("%d",&n);
k=n;
while(k!=0)
{
k=k/10;
count++;
}
printf("\n the number of digits is:%d",count);
getch();
}
