#include<stdio.h>
#include<conio.h>
void main()
{
int b,e,count,res=1;
printf("\nenter the base:");
scanf("%d",&b);
printf("\nenter the exponent:");
scanf("%d",&e);
for(count=0;count<e;count++)
{
res=res*b;
}
printf("\n power of a no is:%d",res);
getch();
}
