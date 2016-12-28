#include<stdio.h>
#include<math.h>
int main()
{
int low,high,i,temp1,temp2,rem,n=0,res=0;
printf("\nenter the start limit:");
scanf("%d",&low);
printf("\nenter high limit:");
scanf("%d",&high);
for(i=low+1;i<high;++i)
{
temp2=i;
temp1=i;
while(temp1!=0)
{

    temp1/=10;
    ++n;
}

while(temp2!=0)
{
rem=temp2%10;
res+=pow(rem,n);
temp2/=10;
}
if(res==i)
{

printf("\n%d",i);
}
n=0;
res=0;
}
return 0;
}
