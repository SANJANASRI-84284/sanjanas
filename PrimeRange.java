package Guvi;
import java.util.*;
public class PrimeRange
{
	public static void main(String[] args)
	{
Scanner s=new Scanner(System.in);
int range1=s.nextInt();
int range2=s.nextInt();
int temp=0;
for(int i=range1;i<=range2;i++)
{
	for(int j=2;j<i;j++)
	{
		if(i%j==0)
		{
			temp=1;
		}
		
	}
if(temp==0)
		{
			System.out.println(i);
		}
temp=0;

	
}
s.close();
}
}