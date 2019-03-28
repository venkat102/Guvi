import java.io.*;
import java.util.Scanner;

public class Vowel
{
	public static void main(String[] args) {
	    
	    Scanner g=new Scanner(System.in);
	    char s=g.next().charAt(0);
	    if(s>='a' && s<='z' || s>='A' && s<='Z')
	    {
	        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
	        {
	            System.out.println("Vowel");
	        }
	        else
	        {
	            System.out.println("Consonant");
	        }
	    }
	    else
	    {
	        System.out.println("Invalid");
	    }
    }
}
