import java.util.Scanner;

class LargestTwo
{	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter number 1: ");
		int n1 = sc.nextInt();
		
		System.out.print("Enter number 2: ");
		int n2 = sc.nextInt();
		
		int largest = (n1 > n2) ? n1:n2;
		
		System.out.println("Largest: " + largest);
	}
}