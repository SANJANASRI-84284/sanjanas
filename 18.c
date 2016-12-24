#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
printf("\nenter the first  numbers:");
scanf("%d",&n1);
printf("\nenter the second numbers:");
scanf("%d",&n2);
printf("\nenter the third  numbers:");
scanf("%d",&n3);
if((n1>n2)&&(n1>n3))
printf("\n%d is greater",n1);
else if(n2>n3)
printf("\n%d is greater",n2);
else
printf("\n%d is greater",n3);
getch();

}
