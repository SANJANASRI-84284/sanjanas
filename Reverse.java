import java.util.*;
class Reverse
{
    public static void main(String[] args)
      {
         Scanner s=new Scanner(System.in)
         String str=s.next();
         String str1=new StringBuffer(str).reverse().toString();
         System.out.println("The reversed string is: "+str1);
         s.close();
      }
}
