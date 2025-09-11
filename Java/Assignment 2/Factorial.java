import java.util.Scanner;

class Factorial
{
	public static int Fact(int num)
	{
		if(num == 0 || num == 1)
			return 1;
		else
			return num*Fact(num-1);
	}
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter a number: ");
		int num = sc.nextInt();
		
		System.out.println("Factorial of the entered number is: " + Fact(num));
	}
}