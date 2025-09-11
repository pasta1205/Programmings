import java.util.Scanner;

class Root
{
	public static void RootCalc(int a, int b, int c)
	{
		double dis = (b*b) - (4*a*c);
		
		if(dis > 0)
		{
			System.out.println("Real and Distinct Root:");
			System.out.println("Root 1: " + ((-b + Math.sqrt(dis))/(2*a)));
			System.out.println("Root 2: " + ((-b - Math.sqrt(dis))/(2*a)));
		}
		else if(dis == 0)
		{
			System.out.println("Real and Equal Root:");
			System.out.println("Root: " + (-b / (2*a)));
		}
		else
		{
			System.out.println("Complex Root:");
			double real = -b / (2*a);
			double imgn = ((-b + Math.sqrt(-dis))/(2*a));
			System.out.println("Root 1: " + real + " + " + imgn + "i");
			System.out.println("Root 2: " + real + " - " + imgn + "i");
		}
	}
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter co-efficient a: ");
		int a = sc.nextInt();
		System.out.print("Enter co-efficient b: ");
		int b = sc.nextInt();
		System.out.print("Enter co-efficient c: ");
		int c = sc.nextInt();
		
		RootCalc(a,b,c);
	}
}