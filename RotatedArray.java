package Guvi;
import java.util.*;
public class RotatedArray 
{
	public static void main(String[] args)
	{
Scanner s=new Scanner(System.in);
System.out.println("enter the size of the array");
int n=s.nextInt();
System.out.println("Enter the number of elements to rotate");
int k=s.nextInt();
int[] a=new int[n];
int[] b=new int[n];
int temp=0;
for(int i=0;i<n;i++)
{
	a[i]=s.nextInt();
}
for(int i=0;i<n;i++)
{
	if(k!=0)
	{
	b[i]=a[n-k];
	k--;
	}
	else
	{
		break;
	}
	temp=i;
}
int g=0;
for(int i=temp+1;i<(n-k);i++)
{
	b[i]=a[g];
	g++;
}
for(int i=0;i<n;i++)
{
	System.out.println(b[i]);
}
}
}