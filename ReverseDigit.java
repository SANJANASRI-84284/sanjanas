import java.util.*;
public class ReverseDigit
{
public static void main(String[] args)
{
int a,n=0;
Scanner s=new Scanner(System.in);
System.out.println("the reversed digit is :");
while(a!=0)
{
n=a%10;
a=a/10;
System.out.print(n);
}
s.close();
}
}
