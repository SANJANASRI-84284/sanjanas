#include<stdio.h>
#include<conio.h>
void main()
{
int num,remainder,res=0,orginno;
printf("\nenter the number:");
scanf("%d",&num);
orginno=num;
while(orginno!=0)
{

    remainder=orginno%10;
    res+=remainder*remainder*remainder;
        orginno/=10;
}
if(res==num)
printf("\n amstrong number");
else
printf("\n not amstrong");
getch();
}
