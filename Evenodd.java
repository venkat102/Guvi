import java.io.*;
import java.util.Scanner;

public class Evenodd
{
	public static void main(String[] args) {
	    
	    Scanner g=new Scanner(System.in);
	    int s=g.nextInt();
	    if(s<=0)
	    {
            System.out.println("Invalid");
	    }
	    else if (s%2==0)
	    {
	        System.out.println("Even");
	    }
	    else if (s%2!=0)
	    {
	        System.out.println("Odd");
	    }
	}
}
