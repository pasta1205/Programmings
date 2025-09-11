import java.util.Scanner;

class Binary
{
	public static String BinaryConv(int n)
	{
		String binary = "";
		
		while(n>0)
		{
			int remainder = n % 2;
			binary = remainder + binary;
			n /= 2;
		}
		return binary;
	}
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter a number to convert into binary: ");
		int n = sc.nextInt();
		
		System.out.println("Binary conversion of the inputted number is " + BinaryConv(n));
	}
}