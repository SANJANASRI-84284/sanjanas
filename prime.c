#include<stdio.h>
#include<conio.h>
void main()
{
int n,k=0,i;
printf("\n enter the no:");
scanf("%d",&n);
for(i=2;i<=n/2;i++){
if(n%i==0)
{
k=1;
break;
}}
if(k==0)
printf("\n it is prime");
else
printf("\n it is not a prime number");
getch();
}
