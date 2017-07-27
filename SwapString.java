package Guvi;
import java.util.*;
import java.io.IOException;
public class SwapString
{
public static void main(String[] args)throws IOException
{
	Scanner s=new Scanner(System.in);
	 String str=s.nextLine();
     String output1="";
     String output2="";
     char[] ch=str.toCharArray();
     for(int i=0;i<ch.length;i++)
     {
       if(i%2==0)
           {
	            output1+=ch[i];
            }
       else
       {
    	   output2+=ch[i];
       }
    }
try
{
	for(int i=0;i<output1.length();i++)
	{
		System.out.print(output2.charAt(i)+""+output1.charAt(i));
	}
}
catch(Exception e)
{
	if(str.length()%2==1)
	{
		System.out.println(str.charAt(str.length()-1));
}
}
s.close();
     }
     }