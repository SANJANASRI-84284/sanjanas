#include<stdio.h>
#include<conio.h>
void main()
{
int k,n,r,rev=0;
printf("\nenter the number:");
scanf("%d",&n);
k=n;
while(n!=0)
{
 r=n%10;
 rev=rev*10+r;
 n/=10;}
 if(k==rev)
 printf("\n it is palindrome");
 else
 printf("\nit is not palindrome");
 getch();
 }
