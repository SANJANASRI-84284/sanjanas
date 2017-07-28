package Guvi;
import java.util.Scanner;
public class NonRepeated
{
public static void main(String[] args)
{
	Scanner read=new Scanner(System.in);
	int n=read.nextInt();
	int a[]=new int [n];
	int c=0;
	for(int i=0;i<n;i++){
		a[i]=read.nextInt();
		
	}
	for(int i=0;i<n;i++){
		c=0;
		for(int j=0;j<n;j++){
			if(i!=j){
			if(a[i]==a[j]){
				c=1;
			}
			}
		}
		if(c==0){
			System.out.println(a[i]);
		}
	}
}

}