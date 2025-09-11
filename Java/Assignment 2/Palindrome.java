import java.util.Scanner;

class Palindrome
{
	public static int pal(int n)
	{
		int revn=0;
		while(n>0)
		{
			int digit = n % 10;
			revn = (revn * 10) + digit;
			n /= 10;
		}
		return revn;
	}
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter a number to check palindrome: ");
		int n = sc.nextInt();
		
		int revn = pal(n);
		
		if (n == revn)
			System.out.println("Entered number is a Palindrome.");
		else
			System.out.println("Entered number is not a Palindrome.");
	}
}