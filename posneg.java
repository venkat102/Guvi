import java.io.*;
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {

	    Scanner g=new Scanner(System.in);
	    int s=g.nextInt();
	    if(s==0)
	    {
            System.out.println("Zero");
	    }
	    else if (s > 0)
	    {
	        System.out.println("Positive");
	    }
	    else if (s < 0)
	    {
	        System.out.println("Negative");
	    }
	}
}
