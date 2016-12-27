#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,k,i,j;
printf("\n enter the starting:");
scanf("%d",&n1);
printf("\nenter the end :");
scanf("%d",&n2);
for(i=n1+1;i<n2;++i)
{
k=0;
for(j=2;j<=i/2;++j)
{
if(i%j==0)
{
k=1;
break;
}}
if(k==0)
printf("\n%d",i);
}}
