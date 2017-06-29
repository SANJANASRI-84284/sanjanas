public class StringtoInteger
{
public static void main(String[] args) 
{
String str = "123456";
char[] ch = str.toCharArray();
int[] sum = new int[ch.length];
for (int i = 0; i < ch.length; i++)
{
sum[i] = ch[i] - (int) '0';
System.out.print(sum[i]);
}
}
}
