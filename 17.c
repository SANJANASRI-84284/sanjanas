#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("\nenter the character");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("\nit is alphabet");
else
printf("\nit is not a alphabet");
getch();
}
